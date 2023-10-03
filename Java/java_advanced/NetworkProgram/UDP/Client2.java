package NetworkProgram.UDP;

import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.util.Scanner;

public class Client2 {
    public static void main(String[] args) throws Exception {
        DatagramSocket socket=new DatagramSocket();
        Scanner sc=new Scanner(System.in);
        while(true){
            String msg=sc.nextLine();
            
            byte[] bytes=msg.getBytes();
            DatagramPacket packet=new DatagramPacket(bytes, bytes.length,InetAddress.getLocalHost(),6666);
            socket.send(packet);
            if("exit".equals(msg)){
                System.out.println("exit");
                socket.close();
                sc.close();
                break;
            }
        }
    }
}
