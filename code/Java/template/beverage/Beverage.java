package template.beverage;

public abstract class Beverage {
    public final void prepareRecipe() {
        boilWater();
        brew();
        pourInCup();
        if(isAddCondiments())
            addCondiments();
    }

    void boilWater() {
        System.out.println("boil Water");
    }

    abstract void brew();

    void pourInCup() {
        System.out.println("pour In Cup");
    }

    abstract void addCondiments();

    boolean isAddCondiments() {
        return true;
    }
}
