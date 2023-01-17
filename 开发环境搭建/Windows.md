# Setup OpenCV4 and C++ in Windows using WSL

This are the minimum steps you will require in order to setup a Windows 10
machine in order to build and compile C++ programs and work with OpenCV

## Why WSL?

You could install most of this software packages in a native Windows
installation, but as everyone knows(and apparently Microsoft is not the
expection anymore), Windows sucks competely. So, instead of struggling with
native installations, is much better idea to try to setup our development
computer the same way we would do if we were working on GNU/Linux. **I still
will never recommend to using this particular setup** , as you might expect, is
much more slower and painfull than just using GNU/Linux.

## How?

The **key** idea is to setup an Ubuntu 18.04 machine using `WSL`, setup a _fake_
Xserver to run on Windows, and then..., just behave normally as if you were
working on Linux!

## Installation Steps

1. [Install Windows Subsystem for Linux](https://docs.microsoft.com/en-us/windows/wsl/install-win10)
2. [Install VSCode for Windows](https://code.visualstudio.com/download)
3. [Install Remote - WSL in VSCode](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-wsl)
4. [Install a Windows Xserver](https://virtualizationreview.com/articles/2017/02/08/graphical-programs-on-windows-subsystem-on-linux.aspx)
5. Open the Ubuntu/Bash terminal and run this command `echo "export DISPLAY:=0" >> ~/.bashrc`
6. Launch **`Xming`** to start the Xserver(GUI) on the background. (Just double click on the Xming icon on Windows)
7. Open a bash/Ubuntu terminal and follow **ANY INSTRUCTION** instruction you have for Linux, for example, if you want to insall opencv4, just follow the guidelines for a Linux installation. of course, you need to execute all the commands in your brand new Ubuntu terminal

## References

- https://virtualizationreview.com/articles/2017/02/08/graphical-programs-on-windows-subsystem-on-linux.aspx
- https://gist.github.com/roman-smirnov/efff8bb1db8a4063600a40c29a3a0874
- https://www.learnopencv.com/install-opencv-4-on-ubuntu-18-04/
- https://dev.to/ajeet/the-ultimate-guide-to-use-vs-code-with-windows-subsystem-for-linux-wsl-51hc
- https://code.visualstudio.com/remote-tutorials/wsl/run-in-wsl
- https://code.visualstudio.com/docs/cpp/config-wsl
- www.google.com
