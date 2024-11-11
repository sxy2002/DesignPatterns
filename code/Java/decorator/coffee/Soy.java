package decorator.coffee;

public class Soy extends CondimentDecorator{
    public Soy(Beverage b) {
        this.beverage = b;
    }

    @Override
    public double cost() {
        Size s = this.beverage.getSize();
        double cost = 0.0;
        if(s == Size.TALL)  cost = 0.10;
        else if (s == Size.GRANDE)  cost = 0.15;
        else                cost = 0.20;
        return this.beverage.cost() + cost;
    }

    @Override
    public String getDescription() {
        return this.beverage.getDescription() + ", Soy";
    }
}
