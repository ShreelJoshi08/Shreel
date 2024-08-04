
import java.util.*;
class Course
{
    private int CId;
    private String courseName;
    private int credits;

    public Course(int courseID, String courseName, int credits) {
        this.CId = courseID;
        this.courseName = courseName;
        this.credits = credits;
    }
    public int getCourseId(){
        return CId;
    }
    public String getCourseName(){
        return courseName;
    }
    public int getCredits(){
        return credits;
    }
    public String toString(){
        return "courseId : " + getCourseId() + "   Course name : " + getCourseName() + "   Credits " + getCredits();
    }
}

class Enrollment{
    private int[][] studentCourses;
    private int count;

    public Enrollment(int maxStudents,int maxCourses)
    {
        studentCourses = new int[maxStudents][maxCourses];
        count=0;
    }

    public void enroll(int studentId, int courseID)
    {
        studentCourses[studentId][count] = courseID;
        count++;
    }

    public void drop(int studentID, int courseID) 
    {
        for (int i = 0; i < count; i++) 
        {
            if (studentCourses[studentID][i] == courseID) 
            {
                studentCourses[studentID][i] = studentCourses[studentID][count - 1];
                studentCourses[studentID][count - 1] = 0;
                count--;
                break;
            }
        }
    }
    private Course getCourseByID(int courseID, Course[] courseCatalog)
    {
        for (Course course : courseCatalog)
         {
            if (course.getCourseId() == courseID) 
            {
                return course;
            }
        }
        return null;
    }
    public void getEnrolledCourses(int studentID, Course[] courseCatalog) 
    {
        System.out.println("Courses enrolled by student " + studentID + ":");
        for (int courseID : studentCourses[studentID]) 
        {
            if (courseID != 0) 
            {
                Course course = getCourseByID(courseID, courseCatalog);
                if (course != null) {
                    System.out.println(course);
                }
            }
        }
    }

}
public class Assig2 {
    public static void main(String[] args) {
        Scanner S1 = new Scanner(System.in);
        Course[] courses = {
            new Course(1, "Math", 3),
            new Course(2, "PHY", 4),
            new Course(3, "CHemistry", 2)
        };
        Enrollment enrollment = new Enrollment(100, 10);

        int n,stuId,courseId;
        char choice;

        do { 
            System.out.println("1 : enroll course ");
            System.out.println("2 : getEnrolled course ");
            System.out.println("3 : Drop");
            System.out.println("4 : exit");
            System.out.print("Enter your choice : ");
            // System.out.println(" enrolled course");
            n = S1.nextInt();
            switch(n)
            {
                case 1:
                    System.out.print("Enter student Id : ");
                    stuId = S1.nextInt();
                    System.out.print("Enter course id : ");
                    courseId = S1.nextInt();
                    enrollment.enroll(stuId,courseId);
                    break;
                case 2:
                    System.out.print("Enter student Id : ");
                    stuId = S1.nextInt();
                    enrollment.getEnrolledCourses(stuId, courses);
                    break;
                case 3:
                    System.out.print("Enter student id : ");
                    stuId = S1.nextInt();
                    System.out.print("Enter course id : ");
                    courseId = S1.nextInt();
                    enrollment.drop(stuId , courseId);
                    break;
                case 4:
                    return;
                default:
                    System.out.println("Enter your choise between  1 to 4");
            }
            
        } while (n!=4);
    }
    //S1.Close();
}