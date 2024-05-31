public class SquareFactory extends AbstractGeometryFactory{
    @Override
    public AbstractGeometry draw() {
        System.out.println("正方形工厂绘制正方形");
        return new Square();
    }

    @Override
    public void erase() {
        System.out.println("正方形工厂擦除正方形");
    }
}
