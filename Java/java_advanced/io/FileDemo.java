import java.io.File;
import java.lang.StringBuilder;
import java.text.SimpleDateFormat;

public class FileDemo {
    public static void main(String[] args) throws Exception {
        File f1=new File("Java\\java_advanced\\io\\FileDemo.java");
        System.out.println(f1.exists());
        File f2=new File("Java/java_advanced/io", "FileDemo.java");
        File f3=new File("Java\\");
        File f4=new File(f3, "FileDemo.java");
        System.out.println(f4.exists());
        StringBuilder stringBuilder=new StringBuilder("");
        stringBuilder.append(f1.getAbsolutePath()+"\n"+f1.getName()+"\n"+f1.length()+"KB\n"+new SimpleDateFormat("yyyy/MM/dd HH:mm:ss").format(f1.lastModified())+"\n"+f1.getPath());
        System.out.println(stringBuilder);
        System.out.println(f3.length());
        File[] files = f3.listFiles();
        for (File file : files) {
            System.out.println(file.getAbsolutePath());
        }
        System.out.println(FileOperator.delete("D:\\test\\dir"));
        System.out.println(FileOperator.delete("D:\\test\\dirnull"));
        System.out.println(FileOperator.delete("D:\\test\\main.cpp"));
        System.out.println(FileOperator.copy("D:\\test", "D:\\Coding"));
        File f5=new File("D:\\test");
        for (String s : f5.list()) {
            System.out.println(s);
        }
        System.out.println(f5.getName());
    }
}
