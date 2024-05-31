public class Client {
    public static void main(String[] args){
        Man man=new Man();
        man.setRace(new Orc());
        man.setProfession(new Hunter());
        man.createRole();
    }
}
