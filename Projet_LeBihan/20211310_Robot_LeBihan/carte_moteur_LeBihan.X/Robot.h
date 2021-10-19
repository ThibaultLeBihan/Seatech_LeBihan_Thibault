/* 
 * File:   Robot.h
 * Author: Table2
 *
 * Created on 13 octobre 2021, 17:12
 */

#ifndef ROBOT_H
#define ROBOT_H
#define PWMPER 40.0
//Configuration spécifique du moteur gauche
#define MOTEUR_GAUCHE_H_IO_OUTPUT MOTEUR1_IN1
#define MOTEUR_GAUCHE_L_IO_OUTPUT MOTEUR1_IN2
#define MOTEUR_GAUCHE_L_PWM_ENABLE IOCON1bits.PENL
#define MOTEUR_GAUCHE_H_PWM_ENABLE IOCON1bits.PENH
#define MOTEUR_GAUCHE_DUTY_CYCLE PDC1

//Configuration spécifique du moteur droit
#define MOTEUR_DROIT_H_IO_OUTPUT MOTEUR2_IN1
#define MOTEUR_DROIT_L_IO_OUTPUT MOTEUR2_IN2
#define MOTEUR_DROIT_L_PWM_ENABLE IOCON6bits.PENL
#define MOTEUR_DROIT_H_PWM_ENABLE IOCON6bits.PENH
#define MOTEUR_DROIT_DUTY_CYCLE PDC2

typedef struct robotStateBITS {
union {

struct {
unsigned char taskEnCours;
float vitesseGaucheConsigne;
float vitesseGaucheCommandeCourante;
float vitesseDroiteConsigne;
float vitesseDroiteCommandeCourante;}
;}
;} ROBOT_STATE_BITS;

extern volatile ROBOT_STATE_BITS robotState;
#endif /* ROBOT_H */



//Définitions pour la rampe
void PWMUpdateSpeed(void);
