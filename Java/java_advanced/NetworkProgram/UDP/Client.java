package NetworkProgram.UDP;

import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class Client {
    public static void main(String[] args) throws Exception{
        DatagramSocket socket=new DatagramSocket(7777);
        byte[] bytes="今天元神启动，ajfdsfidjfhjasdk".getBytes();
        DatagramPacket packet=new DatagramPacket(bytes,bytes.length,InetAddress.getLocalHost(),6666);
        socket.send(packet);
        System.out.println("finish!");
        socket.close();
    }
}
