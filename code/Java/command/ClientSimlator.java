package command;

import command.command.*;
import command.control.RemoteControl;
import command.device.CeilingFan;
import command.device.GarageDoor;
import command.device.Light;
import command.device.Stereo;

public class ClientSimlator {
    public static void main(String[] args) {
        RemoteControl remoteControl = new RemoteControl(7);
        System.out.println(remoteControl);

        Light light = new Light();
        GarageDoor garageDoor = new GarageDoor();
        CeilingFan ceilingFan = new CeilingFan();
        Stereo stereo = new Stereo();

        LightOnCommand lightOnCommand = new LightOnCommand(light);
        LightOffCommand lightOffCommand = new LightOffCommand(light);
        GarageDoorOpenCommand garageDoorOpenCommand = new GarageDoorOpenCommand(garageDoor);
        GarageDoorCloseCommand garageDoorCloseCommand = new GarageDoorCloseCommand(garageDoor);
        CeilingFanHighCommand ceilingFanHighCommand = new CeilingFanHighCommand(ceilingFan);
        CeilingFanMediumCommand ceilingFanMediumCommand = new CeilingFanMediumCommand(ceilingFan);
        CeilingFanOffCommand ceilingFanOffCommand = new CeilingFanOffCommand(ceilingFan);
        StereoOnOfCDCommand stereoOnOfCDCommand = new StereoOnOfCDCommand(stereo);
        StereoOffCommand stereoOffCommand = new StereoOffCommand(stereo);
        Command[] onCommands = {garageDoorOpenCommand, lightOnCommand, stereoOnOfCDCommand};
        Command[] offCommands = {garageDoorCloseCommand, lightOffCommand, stereoOffCommand};
        MacroCommand macroOnCommand = new MacroCommand(onCommands);
        MacroCommand macroOffCommand = new MacroCommand(offCommands);

        remoteControl.setCommand(0, lightOnCommand, lightOffCommand);
        remoteControl.setCommand(1, garageDoorOpenCommand, garageDoorCloseCommand);
        remoteControl.setCommand(2, stereoOnOfCDCommand, stereoOffCommand);
        remoteControl.setCommand(3, ceilingFanHighCommand, ceilingFanOffCommand);
        remoteControl.setCommand(4, ceilingFanMediumCommand, ceilingFanOffCommand);
        remoteControl.setCommand(5, macroOnCommand, macroOffCommand);
        System.out.println(remoteControl);

        remoteControl.onButtonWasPushed(0);
        remoteControl.offButtonWasPushed(0);
        System.out.println(remoteControl);
        remoteControl.onButtonWasPushed(1);
        System.out.println(remoteControl);
        remoteControl.undoButtonWasPushed();

        remoteControl.onButtonWasPushed(2);
        remoteControl.offButtonWasPushed(2);
        remoteControl.onButtonWasPushed(5);
        //remoteControl.offButtonWasPushed(5);
        remoteControl.undoButtonWasPushed();

        remoteControl.onButtonWasPushed(3);
        remoteControl.offButtonWasPushed(3);
        remoteControl.undoButtonWasPushed();
        remoteControl.onButtonWasPushed(4);
        remoteControl.undoButtonWasPushed();
    }
}
