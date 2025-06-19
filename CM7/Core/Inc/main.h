#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32h7xx_hal.h"

void Error_Handler(void);

// LED 1
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
