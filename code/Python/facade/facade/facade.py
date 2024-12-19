from device.device import *

class HomeTheaterFacade():
    def __init__(self, l:Light, p:PopcornPopper, s:Screen, a:Amplifier, pl:StreamingPlayer, pr:Projector) -> None:
        self.__light = l
        self.__popper = p
        self.__screen = s
        self.__amplifier = a
        self.__player = pl
        self.__projector = pr
        
    def watchMovie(self, movie: str):
        print("Get ready to watch a movie...")
        self.__popper.on()
        self.__popper.pop()
        self.__light.dim(10)
        self.__screen.down()
        self.__projector.on()
        self.__projector.wideScreenMode()
        self.__amplifier.on()
        self.__amplifier.setStreamingPlayer(self.__player)
        self.__amplifier.setSurroundSound()
        self.__amplifier.setVolume(12)
        self.__player.on()
        self.__player.play(movie)
        
    def endMovie(self):
        print("Shutting movie theater down...")
        self.__popper.off()
        self.__light.on()
        self.__screen.up()
        self.__projector.off()
        self.__amplifier.off()
        self.__player.stop()
        self.__player.off()