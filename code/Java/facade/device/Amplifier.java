package facade.device;

public class Amplifier {
    private StreamingPlayer streamingPlayer;

    public Amplifier() {
    }

    public void on() {
        System.out.println("Amplifier on");
    }

    public void off() {
        System.out.println("Amplifier off");
    }

    public void setStreamingPlayer(StreamingPlayer player) {
        System.out.println("set StreamingPlayer" + player);
        this.streamingPlayer = player;
    }

    public void setStereoSound() {
        System.out.println("set to Stereo Sound");
    }

    public void setSurroundSound() {
        System.out.println("set to Surround Sound");
    }

    public void setVolume(int v) {
        System.out.println("set Volume to " + v);
    }
}
