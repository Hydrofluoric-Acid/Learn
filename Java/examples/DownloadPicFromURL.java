import java.io.*;
import java.net.URL;

public class DownloadPicFromURL {
    // 通过url下载图片
    public static void main(String[] args) {
        String url="https://tse2-mm.cn.bing.net/th/id/OIP-C.Ytk7yXs2i0y2oYOvP-x2mAHaHa?w=196&h=196&c=7&r=0&o=5&dpr=1.5&pid=1.7";
        String path="D:\\Coding\\Learn\\test.jpg";
        downloadPicture(url, path);
    }
    public static void downloadPicture(String urlList, String path) {
        URL url = null;
        try {
            url = new URL(urlList);
            DataInputStream dataInputStream = new DataInputStream(url.openStream());  // 文件读取

            // 如果目录不存在就创建目录
            File file = new File(path);
            if(!file.getParentFile().exists()){
                try {
                    file.getParentFile().mkdirs();
                    file.createNewFile();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }

            FileOutputStream fileOutputStream = new FileOutputStream(file); // 文件写出
            ByteArrayOutputStream outputStream = new ByteArrayOutputStream();
            byte[] buffer = new byte[1024];
            int length;

            while ((length = dataInputStream.read(buffer)) > 0) {
                outputStream.write(buffer, 0, length);
            }
            fileOutputStream.write(outputStream.toByteArray());

            // 连接关闭
            dataInputStream.close();
            fileOutputStream.close();
            outputStream.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
