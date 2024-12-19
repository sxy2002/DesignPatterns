class Light():
    def on(self):
        print("Light is on")

    def off(self):
        print("Light is off")
        
    def dim(self, d: int):
        print(f"Light is dimmed to {d}")
        
class PopcornPopper():
    def on(self):
        print("PopcornPopper is on")

    def off(self):
        print("PopcornPopper is off")
        
    def pop(self):
        print("PopcornPopper is popping")
        
class Screen():
    def up(self):
        print("Screen is up")

    def down(self):
        print("Screen is down")
        
class Amplifier():
    def __init__(self) -> None:
        self.__player = None
        
    def on(self):
        print("Amplifier is on")

    def off(self):
        print("Amplifier is off")
        
    def setStreamingPlayer(self, p):
        self.__player = p
        print(f"set StreamingPlayer {p}")
        
    def setStereoSound(self):
        print("Amplifier is set to stereo sound")
        
    def setSurroundSound(self):
        print("Amplifier is set to surround sound")
        
    def setVolume(self, v: int):
        print(f"Amplifier volume is set to {v}")
        
class StreamingPlayer():
    def __init__(self, a:Amplifier) -> None:
        self.__amplifier = a
        
    def on(self):
        print("StreamingPlayer is on")

    def off(self):
        print("StreamingPlayer is off")
        
    def play(self, movie: str):
        print(f"StreamingPlayer is playing {movie}")
        
    def stop(self):
        print("StreamingPlayer is stopped")
        
class Projector():
    def __init__(self, p:StreamingPlayer) -> None:
        self.__player = p
        
    def on(self):
        print("Projector is on")

    def off(self):
        print("Projector is off")
        
    def wideScreenMode(self):
        print("Projector is set to wide screen mode")
        
    def tvMode(self):
        print("Projector is set to tv mode")