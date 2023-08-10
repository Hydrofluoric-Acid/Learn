public class GenericFunction {
    public static void main(String[] args) {
        String name=test("null");
    }
    public static <T> T test(T t){
        return t;
    }
}
