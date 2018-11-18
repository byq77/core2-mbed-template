# core2-mbed-template
Blinking leds project template for CORE2 for mbed development in Visual Studio Code.

## Prerequisites
You need following tools:
* [Visual Studio Code IDE](https://code.visualstudio.com/)
* [GNU Arm Embedded version 6 toolchain](https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads)
* [STM32 ST-LINK Utility](https://www.st.com/en/development-tools/stsw-link004.html) (Windows only)
## `mbed-cli` installation
In-depth tutorial on `mbed-cli` tool installation can be found [here](https://os.mbed.com/docs/v5.10/tools/installation-and-setup.html). 

> **Important!**
> After installation remember to set the path to the binary directory of your **GCC Arm Embedded Compiler** installation in `mbed-cli` configuration. You can read how to do it under this [link](https://os.mbed.com/docs/v5.10/tools/configuring-mbed-cli.html#through-mbed-cli-configuration). You will also find all necessary information about this tool there.
>```bash
>$ where arm-none-eabi-gcc # prints path to arm-none-eabi-gcc.exe if in PATH
>$ mbed config -G GCC_ARM_PATH "C:\Program Files (x86)\GNU Tools ARM Embedded\6 2017-q2-update\bin" # configure path for mbed-cli
>$ mbed config --list # check configuration
>```

### Preparing a workspace
Create a new folder `core2-mbed-workspace`. It will serve as workspace for your mbed projects.  Run:

```bash
$ mkdir core2-mbed-workspace && cd core2-mbed-workspace
```
Next step is to import `mbed-os` library. It will be used by all your projects. In your workspace folder run:

```bash
$ mbed import mbed-os
[mbed] Working path "E:\mbed_projects\core2-mbed-workspace" (directory)
[mbed] Program path "E:\mbed_projects\core2-mbed-workspace"
[mbed] Importing program "mbed-os" from "https://github.com/ARMmbed/mbed-os" at latest revision in the current branch
```

After that you will need to set path to your newly imported `mbed-os` library as global in mbed cli tool. These way all your projects can use one instance of library (default configuration is to have separate instance of library for each project). Run:

```bash
$ mbed config -G MBED_OS_DIR <path to mbed-os>
```

Example:

```bash
$ mbed config -G MBED_OS_DIR "E:\mbed_projects\core2-mbed-workspace\mbed-os"
[mbed] Working path "E:\mbed_projects\core2-mbed-workspace" (directory)
[mbed] Program path "E:\mbed_projects\core2-mbed-workspace"
[mbed] E:\mbed_projects\core2-mbed-workspace\mbed-os now set as global MBED_OS_DIR
```

### Importing this template project

Open Visual Studio Code, press `CTRL + SHIFT + P` and type `Git: Clone` in Command Pallet. Copy and paste `https://github.com/byq77/core2-mbed-template.git` URL.

<img style="display: block; margin-left: auto; margin-right: auto;" src="https://user-images.githubusercontent.com/28567623/48676115-53336680-eb62-11e8-9059-4aeb8d8096b6.png" />

You will be prompted to select your repo location. Choose `core2-mbed-workspace` folder. Open your repo in vs code.

### Project configuration

Last step will be to configure your `c_cpp_project.json` file. 

Find `MbedOsPath` variable and change its value with path to your local `mbed-os`: 

<div><center><img src="https://user-images.githubusercontent.com/28567623/48676206-d30e0080-eb63-11e8-9030-4f339a5eb634.png" /></center></div>

If you are a Windows user find variable `compilerPath` and replace its value with path to `arm-none-eabi-gcc.exe` on your system:

<div><center><img src="https://user-images.githubusercontent.com/28567623/48676215-f89b0a00-eb63-11e8-9fb3-be5cf287dd75.png"></center></div>


## mbed development

Documentation:
* [MBED OS Documentation](https://os.mbed.com/docs/v5.10/)
* [MBED OS API Doxygen](https://os.mbed.com/docs/v5.10/mbed-os-api-doxy/modules.html)
* [MBED OS GitHub](https://github.com/byq77/core2-mbed-template)
