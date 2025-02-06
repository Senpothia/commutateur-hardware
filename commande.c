
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
    __delay_ms(100);

}
