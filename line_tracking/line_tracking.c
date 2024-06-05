#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <math.h>
#include <signal.h>

#define Tracking_Right1 0   // BCM_GPIO 17 -> WiringPi 0
#define Tracking_Right2 7   // BCM_GPIO 4  -> WiringPi 7
#define Tracking_Left1 2    // BCM_GPIO 27 -> WiringPi 2
#define Tracking_Left2 3    // BCM_GPIO 22 -> WiringPi 3

#define I2C_ADDR 0x16
