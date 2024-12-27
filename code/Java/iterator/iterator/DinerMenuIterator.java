package iterator.iterator;

import iterator.menu.MenuItem;

import java.util.Iterator;

public class DinerMenuIterator implements Iterator<MenuItem> {

    private MenuItem[] menuItems;
    private int curPos;

    public DinerMenuIterator(MenuItem[] menuItems) {
        this.menuItems = menuItems;
        this.curPos = 0;
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
        curPos++;
        return tmp;
    }
}
