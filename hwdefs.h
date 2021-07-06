#ifndef HWDEFS_H_INCLUDED
#define HWDEFS_H_INCLUDED

#define RCC_CLOCK_SETUP() rcc_clock_setup_pll(&rcc_hse_8mhz_3v3[RCC_CLOCK_3V3_168MHZ])

#define USART_RCC      RCC_USART2
#define USART          USART2
#define USART_PINS     GPIO2 | GPIO3
#define USART_PORT     GPIOA
#define USART_DMA_CHAN DMA_STREAM5
#define USART_BAUDRATE 115200

#endif // HWDEFS_H_INCLUDED
