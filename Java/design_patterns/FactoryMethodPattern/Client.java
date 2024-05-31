public class Client {
    public static void main(String[] args){
        AbstractGeometry geometry;
        AbstractGeometryFactory factory;
        factory=(AbstractGeometryFactory) XMLUtil.getBean();
        factory.draw();
        factory.erase();
    }
}
