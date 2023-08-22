public class LogisticsSystem {
    public static void main(String[] args) {

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