from abc import ABCMeta, abstractmethod
from device.device import Speed

class Command(metaclass=ABCMeta):
    @abstractmethod
    def execute(self) -> None:
        pass
    
    @abstractmethod
    def undo(self) -> None:
        pass
    
class LightOnCommand(Command):
    def __init__(self, light) -> None:
        self.__light = light
        
    def execute(self) -> None:
        self.__light.on()
        
    def undo(self) -> None:
        self.__light.off()
        
class LightOffCommand(Command):
    def __init__(self, light) -> None:
        self.__light = light
        
    def execute(self) -> None:
        self.__light.off()
        
    def undo(self) -> None:
        self.__light.on()
        
class GarageDoorOpenCommand(Command):
    def __init__(self, garageDoor) -> None:
        self.__garageDoor = garageDoor
        
    def execute(self) -> None:
        self.__garageDoor.up()
        
    def undo(self) -> None:
        self.__garageDoor.down()
        
class GarageDoorCloseCommand(Command):
    def __init__(self, garageDoor) -> None:
        self.__garageDoor = garageDoor
        
    def execute(self) -> None:
        self.__garageDoor.down()
        
    def undo(self) -> None:
        self.__garageDoor.up()
        
class StereoOnOfCDCommand(Command):
    def __init__(self, stereo) -> None:
        self.__stereo = stereo
        
    def execute(self) -> None:
        self.__stereo.on()
        self.__stereo.setCD()
        self.__stereo.setVolume(10)
        
    def undo(self) -> None:
        self.__stereo.off()
        
class StereoOffCommand(Command):
    def __init__(self, stereo) -> None:
        self.__stereo = stereo
        
    def execute(self) -> None:
        self.__stereo.off()
        
    def undo(self) -> None:
        self.__stereo.on()
        
class CeilingFanHighCommand(Command):
    def __init__(self, ceilingFan) -> None:
        self.__ceilingFan = ceilingFan
        self.__prevSpeed = None
        
    def execute(self) -> None:
        self.__prevSpeed = self.__ceilingFan.getSpeed()
        self.__ceilingFan.high()
        
    def undo(self) -> None:
        if self.__prevSpeed == Speed.HIGH:
            self.__ceilingFan.high()
        elif self.__prevSpeed == Speed.MEDIUM:
            self.__ceilingFan.medium()
        elif self.__prevSpeed == Speed.LOW:
            self.__ceilingFan.low()
        elif self.__prevSpeed == Speed.OFF:
            self.__ceilingFan.off()

class CeilingFanMediumCommand(Command):
    def __init__(self, ceilingFan) -> None:
        self.__ceilingFan = ceilingFan
        self.__prevSpeed = None
        
    def execute(self) -> None:
        self.__prevSpeed = self.__ceilingFan.getSpeed()
        self.__ceilingFan.medium()
        
    def undo(self) -> None:
        if self.__prevSpeed == Speed.HIGH:
            self.__ceilingFan.high()
        elif self.__prevSpeed == Speed.MEDIUM:
            self.__ceilingFan.medium()
        elif self.__prevSpeed == Speed.LOW:
            self.__ceilingFan.low()
        elif self.__prevSpeed == Speed.OFF:
            self.__ceilingFan.off()
            
class CeilingFanOffCommand(Command):
    def __init__(self, ceilingFan) -> None:
        self.__ceilingFan = ceilingFan
        self.__prevSpeed = None
        
    def execute(self) -> None:
        self.__prevSpeed = self.__ceilingFan.getSpeed()
        self.__ceilingFan.off()
        
    def undo(self) -> None:
        if self.__prevSpeed == Speed.HIGH:
            self.__ceilingFan.high()
        elif self.__prevSpeed == Speed.MEDIUM:
            self.__ceilingFan.medium()
        elif self.__prevSpeed == Speed.LOW:
            self.__ceilingFan.low()
        elif self.__prevSpeed == Speed.OFF:
            self.__ceilingFan.off()
            
class MacroCommand(Command):
    def __init__(self, commands) -> None:
        self.__commands = commands
        
    def execute(self) -> None:
        for command in self.__commands:
            command.execute()
            
    def undo(self) -> None:
        # for command in self.__commands:
        #     command.undo()
        for i in range(len(self.__commands)-1, -1, -1):
            self.__commands[i].undo()
            
class NoCommand(Command):
    def execute(self) -> None:
        pass
    
    def undo(self) -> None:
        pass