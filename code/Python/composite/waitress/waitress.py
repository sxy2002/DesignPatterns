from menu.menucomponent import MenuComponent

class Waitress:
    def __init__(self, all_menus:MenuComponent):
        self.__all_menus = all_menus

    def printMenu(self):
        self.__all_menus.print()