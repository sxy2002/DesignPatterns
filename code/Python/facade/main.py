from facade.facade import HomeTheaterFacade
from device.device import *

if __name__ == "__main__":
    light = Light()
    popper = PopcornPopper()
    screen = Screen()
    amplifier = Amplifier()
    player = StreamingPlayer(amplifier)
    projector = Projector(player)
    
    facade = HomeTheaterFacade(light, popper, screen, amplifier, player, projector)
    facade.watchMovie("Titanic")
    facade.endMovie()
    