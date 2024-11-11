package decorator.coffee;

public class Mocha extends CondimentDecorator{
    public Mocha(Beverage b) {
        this.beverage = b;
    }

    @Override
    public double cost() {
        return this.beverage.cost() + 0.20;
    }

    @Override
    public String getDescription() {
        return this.beverage.getDescription() + ", Mocha";
    }
}
