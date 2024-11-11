package decorator.coffee;

public class Whip extends CondimentDecorator{
    public Whip(Beverage b) {
        this.beverage = b;
    }

    @Override
    public double cost() {
        return this.beverage.cost() + 0.10;
    }

    @Override
    public String getDescription() {
        return this.beverage.getDescription() + ", Whip";
    }
}
