public class Man extends Sex {
    @Override
    public void createRole() {
        System.out.printf("创建角色：%s %s %s\n",
                this.getClass().getName(),
                this.race.getClass().getName(),
                this.race.profession.getClass().getName());
    }
}
