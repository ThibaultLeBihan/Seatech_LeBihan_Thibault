#include <xc.h> // library xc.h inclut tous les uC
#include "IO.h"
#include "PWM.h"
#include "Robot.h"
#include "ToolBox.h"
#include "main.h"
#define PWMPER 40.0


void InitPWM(void)
{
PTCON2bits.PCLKDIV = 0b000; //Divide by 1
PTPER = 100*PWMPER; //Période en pourcentage

//Réglage PWM moteur 1 sur hacheur 1
IOCON1bits.POLH = 1; //High = 1 and active on low =0
IOCON1bits.POLL = 1; //High = 1
IOCON1bits.PMOD = 0b01; //Set PWM Mode to Redundant
FCLCON1 = 0x0003; //Désactive la gestion des faults

//Reglage PWM moteur 2 sur hacheur 6
IOCON6bits.POLH = 1; //High = 1
IOCON6bits.POLL = 1; //High = 1
IOCON6bits.PMOD = 0b01; //Set PWM Mode to Redundant
FCLCON6 = 0x0003; //Désactive la gestion des faults

/* Enable PWM Module */
PTCONbits.PTEN = 1;
}




/*
void PWMSetSpeed(float vitesseEnPourcents,int numero_moteur)
{
    if (numero_moteur==0)
 {
        if (vitesseEnPourcents>0){
robotState.vitesseGaucheCommandeCourante = vitesseEnPourcents;
MOTEUR_GAUCHE_L_PWM_ENABLE = 1; //Pilotage de la pin en mode IO
MOTEUR_GAUCHE_H_IO_OUTPUT = 1; //Mise à 1 de la pin
MOTEUR_GAUCHE_H_PWM_ENABLE = 0; //Pilotage de la pin en mode PWM
MOTEUR_GAUCHE_DUTY_CYCLE = Abs(robotState.vitesseGaucheCommandeCourante*PWMPER);
    }
    if (vitesseEnPourcents<0){
MOTEUR_GAUCHE_L_PWM_ENABLE = 0; //Pilotage de la pin en mode IO
MOTEUR_GAUCHE_L_IO_OUTPUT = 1; //Mise à 1 de la pin
MOTEUR_GAUCHE_H_PWM_ENABLE = 1; //Pilotage de la pin en mode PWM
MOTEUR_GAUCHE_DUTY_CYCLE = Abs(robotState.vitesseGaucheCommandeCourante*PWMPER);}
    }

    if (numero_moteur==1){
        if(vitesseEnPourcents>0){
MOTEUR_DROIT_L_PWM_ENABLE = 1; //Pilotage de la pin en mode IO
MOTEUR_DROIT_H_IO_OUTPUT = 1; //Mise à 1 de la pin
MOTEUR_DROIT_H_PWM_ENABLE = 0; //Pilotage de la pin en mode PWM
MOTEUR_DROIT_DUTY_CYCLE = Abs(robotState.vitesseDroiteCommandeCourante*PWMPER);}

    if(vitesseEnPourcents<0){
MOTEUR_DROIT_L_PWM_ENABLE = 0; //Pilotage de la pin en mode IO
MOTEUR_DROIT_L_IO_OUTPUT = 1; //Mise à 1 de la pin
MOTEUR_DROIT_H_PWM_ENABLE = 1; //Pilotage de la pin en mode PWM
MOTEUR_DROIT_DUTY_CYCLE = Abs(robotState.vitesseDroiteCommandeCourante*PWMPER);
    }

}
 

}
   */
void PWMSetSpeedConsigne(float vitesseEnPourcents, char numero_moteur){
IFS0bits.T1IF = 0;
if (numero_moteur==MOTEUR_DROIT)
{
robotState.vitesseDroiteConsigne=vitesseEnPourcents;
}

if (numero_moteur==MOTEUR_GAUCHE)
{
robotState.vitesseGaucheConsigne=vitesseEnPourcents; 
}
}
