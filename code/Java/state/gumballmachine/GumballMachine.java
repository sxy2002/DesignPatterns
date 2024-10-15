package state.gumballmachine;

public class GumballMachine {
    private State noQuarterState;
    private State hasQuarterState;
    private State winnerState;
    private State soldState;
    private State soldOutState;

    private State curState;
    private int count = 0;

    public GumballMachine(int c) {
        noQuarterState = new NoQuarterState(this);
        hasQuarterState = new HasQuarterState(this);
        winnerState = new WinnerState(this);
        soldState = new SoldState(this);
        soldOutState = new SoldOutState(this);
        this.count = c;
        if(c > 0)
            curState = noQuarterState;
        else
            curState = soldOutState;
    }

    public void insertQuarter() {
        curState.insertQuarter();
    }

    public void ejectQuarter() {
        curState.ejectQuarter();
    }

    public void turnCrank() {
        curState.turnCrank();
        if(curState.getClass().equals(SoldState.class) || curState.getClass().equals(WinnerState.class))
            curState.dispense();
    }

    void setCurState(State s) {
        this.curState = s;
    }

    void releaseBall() {
        System.out.println("A gumball comes rolling out the slot...");
        if(this.count > 0)
            this.count -= 1;
    }

    void refill(int c) {
        this.count += c;
        System.out.println("The gumball machine was just refilled; its new count is: " + this.count);
        curState.refill();
    }

    public State getNoQuarterState() {
        return noQuarterState;
    }

    public State getHasQuarterState() {
        return hasQuarterState;
    }

    public State getWinnerState() {
        return winnerState;
    }

    public State getSoldState() {
        return soldState;
    }

    public State getSoldOutState() {
        return soldOutState;
    }

    public State getCurState() {
        return curState;
    }

    public int getCount() {
        return count;
    }

    @Override
    public String toString() {
        return "GumballMachine{" +
                "curState=" + this.curState +
                ", count=" + this.count +
                ", noQuarterState=" + this.noQuarterState +
                ", hasQuarterState=" + this.hasQuarterState +
                ", winnerState=" + this.winnerState +
                ", soldState=" + this.soldState +
                ", soldOutState=" + this.soldOutState +
                '}';
    }
}
