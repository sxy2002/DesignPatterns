package command.device;

public class CeilingFan {
    public static final int HIGH = 3;
    public static final int MEDIUM = 2;
    public static final int LOW = 1;
    public static final int OFF = 0;
    private int speed;

    public CeilingFan() {
        speed = 0;
    }

    public void high() {
        speed = HIGH;
        System.out.println("Ceiling Fan is High");
    }

    public void medium() {
        speed = MEDIUM;
        System.out.println("Ceiling Fan is Medium");
    }

    public void low() {
        speed = LOW;
        System.out.println("Ceiling Fan is Low");
    }

    public void off() {
        speed = OFF;
        System.out.println("Ceiling Fan is Off");
    }

    public int getSpeed() {
        return speed;
    }
}
