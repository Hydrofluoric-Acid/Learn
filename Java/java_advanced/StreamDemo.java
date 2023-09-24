import java.io.FileInputStream;
import java.io.FileReader;
import java.io.InputStream;
import java.io.Reader;
import java.util.Arrays;

public class StreamDemo {
    public static void main(String[] args) throws Exception {
        /*
         * List|Set|Map.values()|Map.keys().stream()
         * Arrays.stream(array)
         * 
         * Stream<T> filter()
         * Stream<T> sorted()
         * Stream<T> limit(long MaxSize)
         * Stream<T> skip(long n)
         * Stream<T> distinct()
         * Stream<T> contact(Stream a,Stream b)
         * 
         * 
         */
        try(FileInputStream inputs=new FileInputStream("D:\\Coding\\Learn\\Main.java") ){
            byte[] buffer=new byte[2];
            int len;
            while((len=inputs.read(buffer))!=-1){
                System.out.printf(Arrays.toString(buffer)+new String(buffer,0,len));
            }
        }catch(Exception e){
            e.printStackTrace();
        }
    }

}