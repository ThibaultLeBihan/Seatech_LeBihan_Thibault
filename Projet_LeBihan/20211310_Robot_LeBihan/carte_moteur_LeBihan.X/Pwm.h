/* 
 * File:   Pwm.h
 * Author: Table2
 *
 * Created on 13 octobre 2021, 17:35
 */

#ifndef PWM_H
#define	PWM_H
#define PWMPER 40.0
#include <xc.h>

//D�finitions des pins pour les hacheurs moteurs
#define MOTEUR1_IN1 _LATB14
#define MOTEUR1_IN2 _LATB15
#define MOTEUR6_IN1 _LATC6
#define MOTEUR6_IN2 _LATC7

//Configuration sp�cifique du moteur gauche
#define MOTEUR_GAUCHE_H_IO_OUTPUT MOTEUR1_IN1
#define MOTEUR_GAUCHE_L_IO_OUTPUT MOTEUR1_IN2
#define MOTEUR_GAUCHE_L_PWM_ENABLE IOCON1bits.PENL
#define MOTEUR_GAUCHE_H_PWM_ENABLE IOCON1bits.PENH
#define MOTEUR_GAUCHE_DUTY_CYCLE PDC1 

//Configuration sp�cifique du moteur droit
#define MOTEUR_DROIT_H_IO_OUTPUT MOTEUR6_IN1
#define MOTEUR_DROIT_L_IO_OUTPUT MOTEUR6_IN2
#define MOTEUR_DROIT_L_PWM_ENABLE IOCON6bits.PENL
#define MOTEUR_DROIT_H_PWM_ENABLE IOCON6bits.PENH
#define MOTEUR_DROIT_DUTY_CYCLE PDC6

#define MOTEUR_DROIT 1
#define MOTEUR_GAUCHE 0

void InitPWM(void);
void PWMSetSpeedConsigne(float, char);
void PWMUpdateSpeed(void);

#endif	/* PWM_H */

