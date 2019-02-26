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

#if !defined(CY_SPIM_WRAPPER_`$INSTANCE_NAME`_H)
#define CY_SPIM_WRAPPER_`$INSTANCE_NAME`_H

#ifdef __cplusplus
extern "C" {
#endif
#include "`$CONTENT`.h"
#ifdef __cplusplus
}
#endif
    
typedef struct {
  void    (*Start)(void);
  uint8_t (*ReadTxStatus)(void);
  uint8_t (*ReadRxStatus)(void);
  void    (*WriteTxData)(uint8_t);
  uint8_t (*ReadRxData)(void);
} `$CONTENT`_dev_t;

extern const `$CONTENT`_dev_t * const `$CONTENT`_pdev;

class `$INSTANCE_NAME` {
  public:
    const `$CONTENT`_dev_t * const dev;
    static const uint8_t STS_SPI_DONE           = 0x01;
    static const uint8_t STS_TX_FIFO_EMPTY      = 0x02;
    static const uint8_t STS_TX_FIFO_NOT_FULL   = 0x04;
    static const uint8_t STS_BYTE_COMPLETE      = 0x08;
    static const uint8_t STS_SPI_IDLE           = 0x10;
    static const uint8_t STS_RX_FIFO_FULL       = 0x10;
    static const uint8_t STS_RX_FIFO_NOT_EMPTY  = 0x20;
    static const uint8_t STS_RX_FIFO_OVERRUN    = 0x40;

    `$INSTANCE_NAME`() : dev(`$CONTENT`_pdev)
    {
      if(dev->Start) dev->Start();
    }

    inline void    write(uint8_t data) { dev->WriteTxData(data);   }
    inline uint8_t read(void)          { return dev->ReadRxData(); }
};


#endif /* (CY_SPIM_WRAPPER_`$INSTANCE_NAME`_H) */
    
/* [] END OF FILE */
