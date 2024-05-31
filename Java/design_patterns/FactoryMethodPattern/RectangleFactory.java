public class RectangleFactory extends AbstractGeometryFactory{
    @Override
    public AbstractGeometry draw(){
        System.out.println("长方形工厂绘制长方形");
        return new Rectangle();
    }

    @Override
    public void erase() {
        System.out.println("长方形工厂擦除长方形");
    }
}
