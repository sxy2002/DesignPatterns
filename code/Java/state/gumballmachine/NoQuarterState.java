package state.gumballmachine;

public class NoQuarterState implements State{
    private GumballMachine gumballMachine;

    public NoQuarterState(GumballMachine gm) {
        this.gumballMachine = gm;
    }

    @Override
    public void insertQuarter() {
        System.out.println("You insert a quarter");
        gumballMachine.setCurState(gumballMachine.getHasQuarterState());
    }

    @Override
    public void ejectQuarter() {
        System.out.println("You haven't insert a quarter");
    }

    @Override
    public void turnCrank() {
        System.out.println("You turned but there is no quarter");
    }

    @Override
    public void dispense() {
        System.out.println("You need to pay first");
    }

    @Override
    public void refill() {    }

//    @Override
//    public String toString() {
//        return "NoQuarterState{" +
//                "gumballMachine=" + this.gumballMachine +
//                '}';
//    }
}
