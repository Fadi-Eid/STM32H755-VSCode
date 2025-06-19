#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32h7xx_hal.h"

void Error_Handler(void);

// LED 2
#define LD2_Pin GPIO_PIN_1
#define LD2_GPIO_Port GPIOE

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
