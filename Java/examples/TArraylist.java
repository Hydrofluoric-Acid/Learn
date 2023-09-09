import java.util.HashSet;
class Studentl{
    String id;
    String name;
    public Studentl(){};
    public Studentl(String id,String name){
        this.id=id;
        this.name=name;
    }
    public String toString(){
        return id+":"+name;
    }
    public int hashCode(){
        return id.hashCode();
    }
    public boolean equals(Object obj){
        if(this==obj){
            return true;
        }
        if(!(obj instanceof Studentl)){
            return false;
        }
        Studentl stu=(Studentl)obj;
        boolean b=this.id.equals(stu.id);
        return b;
    }
    
}

public class TArraylist {
    public static void main(String[] args) {
        HashSet<Studentl> hs = new HashSet<>();
         Studentl stu1 = new Studentl("1", "Jack");
        Studentl stu2= new Studentl("2", "Rose");
        Studentl stu3= new Studentl("2", "Rose");
        hs.add(stu1);
        hs.add(stu2);
        hs.add(stu3);
        System.out.println(hs);
    }
}
