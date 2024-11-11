package composite.menu;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Menu extends MenuComponent{
    private String name;
    private String description;
    private List<MenuComponent> menuComponents = new ArrayList<>();

    public Menu(String name, String description) {
        this.name = name;
        this.description = description;
    }

    public String getName() {
        return this.name;
    }

    public String getDescription() {
        return this.description;
    }

    public void add(MenuComponent m) {
        menuComponents.add(m);
    }

    public void remove(MenuComponent m) {
        menuComponents.remove(m);
    }

    public MenuComponent getChild(int i) {
        return menuComponents.get(i);
    }

    public void print() {
        System.out.print("\n" + getName());
        System.out.println(", " + getDescription());
        System.out.println("----------------------");

        for(MenuComponent item : menuComponents)
            item.print();

//        Iterator<MenuComponent> iterator = menuComponents.iterator();
//        while (iterator.hasNext()) {
//            MenuComponent menuComponent = (MenuComponent)iterator.next();
//            menuComponent.print();
//        }
    }
}
