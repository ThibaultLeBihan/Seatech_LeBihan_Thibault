/* 
 * File:   main.c
 * Author: Table2
 *
 * Created on 13 octobre 2021, 14:56
 */
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"
#include "timer.h"
#include "PWM.h"
#include "ADC.h"

int result;
int ADCValue0;
int ADCValue1;
int ADCValue2;

int main (void){
/***************************************************************************************************/
//Initialisation de l?oscillateur
/****************************************************************************************************/
InitOscillator();

/****************************************************************************************************/
// Configuration des entrées sorties
/****************************************************************************************************/
InitIO();

LED_BLANCHE = 1;
LED_BLEUE = 1;
LED_ORANGE = 1;
InitTimer1();
InitTimer23();
InitPWM();
InitADC1();


/****************************************************************************************************/
// Boucle Principale
/****************************************************************************************************/
while(1){
ADCIsConversionFinished();
if (ADCIsConversionFinished()==1){
    ADCClearConversionFinishedFlag();
    unsigned int * result = ADCGetResult();
    ADCValue0 = result[0];
    ADCValue1 = result[1];
    ADCValue2 = result[2];
}

} // fin main



}

