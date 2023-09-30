/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#define LED_Pin GPIO_PIN_2
#define LED_GPIO_Port GPIOA
#define DOT_Pin GPIO_PIN_3
#define DOT_GPIO_Port GPIOA
#define EN_0_Pin GPIO_PIN_4
#define EN_0_GPIO_Port GPIOA
#define EN_1_Pin GPIO_PIN_5
#define EN_1_GPIO_Port GPIOA
#define EN_2_Pin GPIO_PIN_6
#define EN_2_GPIO_Port GPIOA
#define EN_3_Pin GPIO_PIN_7
#define EN_3_GPIO_Port GPIOA
#define ENM_0_Pin GPIO_PIN_0
#define ENM_0_GPIO_Port GPIOB
#define ENM_1_Pin GPIO_PIN_1
#define ENM_1_GPIO_Port GPIOB
#define ENM_2_Pin GPIO_PIN_2
#define ENM_2_GPIO_Port GPIOB
#define ROW_2_Pin GPIO_PIN_10
#define ROW_2_GPIO_Port GPIOB
#define ROW_3_Pin GPIO_PIN_11
#define ROW_3_GPIO_Port GPIOB
#define ROW_4_Pin GPIO_PIN_12
#define ROW_4_GPIO_Port GPIOB
#define ROW_5_Pin GPIO_PIN_13
#define ROW_5_GPIO_Port GPIOB
#define ROW_6_Pin GPIO_PIN_14
#define ROW_6_GPIO_Port GPIOB
#define ROW_7_Pin GPIO_PIN_15
#define ROW_7_GPIO_Port GPIOB
#define SEG_A_Pin GPIO_PIN_8
#define SEG_A_GPIO_Port GPIOA
#define SEG_B_Pin GPIO_PIN_9
#define SEG_B_GPIO_Port GPIOA
#define SEG_C_Pin GPIO_PIN_10
#define SEG_C_GPIO_Port GPIOA
#define SEG_D_Pin GPIO_PIN_11
#define SEG_D_GPIO_Port GPIOA
#define SEG_E_Pin GPIO_PIN_12
#define SEG_E_GPIO_Port GPIOA
#define SEG_F_Pin GPIO_PIN_13
#define SEG_F_GPIO_Port GPIOA
#define SEG_G_Pin GPIO_PIN_14
#define SEG_G_GPIO_Port GPIOA
#define SEG_DP_Pin GPIO_PIN_15
#define SEG_DP_GPIO_Port GPIOA
#define ENM_3_Pin GPIO_PIN_3
#define ENM_3_GPIO_Port GPIOB
#define ENM_4_Pin GPIO_PIN_4
#define ENM_4_GPIO_Port GPIOB
#define ENM_5_Pin GPIO_PIN_5
#define ENM_5_GPIO_Port GPIOB
#define ENM_6_Pin GPIO_PIN_6
#define ENM_6_GPIO_Port GPIOB
#define ENM_7_Pin GPIO_PIN_7
#define ENM_7_GPIO_Port GPIOB
#define ROW_0_Pin GPIO_PIN_8
#define ROW_0_GPIO_Port GPIOB
#define ROW_1_Pin GPIO_PIN_9
#define ROW_1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
