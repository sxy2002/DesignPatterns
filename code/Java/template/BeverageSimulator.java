package template;

import template.beverage.Coffee;
import template.beverage.Tea;

public class BeverageSimulator {
    public static void main(String[] args) {
        Coffee coffee = new Coffee();
        coffee.prepareRecipe();

        Tea tea = new Tea();
        tea.prepareRecipe();
    }
}
