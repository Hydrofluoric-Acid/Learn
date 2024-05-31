package course;

import java.io.*;

public class FileIO {

	public static void main(String[] args) throws Exception {
		DataInputStream in=new DataInputStream(new FileInputStream("D:/Coding/Learn/Java/eclipse_workspace/Course/src/course/data.txt"));
		BufferedReader d=new BufferedReader(new InputStreamReader(in));
		String s;
		int count=0;
		while((s=d.readLine())!=null) {
			//System.out.println(s);
			String[] arr=s.split(" ");
			double a=Double.parseDouble(arr[0]),b=Double.parseDouble(arr[1]);
			System.out.printf("%.2f*%.2f=%.2f  %.2f/%.2f=", a,b,a*b,a,b);
			if(b==0.00)System.out.print("没有计算结果\n");
			else System.out.printf("%.2f\n", a/b);
		}
	}

}
