package facade;

import facade.device.*;
import facade.facade.HomeTheaterFacade;

public class TheaterSimulator {
    public static void main(String[] args) {
        Light light = new Light();
        PopcornPopper popcornPopper = new PopcornPopper();
        Screen screen = new Screen();
        Amplifier amplifier = new Amplifier();
        StreamingPlayer streamingPlayer = new StreamingPlayer(amplifier);
        Projector projector = new Projector(streamingPlayer);

        HomeTheaterFacade homeTheaterFacade = new HomeTheaterFacade(light, popcornPopper, screen, projector, amplifier, streamingPlayer);
        homeTheaterFacade.watchMovie("Titanic");
        homeTheaterFacade.endMovie();
    }
}
