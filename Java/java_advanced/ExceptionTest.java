public class ExceptionTest {
    public static void main(String[] args) {
        try {
            saveAge(225);
        } catch (AgeIllegalException e) {
            e.printStackTrace();
        }
    }
    public static void saveAge(int age) throws AgeIllegalException{
        if (age>0&&age<150) {
            System.out.println("save successfully!");
        }else{
            throw new AgeIllegalException("/age is illegal!");
        }
    }
}
class AgeIllegalException extends Exception{
    public AgeIllegalException(){

    }
    public AgeIllegalException(String message){
        super(message);
    }

}
