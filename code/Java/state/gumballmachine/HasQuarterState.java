package state.gumballmachine;

import java.util.Random;

public class HasQuarterState implements State{
    private GumballMachine gumballMachine;
    private Random randomWinner = new Random(System.currentTimeMillis());

    public HasQuarterState(GumballMachine gm) {
        this.gumballMachine = gm;
    }

    @Override
    public void insertQuarter() {
        System.out.println("You can't insert another quarter");
    }

    @Override
    public void ejectQuarter() {
        System.out.println("Quarter returned");
        gumballMachine.setCurState(gumballMachine.getNoQuarterState());
    }

    @Override
    public void turnCrank() {
        System.out.println("You turned...");
        int winner = randomWinner.nextInt(10);
        if((winner == 0) && (gumballMachine.getCount() > 1))
            gumballMachine.setCurState(gumballMachine.getWinnerState());
        else
            gumballMachine.setCurState(gumballMachine.getSoldState());
    }

    @Override
    public void dispense() {
        System.out.println("You need to turn the crank");
    }

    @Override
    public void refill() {    }

//    @Override
//    public String toString() {
//        return "HasQuarterState{" +
//                "gumballMachine=" + gumballMachine +
//                '}';
//    }
}
