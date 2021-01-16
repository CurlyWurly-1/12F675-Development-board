// N.B. Credit to Earl 
// From https://microcontrollerelectronics.com/pulse-width-modulation/
//                      _________   __________
//                     |         \_/          |
//                   __|      _               |__
//                  |  | Vdd (_)          Vss |  |
//        Vdd`  +5V |1 |                      | 8|         VSS
//                  |__|                      |__|
//                     |                      |
//                   __|                      |__
//                  |  |              ICSPDAT |  |
// GP5 / T1CKI      |2 |                      | 7| GP0 / AN0 / CIN+
//   CLKIN          |__|                      |__| ICSPDAT / ULPWU
//                     |                      |
//                   __|                      |__
//                  |  |              ICSPCLK |  |
// T1G / AN3 / GP4  |3 |                      | 6| GP1 / AN1 / CIN- /Vref
//  OSC2 / CLKOUT   |__|                      |__| ICSPCLK
//                     |                      |
//                   __| ____                 |__
//                  |  | MCLR/Vpp             |  |
// GP3 / MCLR / VPP |4 |                      | 5| GP2 / AN2 / T0CKI / INT
//                  |__|   PIC12F675 or       |__| COUT / CCP1
//                     |  PIC12F629 no Analog |
//                     |______________________|
//
 
/*
 
       PIC TIMER0 Calculator
 
Clock Source in Mhz                   4 Mhz
Fosc                                  4000000.0 Hz
Fosc / 4                              1000000.0 Hz
Time Period                           1e-06 sec
Prescaler                             32
Timer0 Interrupt Period               0.008192 sec
Period of Frequency Input To Timer0   3.2e-05 sec
Period of Time for each Timer0 Count  0.008192 sec
                
*/
 
//  xc8 --chip=12F675 main.c
//  xc8 --chip=12F629 main.c
 
// CONFIG
#pragma config FOSC  = INTRCIO  // Oscillator Selection bits
                                // (INTOSC oscillator: I/O function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN)
#pragma config WDTE  = OFF      // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-Up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF      // GP3/MCLR pin function select
                                // (GP3/MCLR pin function is digital I/O, MCLR internally tied to VDD)
#pragma config BOREN = OFF      // Brown-out Detect Enable bit (BOD disabled)
#pragma config CP    = OFF      // Code Protection bit (Program Memory code protection is disabled)
#pragma config CPD   = OFF      // Data Code Protection bit (Data memory code protection is disabled)
 
#include <xc.h>
 
#define _XTAL_FREQ 4000000
#define usdelay  1
int PWM = 254;
 
void __interrupt() isr(void) {
  if (T0IF == 1) { 
    if (GP4) TMR0 = (unsigned int)PWM;
    else     TMR0 = 255 - (unsigned int)PWM;
      __asm("movlw 0b01110111");         // mask
      __asm("xorwf GPIO,f");              // toggle GPIO
      __asm("bcf   INTCON,2");            // clear T0IF
//  T0IF = 0;
  }
} 
 
void main(void) {
  OSCCAL     = __osccal_val(); // Load Oscillator Calibration
  VRCON      = 0x00;           // Disable voltage reference
  CMCON      = 0b00000111;     // Disable comparator
  ANSEL      = 0x00;           // A/D disabled
  GPIO       = 0;              // Clear GPIO
  TRISIO     = 0b00001000;     // Set all GPIO (except GPIO3 as outputs
  WPU        = 0;              // Disable all weak pull up
  INTCON     = 0b10100000;     // Global Interrupt Enabled and TMR0 Overflow Interrupt Enabled
  TMR0       = 0         ;     // Preload timer register
  OPTION_REG = 0b00000100;     // Start Timer0 and set Prescaler to 1:32
 
  int d = 1;
  while (1) {
    PWM += d;
    if(PWM == 255) d = -1;
    __delay_ms(usdelay);
    if(PWM ==   0) {
      __delay_ms(1000);
        d = 1;
    };
    }
}