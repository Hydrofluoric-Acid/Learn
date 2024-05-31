public abstract class Sex {
    protected Race race;

    public void setRace(Race race) {
        this.race = race;
    }
    public void setProfession(Profession profession){
        this.race.setProfession(profession);
    }
    public abstract void createRole();
}
