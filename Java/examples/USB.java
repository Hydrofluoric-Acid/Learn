public class USB {
    public static void main(String[] args) {
        Computer computer=new Computer();
        computer.ComputerTurnOn();
        computer.ComputerTurnOff();
    }
}
interface USBinterface{
    void turnOn();
    void turnOff();
}
class Mouse implements USBinterface{
    public void turnOn(){
        System.out.println("mouse has turn on");
    }
    public void turnOff(){
        System.out.println("mouse has turn off");
    }
}
class Keyboard implements USBinterface{
    public void turnOn(){
        System.out.println("keyboard has turn on");
    }
    public void turnOff(){
        System.out.println("keyboard has turn off");
    }
}
class Computer{
    private USBinterface[] usbArr=new USBinterface[2];
    public Computer(){
    usbArr[0]=new Mouse();
        usbArr[1]=new Keyboard();
    }

    
    
    public void ComputerTurnOn(){
        for (int i = 0; i < usbArr.length; i++) {
            usbArr[i].turnOn();
        }
    }
    public void ComputerTurnOff(){
        for (int i = 0; i < usbArr.length; i++) {
            usbArr[i].turnOff();
        }
    }
}