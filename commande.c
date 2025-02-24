
#include "mcc_generated_files/pin_manager.h"
#include <xc.h>
#include "mcc_generated_files/mcc.h"

void reset() {

    GR01_SetLow();
    GR02_SetLow();
    GR03_SetLow();
    GR04_SetLow();
    GR05_SetLow();
    GR06_SetLow();
    GR07_SetLow();
    GR08_SetLow();
    GR09_SetLow();
    GR10_SetLow();
    GR11_SetLow();
    GR12_SetLow();

}

void test() {

    GR01_SetHigh();
    GR02_SetHigh();
    GR03_SetHigh();
    GR04_SetHigh();
    GR05_SetHigh();
    GR06_SetHigh();
    GR07_SetHigh();
    GR08_SetHigh();
    GR09_SetHigh();
    GR10_SetHigh();
    GR11_SetHigh();
    GR12_SetHigh();

}

void processActivation(char ordre) {

    switch (ordre) // check command  
    {

        case '1':
        {
            reset();
            GR01_SetHigh();
            __delay_ms(100);
            printf("->GR:x:OFF");
            break;
        }

        case '2':
        {
            reset();
            GR02_SetHigh();
            __delay_ms(100);
            printf("->GR:1:ON");
            break;
        }

        case '3':
        {
            reset();
            GR03_SetHigh();
            __delay_ms(100);
            printf("->GR:2:ON");
            break;
        }

        case '4':
        {
            reset();
            GR04_SetHigh();
            __delay_ms(100);
            printf("->GR:3:ON");
            break;
        }

        case '5':
        {
            reset();
            GR05_SetHigh();
            __delay_ms(100);
            printf("->GR:4:ON");
            break;
        }

        case '6':
        {
            reset();
            GR06_SetHigh();
            __delay_ms(100);
            printf("->GR:5:ON");
            break;
        }

        case '7':
        {
            reset();
            GR07_SetHigh();
            __delay_ms(100);
            printf("->GR:6:ON");
            break;
        }

        case '8':
        {
            reset();
            GR08_SetHigh();
            __delay_ms(100);
            printf("->GR:7:ON");
            break;
        }

        case '9':
        {
            reset();
            GR09_SetHigh();
            __delay_ms(100);
            printf("->GR:8:ON");
            break;
        }

        case ':':
        {
            reset();
            GR10_SetHigh();
            __delay_ms(100);
            printf("->GR:9:ON");
            break;
        }

        case ';':
        {
            reset();
            GR11_SetHigh();
            __delay_ms(100);
            printf("->GR:10:ON");
            break;
        }

        case '<':
        {
            reset();
            GR12_SetHigh();
            __delay_ms(100);
            printf("->GR:11:ON");
            break;
        }

        case 'Z':
        {
            RESET();
            break;
        }

        case 'T':
        {
            test();
            break;
        }

        case 't':
        {
            reset();
            break;
        }
    }

}



