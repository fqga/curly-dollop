/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RED_LED_Pin GPIO_PIN_13
#define RED_LED_GPIO_Port GPIOC
#define VCCD_Pin GPIO_PIN_0
#define VCCD_GPIO_Port GPIOA
#define EN_TX_Pin GPIO_PIN_1
#define EN_TX_GPIO_Port GPIOB
#define RXD_Pin GPIO_PIN_2
#define RXD_GPIO_Port GPIOB
#define DIO0_Pin GPIO_PIN_14
#define DIO0_GPIO_Port GPIOB
#define DIO0_EXTI_IRQn EXTI15_10_IRQn
#define pin_7_dio2_Pin GPIO_PIN_8
#define pin_7_dio2_GPIO_Port GPIOA
#define En_485_Pin GPIO_PIN_11
#define En_485_GPIO_Port GPIOA
#define pin_8_dio3_Pin GPIO_PIN_12
#define pin_8_dio3_GPIO_Port GPIOA
#define LoRa_Reset_Pin GPIO_PIN_6
#define LoRa_Reset_GPIO_Port GPIOB
#define NSS_Pin GPIO_PIN_7
#define NSS_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
