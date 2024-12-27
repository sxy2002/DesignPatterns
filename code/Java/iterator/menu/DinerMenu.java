package iterator.menu;

import iterator.iterator.AlternatingDinerMenuIterator;
import iterator.iterator.DinerMenuIterator;

import java.util.Iterator;

public class DinerMenu implements Menu{
    private static final int MAX_SIZE = 6;
    private MenuItem[] menuItems;
    private int curPos;

    public DinerMenu() {
        this.menuItems = new MenuItem[MAX_SIZE];
        this.curPos = 0;

        addItem("Vegetarian BLT",
                "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
        addItem("BLT",
                "Bacon with lettuce & tomato on whole wheat", false, 2.99);
        addItem("Soup of the day",
                "Soup of the day, with a side of potato salad", false, 3.29);
        addItem("Hotdog",
                "A hot dog, with sauerkraut, relish, onions, topped with cheese",
                false, 3.05);
        addItem("Steamed Veggies and Brown Rice",
                "A medly of steamed vegetables over brown rice", true, 3.99);
        addItem("Pasta",
                "Spaghetti with Marinara Sauce, and a slice of sourdough bread",
                true, 3.89);
    }

    public void addItem(String name, String description, boolean vegetarian, double price) {
        if(curPos >= MAX_SIZE) {
            System.out.println("Menu is full");
        }
        MenuItem menuItem = new MenuItem(name, description, vegetarian, price);
        menuItems[curPos] = menuItem;
        curPos++;
    }

    @Override
    public Iterator<MenuItem> createIterator() {
        // return new DinerMenuIterator(this.menuItems);
        return new AlternatingDinerMenuIterator(this.menuItems);
    }
}
