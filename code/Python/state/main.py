from gumballmachine.gumballmachine import GumballMachine

if __name__ == "__main__":
        gumballMachine = GumballMachine(0)
        print(gumballMachine)

        gumballMachine.insertQuarter()
        gumballMachine.ejectQuarter()
        gumballMachine.turnCrank()

        gumballMachine.refill(0)
        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        gumballMachine.ejectQuarter()

        gumballMachine.refill(10)
        print(gumballMachine)

        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        print(gumballMachine)

        gumballMachine.insertQuarter()
        gumballMachine.ejectQuarter()
        print(gumballMachine)

        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        gumballMachine.ejectQuarter()
        print(gumballMachine)

        gumballMachine.insertQuarter()
        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        print(gumballMachine)

        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        print(gumballMachine)
        gumballMachine.insertQuarter()
        gumballMachine.turnCrank()
        print(gumballMachine)