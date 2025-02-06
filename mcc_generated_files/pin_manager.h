/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1939
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set GR01 aliases
#define GR01_TRIS                 TRISAbits.TRISA0
#define GR01_LAT                  LATAbits.LATA0
#define GR01_PORT                 PORTAbits.RA0
#define GR01_ANS                  ANSELAbits.ANSA0
#define GR01_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define GR01_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define GR01_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define GR01_GetValue()           PORTAbits.RA0
#define GR01_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define GR01_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define GR01_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define GR01_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set GR02 aliases
#define GR02_TRIS                 TRISAbits.TRISA1
#define GR02_LAT                  LATAbits.LATA1
#define GR02_PORT                 PORTAbits.RA1
#define GR02_ANS                  ANSELAbits.ANSA1
#define GR02_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define GR02_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define GR02_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define GR02_GetValue()           PORTAbits.RA1
#define GR02_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define GR02_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define GR02_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define GR02_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set GR03 aliases
#define GR03_TRIS                 TRISAbits.TRISA2
#define GR03_LAT                  LATAbits.LATA2
#define GR03_PORT                 PORTAbits.RA2
#define GR03_ANS                  ANSELAbits.ANSA2
#define GR03_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define GR03_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define GR03_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define GR03_GetValue()           PORTAbits.RA2
#define GR03_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define GR03_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define GR03_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define GR03_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set GR04 aliases
#define GR04_TRIS                 TRISAbits.TRISA3
#define GR04_LAT                  LATAbits.LATA3
#define GR04_PORT                 PORTAbits.RA3
#define GR04_ANS                  ANSELAbits.ANSA3
#define GR04_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define GR04_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define GR04_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define GR04_GetValue()           PORTAbits.RA3
#define GR04_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define GR04_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define GR04_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define GR04_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set GR05 aliases
#define GR05_TRIS                 TRISAbits.TRISA4
#define GR05_LAT                  LATAbits.LATA4
#define GR05_PORT                 PORTAbits.RA4
#define GR05_ANS                  ANSELAbits.ANSA4
#define GR05_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define GR05_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define GR05_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define GR05_GetValue()           PORTAbits.RA4
#define GR05_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define GR05_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define GR05_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define GR05_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set GR06 aliases
#define GR06_TRIS                 TRISAbits.TRISA5
#define GR06_LAT                  LATAbits.LATA5
#define GR06_PORT                 PORTAbits.RA5
#define GR06_ANS                  ANSELAbits.ANSA5
#define GR06_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define GR06_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define GR06_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define GR06_GetValue()           PORTAbits.RA5
#define GR06_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define GR06_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define GR06_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define GR06_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set GR07 aliases
#define GR07_TRIS                 TRISAbits.TRISA6
#define GR07_LAT                  LATAbits.LATA6
#define GR07_PORT                 PORTAbits.RA6
#define GR07_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define GR07_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define GR07_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define GR07_GetValue()           PORTAbits.RA6
#define GR07_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define GR07_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set GR08 aliases
#define GR08_TRIS                 TRISAbits.TRISA7
#define GR08_LAT                  LATAbits.LATA7
#define GR08_PORT                 PORTAbits.RA7
#define GR08_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define GR08_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define GR08_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define GR08_GetValue()           PORTAbits.RA7
#define GR08_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define GR08_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set GR09 aliases
#define GR09_TRIS                 TRISBbits.TRISB0
#define GR09_LAT                  LATBbits.LATB0
#define GR09_PORT                 PORTBbits.RB0
#define GR09_WPU                  WPUBbits.WPUB0
#define GR09_ANS                  ANSELBbits.ANSB0
#define GR09_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define GR09_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define GR09_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define GR09_GetValue()           PORTBbits.RB0
#define GR09_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define GR09_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define GR09_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define GR09_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define GR09_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define GR09_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set GR10 aliases
#define GR10_TRIS                 TRISBbits.TRISB1
#define GR10_LAT                  LATBbits.LATB1
#define GR10_PORT                 PORTBbits.RB1
#define GR10_WPU                  WPUBbits.WPUB1
#define GR10_ANS                  ANSELBbits.ANSB1
#define GR10_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define GR10_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define GR10_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define GR10_GetValue()           PORTBbits.RB1
#define GR10_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define GR10_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define GR10_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define GR10_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define GR10_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define GR10_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set GR11 aliases
#define GR11_TRIS                 TRISBbits.TRISB2
#define GR11_LAT                  LATBbits.LATB2
#define GR11_PORT                 PORTBbits.RB2
#define GR11_WPU                  WPUBbits.WPUB2
#define GR11_ANS                  ANSELBbits.ANSB2
#define GR11_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define GR11_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define GR11_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define GR11_GetValue()           PORTBbits.RB2
#define GR11_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define GR11_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define GR11_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define GR11_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define GR11_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define GR11_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set GR12 aliases
#define GR12_TRIS                 TRISBbits.TRISB3
#define GR12_LAT                  LATBbits.LATB3
#define GR12_PORT                 PORTBbits.RB3
#define GR12_WPU                  WPUBbits.WPUB3
#define GR12_ANS                  ANSELBbits.ANSB3
#define GR12_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define GR12_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define GR12_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define GR12_GetValue()           PORTBbits.RB3
#define GR12_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define GR12_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define GR12_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define GR12_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define GR12_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define GR12_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set E aliases
#define E_TRIS                 TRISBbits.TRISB4
#define E_LAT                  LATBbits.LATB4
#define E_PORT                 PORTBbits.RB4
#define E_WPU                  WPUBbits.WPUB4
#define E_ANS                  ANSELBbits.ANSB4
#define E_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define E_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define E_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define E_GetValue()           PORTBbits.RB4
#define E_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define E_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define E_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define E_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define E_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define E_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set BUZZER aliases
#define BUZZER_TRIS                 TRISBbits.TRISB5
#define BUZZER_LAT                  LATBbits.LATB5
#define BUZZER_PORT                 PORTBbits.RB5
#define BUZZER_WPU                  WPUBbits.WPUB5
#define BUZZER_ANS                  ANSELBbits.ANSB5
#define BUZZER_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define BUZZER_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define BUZZER_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define BUZZER_GetValue()           PORTBbits.RB5
#define BUZZER_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define BUZZER_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define BUZZER_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define BUZZER_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define BUZZER_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define BUZZER_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IN1 aliases
#define IN1_TRIS                 TRISCbits.TRISC0
#define IN1_LAT                  LATCbits.LATC0
#define IN1_PORT                 PORTCbits.RC0
#define IN1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IN1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IN1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IN1_GetValue()           PORTCbits.RC0
#define IN1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IN1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set OUT1 aliases
#define OUT1_TRIS                 TRISCbits.TRISC1
#define OUT1_LAT                  LATCbits.LATC1
#define OUT1_PORT                 PORTCbits.RC1
#define OUT1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define OUT1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define OUT1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define OUT1_GetValue()           PORTCbits.RC1
#define OUT1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define OUT1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set OUT2 aliases
#define OUT2_TRIS                 TRISCbits.TRISC2
#define OUT2_LAT                  LATCbits.LATC2
#define OUT2_PORT                 PORTCbits.RC2
#define OUT2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define OUT2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define OUT2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define OUT2_GetValue()           PORTCbits.RC2
#define OUT2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define OUT2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set IGR12 aliases
#define IGR12_TRIS                 TRISCbits.TRISC5
#define IGR12_LAT                  LATCbits.LATC5
#define IGR12_PORT                 PORTCbits.RC5
#define IGR12_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IGR12_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IGR12_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IGR12_GetValue()           PORTCbits.RC5
#define IGR12_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IGR12_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

