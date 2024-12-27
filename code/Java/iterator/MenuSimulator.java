package iterator;

import iterator.menu.CafeMenu;
import iterator.menu.DinerMenu;
import iterator.menu.Menu;
import iterator.menu.PancakeHouseMenu;
import iterator.waitress.Waitress;

public class MenuSimulator {
    public static void main(String[] args) {
        Menu pMenu = new PancakeHouseMenu();
        Menu dMenu = new DinerMenu();
        Menu cMenu = new CafeMenu();

        Waitress waitress = new Waitress(pMenu, dMenu, cMenu);
        waitress.printMenu();
    }
}
