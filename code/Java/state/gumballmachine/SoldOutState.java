package state.gumballmachine;

public class SoldOutState implements State{
    private GumballMachine gumballMachine;

    public SoldOutState(GumballMachine gm) {
        this.gumballMachine = gm;
    }

    @Override
    public void insertQuarter() {
        System.out.println("You can't insert a quarter, the machine is sold out");
    }

    @Override
    public void ejectQuarter() {
        System.out.println("You can't eject, you have not inserted a quarter yet");
    }

    @Override
    public void turnCrank() {
        System.out.println("You turned, but there is no quarter");
    }

    @Override
    public void dispense() {
        System.out.println("No gumball dispense");
    }

    @Override
    public void refill() {
        if(gumballMachine.getCount() > 0)
            gumballMachine.setCurState(gumballMachine.getNoQuarterState());
        else
            gumballMachine.setCurState(gumballMachine.getSoldOutState());
    }

//    @Override
//    public String toString() {
//        return "SoldOutState{" +
//                "gumballMachine=" + gumballMachine +
//                '}';
//    }
}
