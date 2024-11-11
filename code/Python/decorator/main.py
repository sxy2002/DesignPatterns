from coffee.beverage import HouseBlend, Soy, Mocha, Whip, Size

if __name__ == "__main__":
    beverage = HouseBlend()
    print(beverage.getDescription() + ": $" + str(beverage.cost()))
    
    beverage.setSize(Size.VENTI)
    beverage = Whip(Mocha(Soy(beverage)))
    print(beverage.getDescription() + ": $" + str(beverage.cost()))