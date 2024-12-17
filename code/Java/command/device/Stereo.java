package command.device;

public class Stereo {
    public Stereo() {
    }

    public void on() {
        System.out.println("Stereo is On");
    }

    public void off() {
        System.out.println("Stereo is Off");
    }

    public void setCD() {
        System.out.println("set CD Input");
    }

    public void setDVD() {
        System.out.println("set DVD Input");
    }

    public void setRadio() {
        System.out.println("set Radio");
    }

    public void setVolume(int v) {
        System.out.println("set Volume to " + v);
    }
}
