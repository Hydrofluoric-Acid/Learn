public class CircleFactory extends AbstractGeometryFactory{
    @Override
    public AbstractGeometry draw() {
        System.out.println("圆形工厂绘制圆形");
        return new Circle();
    }

    @Override
    public void erase() {
        System.out.println("圆形工厂擦除圆形");
    }
}
