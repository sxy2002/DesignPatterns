package facade.device;

public class StreamingPlayer {
    private Amplifier amplifier;

    public StreamingPlayer(Amplifier amplifier) {
        this.amplifier = amplifier;
    }

    public void on() {
        System.out.println("StreamingPlayer on");
    }

    public void off() {
        System.out.println("StreamingPlayer off");
    }

    public void play(String movie) {
        System.out.println("StreamingPlayer play " + movie);
    }

    public void stop() {
        System.out.println("StreamingPlayer stop");
    }
}
