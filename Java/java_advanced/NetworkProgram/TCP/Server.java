package NetworkProgram.TCP;

import java.io.DataInputStream;
import java.io.InputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class Server {
    public static void main(String[] args) throws Exception{
      ServerSocket serverSocket=new ServerSocket(8888);
      Socket socket=serverSocket.accept();
      InputStream input=socket.getInputStream();
      DataInputStream inputStream=new DataInputStream(input);
      System.out.println(inputStream.readUTF());
      System.out.println(socket.getRemoteSocketAddress());
      inputStream.close();
      socket.close();
    }
}
