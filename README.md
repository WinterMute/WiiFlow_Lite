# WiiFlow Lite

Attempt to clean up the project and build with modern tooling.

## Description
WiiFlow Lite is a wii homebrew app used to display and launch your games and apps stored on a USB device or SD card plugged into a Wii or Wii U in Wii mode. The games and apps are displayed in cover flow style display.

## Compiling
This fork can be compiled using stock devkitPPC and several portlibs provided by devkitPro. There is probably still some work to do to get it to actually work but at least it will compile and link without vandalising a stock install.

See https://devkitpro.org/wiki/Getting_Started for installing devkitPPC. You will also need to install ppc-freetype ppc-libvorbisidec & ppc-libjpeg-turbo via pacman for your chosen system. See https://devkitpro.org/wiki/devkitPro_pacman for details.


## DONE

- Remove binary artifacts from repository
- add wupc, wiidrc & libsicksaxis code. These are minimal code and dependent on hacks
- Remove inappropriate CI which maintains technical debt & prevents modernisation,
 

## TODO

- Fix the warnings
- create a proper portlib of ntfs-3g. https://github.com/tuxera/ntfs-3g
    - partially done at https://github.com/devkitPro/pacman-packages/tree/wii-filesystems

- create a proper portlib of libext2fs. Appears to be https://git.kernel.org/pub/scm/fs/ext2/e2fsprogs.git
- wrap socket API in libogc with standard BSD sockets, as we've done for 3DS, Switch & WiiU.
- Create proper portlib of WolfSSL using said socket API.
- ???
- Profit


