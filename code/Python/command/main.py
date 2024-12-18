from control.control import RemoteControl
from device.device import *
from command.command import *

if __name__ == "__main__":
    
    control = RemoteControl(7)
    print(control)
    
    light = Light()
    door = GarageDoor()
    stereo = Stereo()
    fan = CeilingFan()
    
    lightOn = LightOnCommand(light)
    lightOff = LightOffCommand(light)
    doorOpen = GarageDoorOpenCommand(door)
    doorClose = GarageDoorCloseCommand(door)
    stereoCD = StereoOnOfCDCommand(stereo)
    stereoOff = StereoOffCommand(stereo)
    fanHigh = CeilingFanHighCommand(fan)
    fanMedium = CeilingFanMediumCommand(fan)
    fanOff = CeilingFanOffCommand(fan)
    macroOn = MacroCommand([lightOn, doorOpen, stereoCD])
    macroOff = MacroCommand([lightOff, doorClose, stereoOff])
    
    control.setCommand(0, lightOn, lightOff)
    control.setCommand(1, doorOpen, doorClose)
    control.setCommand(2, stereoCD, stereoOff)
    control.setCommand(3, fanHigh, fanOff)
    control.setCommand(4, fanMedium, fanOff)
    control.setCommand(5, macroOn, macroOff)
    print(control)
    
    control.onButtonWasPushed(0)
    control.offButtonWasPushed(0)
    print(control)
    control.onButtonWasPushed(1)
    print(control)
    control.undoButtonWasPushed()

    control.onButtonWasPushed(2)
    control.offButtonWasPushed(2)
    control.onButtonWasPushed(5)
    control.undoButtonWasPushed()

    control.onButtonWasPushed(3)
    control.offButtonWasPushed(3)
    control.undoButtonWasPushed()
    control.onButtonWasPushed(4)
    control.undoButtonWasPushed()