#include <stdint.h>

uint8_t status = 0x00;

#define FLAG_BTN1       0x00
#define FLAG_BTN2       0x01
#define FLAG_BTN3       0x02
#define FLAG_BTN4       0x03
#define FLAG_LED1       0x04
#define FLAG_LED2       0x05
#define FLAG_LED3       0x06
#define FLAG_BAT        0x07

//LED 01
#define SET_FLAG_LED1()   (status |= (1 << FLAG_LED1))
#define CLR_FLAG_LED1()   (status &= ~(1 << FLAG_LED1))
#define CHK_FLAG_LED1()   (status & FLAG_LED1)



#define SET_FLAG_TEST


int main(){

    while(1){

    }
    return 0;

    return 0;
}

