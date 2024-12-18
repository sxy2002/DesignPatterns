from enum import Enum

class Light():
    def on(self) -> None:
        print("Light is On")

    def off(self) -> None:
        print("Light is Off")
        
class GarageDoor():
    def up(self) -> None:
        print("Garage Door is Open")
        
    def down(self) -> None:
        print("Garage Door is Close")
        
    def stop(self) -> None:
        print("Garage Door is Stop")
        
    def lightOn(self) -> None:
        print("Garage Light is On")
        
    def lightOff(self) -> None:
        print("Garage Light is Off")
        
class Stereo():
    def on(self) -> None:
        print("Stereo is On")
        
    def off(self) -> None:
        print("Stereo is Off")
        
    def setCD(self) -> None:
        print("Stereo is Set for CD Input")
        
    def setDVD(self) -> None:
        print("Stereo is Set for DVD Input")
        
    def setRadio(self) -> None:
        print("Stereo is Set for Radio")
        
    def setVolume(self, volume: int) -> None:
        print(f"Stereo Volume is Set to {volume}")
       
class Speed(Enum):
    HIGH = 3
    MEDIUM = 2
    LOW = 1
    OFF = 0
 
class CeilingFan():
    def __init__(self) -> None:
        self.__speed = Speed.OFF
    
    def high(self) -> None:
        self.__speed = Speed.HIGH
        print("Ceiling Fan is High")
        
    def medium(self) -> None:
        self.__speed = Speed.MEDIUM
        print("Ceiling Fan is Medium")
        
    def low(self) -> None:
        self.__speed = Speed.LOW
        print("Ceiling Fan is Low")
        
    def off(self) -> None:
        self.__speed = Speed.OFF
        print("Ceiling Fan is Off")
        
    def getSpeed(self) -> Speed:
        return self.__speed