package NetworkProgram.TCP;

import java.io.DataOutputStream;
import java.io.OutputStream;
import java.net.Socket;

public class Client {
    public static void main(String[] args) throws Exception{
        Socket socket=new Socket("127.0.0.1", 8888);
        OutputStream output=socket.getOutputStream();
        DataOutputStream outputStream=new DataOutputStream(output);
        outputStream.writeUTF("test");
        outputStream.close();
        socket.close();
    }
}
