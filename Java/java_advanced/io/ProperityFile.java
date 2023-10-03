import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.OutputStream;
import java.util.Properties;

public class ProperityFile {
    public static void main(String[] args) throws FileNotFoundException, IOException{
        Properties properties=new Properties();
        properties.load(new FileReader("Java\\java_advanced\\io\\property.properties"));
        System.out.print(properties.getProperty("admin"));
        properties.setProperty("user", "hyfro");
        OutputStream output=new FileOutputStream("Java\\java_advanced\\io\\property.properties");
        properties.store(output, "test");
    }
}
