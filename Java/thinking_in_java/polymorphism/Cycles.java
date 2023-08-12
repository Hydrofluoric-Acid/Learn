package thinking_in_java.polymorphism;

public class Cycles {
    public static void main(String[] args) {
        Unicycle unicycle=new Unicycle();
        Ride.ride(unicycle);
        Bicycle bicycle=new Bicycle();
        Ride.ride(bicycle);
        Tricycle tricycle=new Tricycle();
        Ride.ride(tricycle);
    }
}
class Cycle{
    public void ride(){
        System.out.println("polymorhism");
    };
}
class Unicycle extends Cycle{
    
}
class Bicycle extends Cycle{
    
}
class Tricycle extends Cycle{
    
}
class Ride{
    public static void ride(Cycle c){
        c.ride();
    }
}
