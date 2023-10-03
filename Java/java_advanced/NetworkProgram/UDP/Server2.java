package NetworkProgram.UDP;

import java.net.DatagramPacket;
import java.net.DatagramSocket;

public class Server2 {
    public static void main(String[] args) throws Exception{
        DatagramSocket socket=new DatagramSocket(6666);
        byte[] buffer=new byte[1024*64];
        DatagramPacket packet=new DatagramPacket(buffer, buffer.length);
        while(true){
            socket.receive(packet);
        int len=packet.getLength();
        String str=new String(buffer,0,len);
        System.out.println(str);
        System.out.println(packet.getAddress().getHostAddress());
        System.out.println(packet.getPort());
        if("exit".equals(str)){
            break;
        }
    }
    }
}
