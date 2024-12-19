package facade.facade;

import facade.device.*;

public class HomeTheaterFacade {
    private Light light;
    private PopcornPopper popcornPopper;
    private Screen screen;
    private Projector projector;
    private Amplifier amplifier;
    private StreamingPlayer streamingPlayer;

    public HomeTheaterFacade(Light light, PopcornPopper popcornPopper, Screen screen, Projector projector, Amplifier amplifier, StreamingPlayer streamingPlayer) {
        this.light = light;
        this.popcornPopper = popcornPopper;
        this.screen = screen;
        this.projector = projector;
        this.amplifier = amplifier;
        this.streamingPlayer = streamingPlayer;
    }

    public void watchMovie(String movie) {
        System.out.println("watch Movie");
        popcornPopper.on();
        popcornPopper.pop();
        light.dim(10);
        screen.down();
        projector.on();
        projector.wideScreenMode();
        amplifier.on();
        amplifier.setStreamingPlayer(streamingPlayer);
        amplifier.setSurroundSound();
        amplifier.setVolume(12);
        streamingPlayer.on();
        streamingPlayer.play(movie);
    }

    public void endMovie() {
        System.out.println("end Movie");
        popcornPopper.off();
        light.on();
        screen.up();
        projector.off();
        amplifier.off();
        streamingPlayer.stop();
        streamingPlayer.off();
    }

}
