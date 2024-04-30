import java.util.Scanner;
enum Grade{
        A,B,C,D,E;
    }
public class Main10 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        while(sc.hasNextInt()){
            int score=sc.nextInt();
            Grade grade=getGrade(score);
            String judge="";
            switch (grade) {
                case A:
                    judge="Excellent";
                    break;
                case B:
                    judge="Good";
                    break;
                case C:
                    judge="Average";
                    break;
                case D:
                    judge="Fair";
                    break;
                case E:
                    judge="Poor";
                    break;
                default:
                    break;
            }
            System.out.println(judge);
            printGradeInfo(grade);
        }
    }

    public static Grade getGrade(int score){
        if(score>=90&&score<=100)return Grade.A;
        else if(score>=80&&score<90)return Grade.B;
        else if(score>=70&&score<80)return Grade.C;
        else if(score>=60&&score<70)return Grade.D;
        return Grade.E;
    }
    public static void printGradeInfo(Grade grade){
        System.out.println("class name="+Grade.class);
        System.out.println("grade value="+grade);
    }
}