// get/set IGR11 aliases
#define IGR11_TRIS                 TRISDbits.TRISD0
#define IGR11_LAT                  LATDbits.LATD0
#define IGR11_PORT                 PORTDbits.RD0
#define IGR11_ANS                  ANSELDbits.ANSD0
#define IGR11_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IGR11_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IGR11_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IGR11_GetValue()           PORTDbits.RD0
#define IGR11_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IGR11_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IGR11_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define IGR11_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set IGR10 aliases
#define IGR10_TRIS                 TRISDbits.TRISD1
#define IGR10_LAT                  LATDbits.LATD1
#define IGR10_PORT                 PORTDbits.RD1
#define IGR10_ANS                  ANSELDbits.ANSD1
#define IGR10_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IGR10_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IGR10_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IGR10_GetValue()           PORTDbits.RD1
#define IGR10_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IGR10_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IGR10_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define IGR10_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set IGR09 aliases
#define IGR09_TRIS                 TRISDbits.TRISD2
#define IGR09_LAT                  LATDbits.LATD2
#define IGR09_PORT                 PORTDbits.RD2
#define IGR09_ANS                  ANSELDbits.ANSD2
#define IGR09_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IGR09_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IGR09_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IGR09_GetValue()           PORTDbits.RD2
#define IGR09_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IGR09_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IGR09_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define IGR09_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set IGR08 aliases
#define IGR08_TRIS                 TRISDbits.TRISD3
#define IGR08_LAT                  LATDbits.LATD3
#define IGR08_PORT                 PORTDbits.RD3
#define IGR08_ANS                  ANSELDbits.ANSD3
#define IGR08_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define IGR08_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define IGR08_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define IGR08_GetValue()           PORTDbits.RD3
#define IGR08_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define IGR08_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define IGR08_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define IGR08_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set IGR07 aliases
#define IGR07_TRIS                 TRISDbits.TRISD4
#define IGR07_LAT                  LATDbits.LATD4
#define IGR07_PORT                 PORTDbits.RD4
#define IGR07_ANS                  ANSELDbits.ANSD4
#define IGR07_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define IGR07_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define IGR07_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define IGR07_GetValue()           PORTDbits.RD4
#define IGR07_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define IGR07_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define IGR07_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define IGR07_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set IGR06 aliases
#define IGR06_TRIS                 TRISDbits.TRISD5
#define IGR06_LAT                  LATDbits.LATD5
#define IGR06_PORT                 PORTDbits.RD5
#define IGR06_ANS                  ANSELDbits.ANSD5
#define IGR06_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IGR06_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IGR06_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IGR06_GetValue()           PORTDbits.RD5
#define IGR06_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IGR06_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IGR06_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define IGR06_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set IGR05 aliases
#define IGR05_TRIS                 TRISDbits.TRISD6
#define IGR05_LAT                  LATDbits.LATD6
#define IGR05_PORT                 PORTDbits.RD6
#define IGR05_ANS                  ANSELDbits.ANSD6
#define IGR05_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IGR05_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IGR05_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IGR05_GetValue()           PORTDbits.RD6
#define IGR05_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IGR05_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define IGR05_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define IGR05_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set IGR04 aliases
#define IGR04_TRIS                 TRISDbits.TRISD7
#define IGR04_LAT                  LATDbits.LATD7
#define IGR04_PORT                 PORTDbits.RD7
#define IGR04_ANS                  ANSELDbits.ANSD7
#define IGR04_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IGR04_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IGR04_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IGR04_GetValue()           PORTDbits.RD7
#define IGR04_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IGR04_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define IGR04_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define IGR04_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set IGR03 aliases
#define IGR03_TRIS                 TRISEbits.TRISE0
#define IGR03_LAT                  LATEbits.LATE0
#define IGR03_PORT                 PORTEbits.RE0
#define IGR03_ANS                  ANSELEbits.ANSE0
#define IGR03_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define IGR03_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define IGR03_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define IGR03_GetValue()           PORTEbits.RE0
#define IGR03_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define IGR03_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define IGR03_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define IGR03_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set IGR02 aliases
#define IGR02_TRIS                 TRISEbits.TRISE1
#define IGR02_LAT                  LATEbits.LATE1
#define IGR02_PORT                 PORTEbits.RE1
#define IGR02_ANS                  ANSELEbits.ANSE1
#define IGR02_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define IGR02_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define IGR02_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define IGR02_GetValue()           PORTEbits.RE1
#define IGR02_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define IGR02_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define IGR02_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define IGR02_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set IGR01 aliases
#define IGR01_TRIS                 TRISEbits.TRISE2
#define IGR01_LAT                  LATEbits.LATE2
#define IGR01_PORT                 PORTEbits.RE2
#define IGR01_ANS                  ANSELEbits.ANSE2
#define IGR01_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define IGR01_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define IGR01_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define IGR01_GetValue()           PORTEbits.RE2
#define IGR01_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define IGR01_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define IGR01_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define IGR01_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/