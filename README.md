# core2-mbed-template
Blinking leds project template for [Husarion CORE2](https://husarion.com/manuals/core2/), a board equipped with STM32 Cortex-M4 MCU. 
Project is prepared for development in Visual Studio Code with Mbed CLI tools.

<p align="center"><img width="800px" src="https://cdn.shopify.com/s/files/1/2545/8446/products/CORE2-ROS_1024x1024@2x.png?v=1520001976" alt="CORE2-ROS"/></p>

## Important
This target use C++98(C++03) and is available for `GCC_ARM` toolchain only. The C++11 can be enabled by using custom profiles (`TARGET_CORE2/custom_profiles`);

## Prerequisites
You need following tools:
* [Visual Studio Code IDE](https://code.visualstudio.com/)
* [GNU Arm Embedded version 6 toolchain](https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads)
* [STM32 ST-LINK Utility](https://www.st.com/en/development-tools/stsw-link004.html) (Windows)
* [stlink flasher](https://github.com/texane/stlink/blob/master/README.md) (Mac/Linux)
* [Mbed CLI](https://os.mbed.com/docs/mbed-os/v5.12/tools/installation-and-setup.html) 


## Mbed CLI installation

To install the tool follow the official documentation:
* [Linux](https://os.mbed.com/docs/mbed-os/v5.12/tools/linux.html)
* [Mac/Windows](https://os.mbed.com/docs/mbed-os/v5.12/tools/installation-and-setup.html)


After installation set the path to the binary directory of your GCC Arm Embedded Compiler installation:

```
$ mbed config -G GCC_ARM_PATH "C:\Program Files (x86)\GNU Tools ARM Embedded\6 2017-q2-update\bin" 
```
To check current configuration run:

```
$ mbed config --list
```

### Preparing a workspace
Create a new folder `core2-mbed-workspace`. It will serve as workspace for your mbed projects.  Run:

```bash
$ mkdir core2-mbed-workspace && cd core2-mbed-workspace
```
Next step is to import `mbed-os` library. It will be used by all your projects. In your workspace folder run:

```bash
$ mbed import mbed-os
```

Set Mbed OS version to supported by this template:

```bash
$ cd mbed-os
$ mbed update mbed-os-5.12.3
```

After that you will need to set path to `mbed-os` directory in Mbed CLI. These way all your projects can use one instance of library (default configuration is to have separate instance of library for each project). Run:

```bash
$ mbed config -G MBED_OS_DIR <path to mbed-os>
```

Example:

```bash
$ mbed config -G MBED_OS_DIR "E:\mbed_projects\core2-mbed-workspace\mbed-os"
```

### Importing template project

Open Visual Studio Code, press `CTRL + SHIFT + P` and type `Git: Clone` in Command Pallet. Copy and paste `https://github.com/byq77/core2-mbed-template.git` URL.

<p align="center"><img width="800px" src="https://user-images.githubusercontent.com/28567623/48676115-53336680-eb62-11e8-9059-4aeb8d8096b6.png" /></p>

You will be prompted to select your repo location. Choose `core2-mbed-workspace` folder. Open your repo in vs code. You should see:

<p align="center"><img width="800px" src="https://user-images.githubusercontent.com/28567623/49590889-43db5800-f96d-11e8-8d2a-2afed679c03b.png" /></p>

### Updating project files

Open `settings.json` file from `.vscode` and change value of `C_cpp.default.compilerPath` with path to `arm-none-eabi-g++` location on your system:

```json
{
    "C_Cpp.default.compilerPath": "C:/Program Files (x86)/GNU Tools ARM Embedded/6 2017-q2-update/bin/arm-none-eabi-g++"
}
```
### Adding .mbedignore
https://os.mbed.com/docs/v5.10/tools/ignoring-files-from-mbed-build.html

In order to add support for CORE2 target and speed-up building of your project you need to exclude certain folders of `mbed-os` library from compilation. In your local `mbed-os` library root folder create new file `.mbedignore`. Open it and add following lines:

```
features/cellular/*
features/cryptocell/*
features/deprecated_warnings/*
features/lorawan/*
features/lwipstack/*
features/nanostack/*
features/netsocket/*
features/nfc/*
features/unsupported/*
components/wifi/*
components/802.15.4_RF/*
targets/TARGET_STM/TARGET_STM32F4/TARGET_STM32F407xG/device/TOOLCHAIN_GCC_ARM/STM32F407XG.ld
targets/TARGET_STM/TARGET_STM32F4/TARGET_STM32F407xG/device/TOOLCHAIN_GCC_ARM/startup_stm32f407xx.S
```

### Compilation tasks

To build and flash your firmware press `CTRL + SHIFT + P` and type `Tasks: Run Task` in Command Pallete. Here is the list of available tasks: 
* `BUILD (RELEASE)`
* `BUILD (DEBUG)`
* `FLASH FIRMWARE (RELEASE)`
* `FLASH FIRMWARE (DEBUG)`
* `CREATE STATIC MBED-OS LIB (RELEASE)`
* `CREATE STATIC MBED-OS LIB (DEBUG)`
* `BUILD FROM STATIC LIB (RELEASE)`
* `BUILD FROM STATIC LIB (DEBUG)`
* `CLEAN DEBUG`
* `CLEAN RELEASE`

You can add new tasks and customize existing ones by editing `task.json` file. 

### Debug

To debug:
* make sure you have stlink from texane installed on your system: https://github.com/texane/stlink/blob/master/README.md
* install extension: https://marketplace.visualstudio.com/items?itemName=marus25.cortex-debug
* compile and flash DEBUG firmware
* `CTRL + SHIFT + D` and click on `start debug` button

## mbed development

Documentation:
* [MBED OS Documentation](https://os.mbed.com/docs/v5.12/)
* [MBED OS API Doxygen](https://os.mbed.com/docs/v5.12/mbed-os-api-doxy/modules.html)
* [MBED OS GitHub](https://github.com/byq77/core2-mbed-template)
