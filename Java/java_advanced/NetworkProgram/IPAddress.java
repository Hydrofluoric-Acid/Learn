package NetworkProgram;
import java.net.InetAddress;

public class IPAddress {
    public static void main(String[] args) throws Exception {
        InetAddress ip1=InetAddress.getLocalHost();
        System.out.println(ip1.getHostName());
        System.out.println(ip1.getHostAddress());
        //LAPTOP-AM90605C
        //10.102.223.177
        //public static InetAddress getLocalHost()/getByName(String host)
        InetAddress ip2=InetAddress.getByName("www.baidu.com");
        System.out.println(ip2.getHostName());
        System.out.println(ip2.getHostAddress());
        //www.baidu.com
        //14.119.104.254

        System.out.println(ip1.isReachable(0));
        System.out.println(ip2.isReachable(180));
    }
}
