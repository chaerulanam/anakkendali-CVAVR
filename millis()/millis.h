#ifndef _MILLIS_INCLUDED_
#define _MILLIS_INCLUDED_

#define clockCyclesToMicroseconds(a) ( ((a) * 1000L) / (_MCU_CLOCK_FREQUENCY_ / 1000L) )
#define MICROSECONDS_PER_TIMER0_OVERFLOW (clockCyclesToMicroseconds(64 * 256))
#define MILLIS_INC (MICROSECONDS_PER_TIMER0_OVERFLOW / 1000)
#define FRACT_INC ((MICROSECONDS_PER_TIMER0_OVERFLOW % 1000) >> 3)
#define FRACT_MAX (1000 >> 3)

#pragma used+

 void millis_begin();
 unsigned long int millis();

#pragma used-

#pragma library lcd_i2c_cvavr.lib

#endif
