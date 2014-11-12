/* 
 * File:   hardwareProfile.h
 * Author: Verónica
 *
 * Created on 8 de octubre de 2014, 11:39
 */

#ifndef HARDWAREPROFILE_H
#define	HARDWAREPROFILE_H

#if defined (_PIC18F2550_H_)


#define _XTAL_FREQ 48000000  //Microcontroller Clock Frequency
#define F_OSC _XTAL_FREQ        //Microcontroller Clock Frequency
#define FCY (F_OSC/4)           //Cycle Frequency
#define TCY (1/FCY)             //Period Frequecy
#define TOSC (1/F_OSC)          //Microcontroller Clock Period
#define BRG_I2C ((_XTAL_FREQ/(4*400000))-1)  //BRG I2C Master

/****************************** HARDWARE DE I/O *******************************/
#define LED_RED                     PORTCbits.RC0
#define LED_GREEN                   PORTCbits.RC1

#define LED_RED_On()                LED_RED = 1;
#define LED_RED_Off()               LED_RED = 0;
#define LED_RED_Toggle()            LED_RED = ~LED_RED;
#define LED_GREEN_On()              LED_GREEN = 1;
#define LED_GREEN_Off()             LED_GREEN = 0;
#define LED_GREEN_Toggle()          LED_GREEN = ~LED_GREEN;






#endif


/***************************** MÓDULO GIRÓSCOPO *******************************/


#define GYR_ADDRESS_READ          0xD3
#define GYR_ADDRESS_WRITE         0xD2


#define L3G4200D_WHO_AM_I      0x0F

#define L3G4200D_CTRL_REG1     0x20
#define L3G4200D_CTRL_REG2     0x21
#define L3G4200D_CTRL_REG3     0x22
#define L3G4200D_CTRL_REG4     0x23
#define L3G4200D_CTRL_REG5     0x24
#define L3G4200D_REFERENCE     0x25
#define L3G4200D_OUT_TEMP      0x26
#define L3G4200D_STATUS_REG    0x27

#define L3G4200D_OUT_X_L       0x28
#define L3G4200D_OUT_X_H       0x29
#define L3G4200D_OUT_Y_L       0x2A
#define L3G4200D_OUT_Y_H       0x2B
#define L3G4200D_OUT_Z_L       0x2C
#define L3G4200D_OUT_Z_H       0x2D

#define L3G4200D_FIFO_CTRL_REG 0x2E
#define L3G4200D_FIFO_SRC_REG  0x2F

#define L3G4200D_INT1_CFG      0x30
#define L3G4200D_INT1_SRC      0x31
#define L3G4200D_INT1_THS_XH   0x32
#define L3G4200D_INT1_THS_XL   0x33
#define L3G4200D_INT1_THS_YH   0x34
#define L3G4200D_INT1_THS_YL   0x35
#define L3G4200D_INT1_THS_ZH   0x36
#define L3G4200D_INT1_THS_ZL   0x37
#define L3G4200D_INT1_DURATION 0x38

/***************************** MÓDULO MAGNETÓMETRO Y ACELERÓMETRO *******************************/

#define ACC_ADDRESS_READ          0x31
#define ACC_ADDRESS_WRITE         0x30
#define MAG_ADDRESS_READ          0x3D
#define MAG_ADDRESS_WRITE         0x3C


#define L3G4200D_WHO_AM_M      0x0F
//ACCELEROMETER

#define LSM303DLM_CTRL_REG1_A     0x20
#define LSM303DLM_CTRL_REG2_A     0x21
#define LSM303DLM_CTRL_REG3_A     0x22
#define LSM303DLM_CTRL_REG4_A     0x23
#define LSM303DLM_CTRL_REG5_A     0x24

#define LSM303DLM_HP_FILTER_RESET_A     0x25
#define LSM303DLM_REFERENCE_A           0x26
#define LSM303DLM_SATUS_REG_A           0x27

#define LSM303DLM_OUT_X_L_A       0x28
#define LSM303DLM_OUT_X_H_A       0x29
#define LSM303DLM_OUT_Y_L_A       0x2A
#define LSM303DLM_OUT_Y_H_A       0x2B
#define LSM303DLM_OUT_Z_L_A       0x2C
#define LSM303DLM_OUT_Z_H_A       0x2D

#define LSM303DLM_INT1_CFG_A      0x30
#define LSM303DLM_INT1_SRC_A      0x31
#define LSM303DLM_INT1_THS_A      0x32
#define LSM303DLM_INT1_DURATION_A 0x33
#define LSM303DLM_INT2_CFG_A      0x34
#define LSM303DLM_INT2_SRC_A      0x35
#define LSM303DLM_INT2_THS_A      0x36
#define LSM303DLM_INT2_DURATION_A 0x37

//MAGNETOMETER
#define LSM303DLM_CRA_REG_M     0x00
#define LSM303DLM_CRB_REG_M     0X01
#define LSM303DLM_MR_REG_M      0X02

#define LSM303DLM_OUT_X_L_M       0x03
#define LSM303DLM_OUT_X_H_M       0x04
#define LSM303DLM_OUT_Y_L_M       0x05
#define LSM303DLM_OUT_Y_H_M       0x06
#define LSM303DLM_OUT_Z_L_M       0x07
#define LSM303DLM_OUT_Z_H_M       0x08

#define LSM303DLM_SR_REG_M  0x09
#define LSM303DLM_IRA_REG_M  0X0A
#define LSM303DLM_IRB_REG_M  0X0B
#define LSM303DLM_IRC_REG_M  0X0C

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* HARDWAREPROFILE_H */

