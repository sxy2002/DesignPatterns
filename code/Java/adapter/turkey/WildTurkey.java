package adapter.turkey;

public class WildTurkey implements Turkey{
    @Override
    public void gobble() {
        System.out.println("gobble");
    }

    @Override
    public void fly() {
        System.out.println("short fly");
    }
}
