package thinking_in_java.polymorphism;

public class Note {
    public static void main(String[] args) {
        Wind wind=new Wind();
        wind.play(Notes.MIDDLE_C);
        Wind flute = new Wind();
        Music.tune(flute);
    }
    
}
enum Notes {
    MIDDLE_C, C_SHARP, B_FLAT;
}

class Instrument {
    public void play(Notes n) {
        System.out.println("Instrument.play()");
    }

}

class Wind extends Instrument {
        public void play(Notes n){
            System.out.println("Wind.play()"+n);
        }
    }
class Music{
    public static void tune(Instrument i){
        i.play(Notes.MIDDLE_C);
    }
}