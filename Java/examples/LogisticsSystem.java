import java.util.Arrays;

public class LogisticsSystem {
    public static void main(String[] args) {
        Ztransportation transportation = new Ztransportation("T123", "Model XYZ", "John");
        Phone phone = new Phone();
        SendTask task = new SendTask("G001", 10.5);
        task.sendBefore();
        task.sendGoods(transportation, phone);
        task.transport();
        task.keepCarThen(transportation);
    }
}

abstract class Transportation {
    private String number;
    private String model;
    private String[] admin;

    public Transportation() {
    }

    public Transportation(String number, String model, String... admin) {
        this.number = number;
        this.admin = admin;
        this.model = model;
    }

    public void setInfo(String number, String model, String... admin) {
        this.number = number;
        this.admin = admin;
        this.model = model;
    }

    public String getNumber() {
        return this.number;
    }

    public String getModel() {
        return model;
    }

    public String[] getAdmin() {
        return admin;
    }
}

interface CarKeep {
    void keepCar();
}

class Ztransportation extends Transportation implements CarKeep {
    public Ztransportation() {
    }

    public Ztransportation(String number, String model, String... admin) {
        super(number, model, admin);
    }

    @Override
    public void keepCar() {
        System.out.println("car is keeping");
    }

}
class SendTask{
    private String goodsNum;
    private double goodsWeight;
    public SendTask(String goodsNum,double goodsWeight){
        this.goodsNum=goodsNum;
        this.goodsWeight=goodsWeight;
    }
    public SendTask(){}
    public void sendBefore(){
        System.out.println(goodsNum+" weghts "+goodsWeight+" will send");
    }
    public void sendGoods(Ztransportation t,GPS tool){
        System.out.println(Arrays.toString(t.getAdmin())+"is driving"+t.getModel()+t.getNumber()+tool.showCoordinate());
    }
    public void transport(){
        System.out.println("goods is transporting");
    }
    public void keepCarThen(Ztransportation t){
        t.keepCar();
    }
}
interface GPS{
    String showCoordinate();
}
class Phone implements GPS{
    @Override
    public String showCoordinate(){
        String location="111,345";
        return location;
    }
}