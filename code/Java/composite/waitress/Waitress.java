package composite.waitress;

import composite.menu.MenuComponent;

public class Waitress {
    private MenuComponent allMenu;

    public Waitress(MenuComponent allMenu) {
        this.allMenu = allMenu;
    }

    public void printMenu() {
        this.allMenu.print();
    }
}
