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

#include "`$INSTANCE_NAME`.hpp"
//#include "`$CONTENT`.h"

const `$CONTENT`_dev_t `$CONTENT`_dev = {
  .Start        = `$CONTENT`_Start,
  .ReadTxStatus = `$CONTENT`_ReadTxStatus,
  .ReadRxStatus = `$CONTENT`_ReadRxStatus,
  .WriteTxData  = `$CONTENT`_WriteTxData,
  .ReadRxData   = `$CONTENT`_ReadRxData
};

const `$CONTENT`_dev_t * const `$CONTENT`_pdev = &`$CONTENT`_dev;

/* [] END OF FILE */
