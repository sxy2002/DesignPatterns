package command.control;

import command.command.Command;
import command.command.NoCommand;

public class RemoteControl {
    private Command[] onCommands;
    private Command[] offCommands;
    private Command undoCommand;

    public RemoteControl(int n) {
        onCommands = new Command[n];
        offCommands = new Command[n];

        Command defaultCommand = new NoCommand();

        for(int i=0; i<n; i++) {
            onCommands[i] = defaultCommand;
            offCommands[i] = defaultCommand;
        }
        undoCommand = defaultCommand;
    }

    public void setCommand(int i, Command on, Command off) {
        if(i >= onCommands.length || i < 0)  return;
        onCommands[i] = on;
        offCommands[i] = off;
    }

    public void onButtonWasPushed(int i) {
        if(i >= onCommands.length || i < 0)  return;
        onCommands[i].execute();
        undoCommand = onCommands[i];
    }

    public void offButtonWasPushed(int i) {
        if(i >= onCommands.length || i < 0)  return;
        offCommands[i].execute();
        undoCommand = offCommands[i];
    }

    public void undoButtonWasPushed() {
        undoCommand.undo();     // !!!
    }

    public String toString() {
        StringBuffer stringBuff = new StringBuffer();
        stringBuff.append("\n------ Remote Control -------\n");
        for (int i = 0; i < onCommands.length; i++) {
            stringBuff.append("[slot " + i + "] " + onCommands[i].getClass().getName()
                    + "    " + offCommands[i].getClass().getName() + "\n");
        }
        stringBuff.append("[undo] " + undoCommand.getClass().getName() + "\n");
        return stringBuff.toString();
    }
}
