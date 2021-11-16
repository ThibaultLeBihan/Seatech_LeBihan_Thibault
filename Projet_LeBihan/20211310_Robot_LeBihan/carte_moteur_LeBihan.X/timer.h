/* 
 * File:   timer.h
 * Author: Table2
 *
 * Created on 13 octobre 2021, 16:20
 */

#ifndef TIMER_H
#define TIMER_H


extern unsigned long timestamp;

void InitTimer23 (void) ;
void InitTimer1 (void) ;
void InitTimer4(void);

/* DECLARATION*/
void _T3Interrupt(void);
void _T1Interrupt(void);
void _T4Interrupt(void);

void SetFreqTimer1(float);
void SetFreqTimer4(float);
#endif	/* TIMER_H */

