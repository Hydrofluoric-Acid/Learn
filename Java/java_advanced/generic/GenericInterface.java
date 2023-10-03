import java.util.ArrayList;

public class GenericInterface {
    public static void main(String[] args) {
        
    }
}
class Teacher{

}

interface Data<T>{
    public void add(T t);

    public ArrayList<T> getByName(String name);
}
class TeacherData implements Data<Teacher>{
    public void add(Teacher t){

    }
    public ArrayList<Teacher> getByName(String name){
        return null;

    }
}
