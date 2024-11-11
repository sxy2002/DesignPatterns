package composite.menu;

public class MenuItem extends MenuComponent{
    private String name;
    private String description;
    private Double price;
    private Boolean vegetarian;

    public MenuItem(String name, String description, Double price, Boolean vegetarian) {
        this.name = name;
        this.description = description;
        this.price = price;
        this.vegetarian = vegetarian;
    }

    public String getName() {
        return this.name;
    }

    public String getDescription() {
        return this.description;
    }

    public double getPrice() {
        return this.price;
    }

    public boolean isVegetarian() {
        return this.vegetarian;
    }

    public void print() {
        System.out.print(" " + getName());
        if (isVegetarian())
            System.out.print("(v)");
        System.out.println(", " + getPrice());
        System.out.println("  -- " + getDescription());
    }
}
