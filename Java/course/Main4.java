import java.util.Scanner;

public class Main4 {
    public static void main(String[] args) {
        int MaxScore = -1, SecondMaxScore = -1, score = 0;
        String MaxScorestu = "", SecondMaxScorestu = "", stu = "";
        Scanner sc = new Scanner(System.in);
        System.out.println("输入学生个数；");
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            System.out.println("输入学生姓名及成绩：");
            stu = sc.next();
            score = sc.nextInt();
            if (score > MaxScore) {
                SecondMaxScore = MaxScore;
                SecondMaxScorestu = MaxScorestu;
                MaxScore = score;
                MaxScorestu = stu;
            } else if (score >= SecondMaxScore) {
                SecondMaxScore = score;
                SecondMaxScorestu = stu;
            }
        }
        sc.close();
        System.out.println("最高分是" + MaxScorestu + " 第二高分是" + SecondMaxScorestu);
    }
}
