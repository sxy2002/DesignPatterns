package command.command;

import command.device.Stereo;

public class StereoOnOfCDCommand implements Command{
    private Stereo stereo;

    public StereoOnOfCDCommand(Stereo stereo) {
        this.stereo = stereo;
    }

    @Override
    public void execute() {
        stereo.on();
        stereo.setDVD();
        stereo.setVolume(10);
    }

    @Override
    public void undo() {
        stereo.off();
    }
}
