/* 
 * File:   main.c
 * Author: Verónica
 *
 * Created on 8 de octubre de 2014, 11:45
 */

#include "main.h"

char CaracterRx;
char MensajeTx[]="COMUNICACION SATISFACTORIA";

void x_delay_ms(int x) {
    int cont = x/10;
    while (cont > 0){
        __delay_ms(10);
        cont --;
    }
}

void main(void) {

    TRISC = 0b00000000; // portC : output

    CloseUSART(); //turn off usart if was previously on
    // --- configure USART
    unsigned char config = USART_TX_INT_OFF & USART_RX_INT_ON & USART_ASYNCH_MODE & USART_EIGHT_BIT & USART_CONT_RX&USART_BRGH_HIGH;
    unsigned int spbrg = 624; //At 48MHz of oscillator frequency & baud rate of 9600
    OpenUSART(config, spbrg); //API configures USART for desired parameters

    unsigned char baudconfig = BAUD_16_BIT_RATE&BAUD_AUTO_OFF;
    baudUSART(baudconfig);

    INTCONbits.PEIE=1; //interrupciones de perifericos
    INTCONbits.GIE=1;//interrupciones globales

    while(BusyUSART());
    putsUSART(MensajeTx);

    while (1) {
        LED_RED_Toggle();
        x_delay_ms(250);
        LED_GREEN_Toggle();

    }
}

void interrupt Interrupcion(){
    CaracterRx=ReadUSART();
    while(BusyUSART());
    putsUSART("\n\rEnviado: ");
    while(BusyUSART());
    WriteUSART(CaracterRx);
    PIR1bits.RCIF=0;
}



