#include <iostream>
#include <stdint.h>

// for i2c functionality

#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <i2c/smbus.h>
#include <wiringPiI2C.h>

using namespace std;


void i2c_write_reg8(uint8_t address, uint8_t reg, uint8_t data);

int main(void)
{
	
	return 0;
}


void i2c_write_reg8(uint8_t address, uint8_t reg, uint8_t data)
{
	int handle = wiringPiI2CSetup(address);
	wiringPiI2CWriteReg8(handle, reg, data);	
}
