public class Human extends Race{
    @Override
    public void races() {
        System.out.println("当前种族："+this.getClass().getName());
    }
}
