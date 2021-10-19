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

_T3Interrupt();
/*_T1Interrupt();
PWMSetSpeed(50,MOTEUR_DROIT);*/

/****************************************************************************************************/
// Boucle Principale
/****************************************************************************************************/
while(1){

} // fin main



}

