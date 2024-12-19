package facade.device;

public class Projector {
    private StreamingPlayer streamingPlayer;

    public Projector(StreamingPlayer streamingPlayer) {
        this.streamingPlayer = streamingPlayer;
    }

    public void on() {
        System.out.println("Projector on");
    }

    public void off() {
        System.out.println("Projector off");
    }

    public void wideScreenMode() {
        System.out.println("wideScreenMode");
    }

    public void tvMode() {
        System.out.println("tvMode");
    }
}
