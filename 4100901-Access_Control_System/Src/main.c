#include "gpio.h"
#include "uart.h"
#include "systick.h"

int main(void) {
    configure_systick_and_start();
    configure_gpio();
    usart2_init();

    usart2_send_string("System Initialized\r\n");

    // [...Bucle principal del programa]
}
