#ifndef _BSP_H_
#define _BSP_H_

#include "HAL_conf.h"
#include "spi.h"

#if defined(MS1793_EVBOARD)
  #define SPI_BLE           SPI1
  #define IRQ_BLE_PIN       GPIO_Pin_12
  #define IRQ_BLE_PORT      GPIOA
  #define IRQ_EXTIPORT      GPIO_PortSourceGPIOA
  #define IRQ_EXTISOURCE    GPIO_PinSource12
  #define IRQ_EXTI          EXTI_Line12
  #define IRQ_EXTNUMBER     EXTI4_15_IRQn
  #define IRQ_HANDLER       EXTI4_15_IRQHandler
  #define CSN_BLE_PIN       GPIO_Pin_8
  #define CSN_BLE_PORT      GPIOB
#elif defined(MS1791_EVBOARD)
  #define SPI_BLE           SPI2
  #define IRQ_BLE_PIN       GPIO_Pin_2
  #define IRQ_BLE_PORT      GPIOD
  #define IRQ_EXTIPORT      GPIO_PortSourceGPIOD
  #define IRQ_EXTISOURCE    GPIO_PinSource2
  #define IRQ_EXTI          EXTI_Line2
  #define IRQ_EXTNUMBER     EXTI2_3_IRQn
  #define IRQ_HANDLER       EXTI2_3_IRQHandler
  #define CSN_BLE_PIN       GPIO_Pin_15
  #define CSN_BLE_PORT      GPIOB
#else //default 
  #define SPI_BLE           SPI1
  #define IRQ_BLE_PIN       GPIO_Pin_12
  #define IRQ_BLE_PORT      GPIOA
  #define IRQ_EXTIPORT      GPIO_PortSourceGPIOA
  #define IRQ_EXTISOURCE    GPIO_PinSource12
  #define IRQ_EXTI          EXTI_Line12
  #define IRQ_EXTNUMBER     EXTI4_15_IRQn
  #define IRQ_HANDLER       EXTI4_15_IRQHandler
  #define CSN_BLE_PIN       GPIO_Pin_8
  #define CSN_BLE_PORT      GPIOB
#endif

//#define SPI_CS_Enable	SPI1->SCSR &= SPI_CS_BIT0
//#define SPI_CS_Disable	SPI1->SCSR |= ~SPI_CS_BIT0

void BSP_Init(void);
void SysClk8to48(void);
void SysClk48to8(void);

unsigned int GetSysTickCount(void);
void IrqMcuGotoSleepAndWakeup(void);

void LED_ONOFF(unsigned char OnOff);//for ui use


#endif
