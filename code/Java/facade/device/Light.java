package facade.device;

public class Light {
    public void on() {
        System.out.println("Light on");
    }

    public void off() {
        System.out.println("Light off");
    }

    public void dim(int d) {
        System.out.println("Light dim " + d + "%");
    }
}
