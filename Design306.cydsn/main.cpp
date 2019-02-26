/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#ifdef __cplusplus
extern "C" {
#endif
#include "project.h"
#ifdef __cplusplus
}
#endif

#include "SPIM.hpp"

SPIM spi;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    

    for(;;)
    {
        /* Place your application code here. */
        spi.write(0x00);
        while(!(spi.dev->ReadTxStatus() & spi.STS_BYTE_COMPLETE));
        spi.read();
    }
}

/* [] END OF FILE */
