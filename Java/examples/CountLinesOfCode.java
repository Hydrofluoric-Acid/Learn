import java.io.File;

public class CountLinesOfCode {
    public static void main(String[] args) throws Exception {
        File dir = new File("D:/Coding/");
        System.out.println(findCodeFiles(dir, ".java"));

    }

    public static int findCodeFiles(File dir,String...suffix){
        if(dir==null|!dir.exists()|dir.isFile()){
            return -1;
        }
        File[] files=dir.listFiles();
        if(files!=null&files.length>0){
            for (File f : files) {
                if(f.isFile()&endWithSuffix(f.getName(),suffix)){
                    return calLines(f);
                }else{
                    findCodeFiles(f, suffix);
                }
            }
        }return -2;
    }

    public static boolean endWithSuffix(String filename, String... suffix) {
        for (String str : suffix) {
            if (filename.endsWith(str)) {
                return true;
            }
        }
        return false;
    }

    public static int calLines(File f) {
        return 0;
    }

}