package iterator.iterator;

import iterator.menu.MenuItem;

import java.time.LocalDate;
import java.util.Calendar;
import java.util.Iterator;

public class AlternatingDinerMenuIterator implements Iterator<MenuItem> {
    private MenuItem[] menuItems;
    private int curPos;

    public AlternatingDinerMenuIterator(MenuItem[] menuItems) {
        this.menuItems = menuItems;

        LocalDate currentDate = LocalDate.now();
        this.curPos = currentDate.getDayOfWeek().getValue() % 2;
        System.out.println(currentDate.getDayOfWeek().getValue() + "----------");
    }

    @Override
    public boolean hasNext() {
        if(curPos >= menuItems.length || menuItems[curPos] == null)
            return false;
        return true;
    }

    @Override
    public MenuItem next() {
        MenuItem tmp = menuItems[curPos];
        curPos += 2;
        return tmp;
    }
}
