/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16LF1939
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "commande.h"

/*
                         Main application
 */
void main(void) {
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    char reception;


    while (1) {

        if (eusartRxCount != 0) {

            reception = EUSART_Read(); // read a byte for RX

            switch (reception) // check command  
            {

                case '0':
                {
                    reset();
                    GR01_SetHigh();
                    printf("->GR:x:OFF");
                    break;
                }

                case '1':
                {
                    reset();
                    GR01_SetHigh();
                    printf("->GR:1:ON");
                    break;
                }

                case '2':
                {
                    reset();
                    GR02_SetHigh();
                    printf("->GR:2:ON");
                    break;
                }

                case '3':
                {
                    reset();
                    GR03_SetHigh();
                    printf("->GR:3:ON");
                    break;
                }

                case '4':
                {
                    reset();
                    GR04_SetHigh();
                    printf("->GR:4:ON");
                    break;
                }

                case '5':
                {
                    reset();
                    GR05_SetHigh();
                    printf("->GR:5:ON");
                    break;
                }

                case '6':
                {
                    reset();
                    GR06_SetHigh();
                    printf("->GR:6:ON");
                    break;
                }

                case '7':
                {
                    reset();
                    GR07_SetHigh();
                    printf("->GR:7:ON");
                    break;
                }

                case '8':
                {
                    reset();
                    GR08_SetHigh();
                    printf("->GR:8:ON");
                    break;
                }

                case '9':
                {
                    reset();
                    GR04_SetHigh();
                    printf("->GR:9:ON");
                    break;
                }

                case 'A':
                {
                    reset();
                    GR10_SetHigh();
                    printf("->GR:10:ON");
                    break;
                }

                case 'B':
                {
                    reset();
                    GR11_SetHigh();
                    printf("->GR:11:ON");
                    break;
                }

                case 'C':
                {
                    reset();
                    GR12_SetHigh();
                    printf("->GR:12:ON");
                    break;
                }

                case 'Z':
                {
                    RESET();
                    break;
                }

            }

        }





    }

}

/**
 End of File
 */