package state.gumballmachine;

public class WinnerState implements State{
    private GumballMachine gumballMachine;

    public WinnerState(GumballMachine gm) {
        this.gumballMachine = gm;
    }

    @Override
    public void insertQuarter() {
        System.out.println("Please wait, we are already giving you a gumball");
    }

    @Override
    public void ejectQuarter() {
        System.out.println("Sorry, you already turned the crank");
    }

    @Override
    public void turnCrank() {
        System.out.println("Turning twice doesn't get you another gumball");
    }

    @Override
    public void dispense() {
        gumballMachine.releaseBall();
        if(gumballMachine.getCount() > 0) {
            gumballMachine.releaseBall();
            System.out.println("You are a winner! You got two gumballs for your quarter");
            if(gumballMachine.getCount() > 0)
                gumballMachine.setCurState(gumballMachine.getNoQuarterState());
            else {
                System.out.println("Oops, out of gumballs!");
                gumballMachine.setCurState(gumballMachine.getSoldOutState());
            }
        }
        else
            gumballMachine.setCurState(gumballMachine.getSoldOutState());
    }

    @Override
    public void refill() {    }

//    @Override
//    public String toString() {
//        return "WinnerState{" +
//                "gumballMachine=" + gumballMachine +
//                '}';
//    }
}
