package decorator.coffee;

public class Milk extends CondimentDecorator{

    public Milk(Beverage b) {
        this.beverage = b;
    }

    @Override
    public double cost() {
        return this.beverage.cost() + 0.10;
    }

    @Override
    public String getDescription() {
        return this.beverage.getDescription() + ", Milk";
    }
}
