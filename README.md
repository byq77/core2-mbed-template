# core2-mbed-template
Blinking leds project template for CORE2 for mbed development in Visual Studio Code.

## Prerequisites
You need following tools:
* [Visual Studio Code IDE](https://code.visualstudio.com/)
* [GNU Arm Embedded version 6 toolchain](https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads)
* [STM32 ST-LINK Utility](https://www.st.com/en/development-tools/stsw-link004.html) (Windows only)
##`mbed-cli` installation
In-depth tutorial on `mbed-cli` tool installation can be found [here](https://os.mbed.com/docs/v5.10/tools/installation-and-setup.html). 

> **Important!**
> After installation remember to set the path to the binary directory of your **GCC Arm Embedded Compiler** installation in `mbed-cli` configuration. You can read how to do it under this [link](https://os.mbed.com/docs/v5.10/tools/configuring-mbed-cli.html#through-mbed-cli-configuration).  You will also find all necessary information about this tool there.
>```bash
>$ where arm-none-eabi-gcc # prints path to arm-none-eabi-gcc.exe if in PATH
>$ mbed config -G GCC_ARM_PATH "C:\Program Files (x86)\GNU Tools ARM Embedded\6 2017-q2-update\bin\arm-none-eabi-gcc.exe" # configure path for mbed-cli
>$ mbed config --list # check configuration
>```

## Preparing workspace