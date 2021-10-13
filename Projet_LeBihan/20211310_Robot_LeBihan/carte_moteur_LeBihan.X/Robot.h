/* 
 * File:   Robot.h
 * Author: Table2
 *
 * Created on 13 octobre 2021, 17:12
 */

#ifndef ROBOT_H
#define ROBOT_H
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


