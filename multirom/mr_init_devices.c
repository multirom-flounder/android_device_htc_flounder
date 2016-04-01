#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/class/graphics/fb0",

    "/sys/block/mmcblk0",
    "/sys/devices/platform/sdhci-tegra.3",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0*",

    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    // for input
    "/sys/bus/hid/drivers/hid-multitouch/uevent",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/platform/gpio-keys.6/input*",
    "/sys/devices/platform/spi-tegra114.2/spi_master/spi2/spi2.0/input*",

    // for adb
    "/sys/class/tty/ptmx",
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb",
    "/sys/class/android_usb/android0",
    "/sys/class/android_usb/android0*",
    "/sys/bus/usb",
    "/sys/devices/platform/tegra-ehci.1",
    "/sys/devices/platform/tegra-ehci.1*",
    "/sys/devices/platform/tegra-udc.0",
    "/sys/devices/platform/tegra-udc.0*",
    "/sys/devices/platform/tegra-otg",
    "/sys/devices/platform/tegra-otg*",
    "/sys/module/tegra_udc",
    "/sys/module/usbcore",
    "/sys/devices/virtual/android_usb/android0/f_ffs",
    "/sys/module/g_android",

    // USB drive is in here
    "/sys/devices/platform/tegra-ehci.0*",

    // Watchdog
    "/sys/devices/platform/60005100.watchdog",
    "/sys/devices/virtual/misc/watchdog",
    "/sys/devices/virtual/watchdog*",

    NULL
};
