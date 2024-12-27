package iterator.waitress;

import iterator.menu.Menu;
import iterator.menu.MenuItem;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Waitress {
    private List<Menu> menus;

    public Waitress(Menu... menus) {
        this.menus = new ArrayList<>();
        for(Menu item : menus)
            this.menus.add(item);
    }

    public void printMenu() {
        for(Menu menu : menus) {
            System.out.println("*********");
            Iterator<MenuItem> iterator = menu.createIterator();
            while(iterator.hasNext()) {
                MenuItem menuItem = iterator.next();
                System.out.print(menuItem.getName() + ", ");
                System.out.print(menuItem.getPrice() + " -- ");
                System.out.println(menuItem.getDescription());
            }
        }
    }
}
