import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.net.URL;

public class DownloadPicFromURL_ {
    public static void main(String[] args) {
        
    }
    public static void downloadPicture(String download_url,String path) throws Exception{
        URL url=new URL(download_url);
        try(DataInputStream dataInputStream=new DataInputStream(url.openStream())){
            File file=new File(path);
            if(!file.getParentFile().exists()){
                try{
                    file.getParentFile().mkdirs();
                    file.createNewFile();
                }catch(Exception e){
                    e.printStackTrace();
                }
            }

            FileOutputStream fileOutputStream=new FileOutputStream(file);
            ByteArrayOutputStream outputStream=new ByteArrayOutputStream();
            byte[] buffer=new byte[1024];
            int length;
            while ((length=dataInputStream.read(buffer))>0) {
                outputStream.write(buffer, 0, length);
            }
            fileOutputStream.write(outputStream.toByteArray());
            dataInputStream.close();
            fileOutputStream.close();
            outputStream.close();
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}
