package decorator.coffee;

public abstract class CondimentDecorator extends Beverage{

    Beverage beverage;

    public abstract String getDescription();
}
