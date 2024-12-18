from command.command import NoCommand

class RemoteControl:
    def __init__(self, n:int) -> None:
        self.__onCommands = [NoCommand() for _ in range(n)]
        self.__offCommands = [NoCommand() for _ in range(n)]
        self.__undoCommand = NoCommand()
    
    def setCommand(self, i:int, onCommand, offCommand) -> None:
        if i < 0 or i >= len(self.__onCommands):
            return
        self.__onCommands[i] = onCommand
        self.__offCommands[i] = offCommand
        
    def onButtonWasPushed(self, i:int) -> None:
        if i < 0 or i >= len(self.__onCommands):
            return
        self.__onCommands[i].execute()
        self.__undoCommand = self.__onCommands[i]
        
    def offButtonWasPushed(self, i:int) -> None:
        if i < 0 or i >= len(self.__offCommands):
            return
        self.__offCommands[i].execute()
        self.__undoCommand = self.__offCommands[i]
        
    def undoButtonWasPushed(self) -> None:
        self.__undoCommand.undo()
        
    def __str__(self) -> str:
        result = "\n------ Remote Control ------\n"
        for i in range(len(self.__onCommands)):
            result += f"[slot {i}] {self.__onCommands[i].__class__.__name__}    {self.__offCommands[i].__class__.__name__}\n"
        result += f"[undo] {self.__undoCommand.__class__.__name__}\n"
        return result
        