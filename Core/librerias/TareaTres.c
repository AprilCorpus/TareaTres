#include "TareaTres.h"

uint16_t tiempo = 0;

void detener()
{
    HAL_GPIO_WritePin(GPIOA, NUMBER1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER6_Pin, GPIO_PIN_SET);
}

void arriba(uint16_t tiempo)
{
    HAL_GPIO_WritePin(GPIOA, NUMBER1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, NUMBER4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, NUMBER6_Pin, GPIO_PIN_SET);
    HAL_Delay(tiempo);
}

void abajo(uint16_t tiempo)
{
    HAL_GPIO_WritePin(GPIOA, NUMBER1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, NUMBER3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER6_Pin, GPIO_PIN_RESET);
    HAL_Delay(tiempo);
}

void giro_derecha(uint16_t tiempo)
{
    HAL_GPIO_WritePin(GPIOA, NUMBER1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, NUMBER4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER6_Pin, GPIO_PIN_RESET);
    HAL_Delay(tiempo);
}

void giro_izquierda(uint16_t tiempo)
{
    HAL_GPIO_WritePin(GPIOA, NUMBER1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, NUMBER3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, NUMBER5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, NUMBER6_Pin, GPIO_PIN_SET);
    HAL_Delay(tiempo);
}