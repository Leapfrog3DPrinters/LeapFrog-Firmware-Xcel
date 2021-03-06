#ifndef PT100TABLES_H_
#define PT100TABLES_H_

#include "Marlin.h"

#if (defined(HEATER_0_USES_DETECTION) || defined(HEATER_1_USES_DETECTION))
// PT-100 temperature sensor.
// PT-100 is positive temperature coefficient: no inversion applied to the raw measured ADC value
// Measured ADC result is 10 bits, put into an unsigned 16 bit integer (rght adjusted).
// 0V corresponds to 0, 5V corresponds to 1023
// TODO provide documentation and link
const short temptable_pt100[][2] PROGMEM = { 
{ OVERSAMPLENR * 400, 0 },
{ OVERSAMPLENR * 407, 5 },
{ OVERSAMPLENR * 415, 10 },
{ OVERSAMPLENR * 423, 15 },
{ OVERSAMPLENR * 430, 20 },
{ OVERSAMPLENR * 438, 25 },
{ OVERSAMPLENR * 445, 30 },
{ OVERSAMPLENR * 453, 35 },
{ OVERSAMPLENR * 460, 40 },
{ OVERSAMPLENR * 468, 45 },
{ OVERSAMPLENR * 475, 50 },
{ OVERSAMPLENR * 483, 55 },
{ OVERSAMPLENR * 490, 60 },
{ OVERSAMPLENR * 498, 65 },
{ OVERSAMPLENR * 505, 70 },
{ OVERSAMPLENR * 512, 75 },
{ OVERSAMPLENR * 520, 80 },
{ OVERSAMPLENR * 527, 85 },
{ OVERSAMPLENR * 534, 90 },
{ OVERSAMPLENR * 542, 95 },
{ OVERSAMPLENR * 549, 100 },
{ OVERSAMPLENR * 556, 105 },
{ OVERSAMPLENR * 564, 110 },
{ OVERSAMPLENR * 571, 115 },
{ OVERSAMPLENR * 578, 120 },
{ OVERSAMPLENR * 585, 125 },
{ OVERSAMPLENR * 593, 130 },
{ OVERSAMPLENR * 600, 135 },
{ OVERSAMPLENR * 607, 140 },
{ OVERSAMPLENR * 614, 145 },
{ OVERSAMPLENR * 621, 150 },
{ OVERSAMPLENR * 628, 155 },
{ OVERSAMPLENR * 635, 160 },
{ OVERSAMPLENR * 643, 165 },
{ OVERSAMPLENR * 650, 170 },
{ OVERSAMPLENR * 657, 175 },
{ OVERSAMPLENR * 664, 180 },
{ OVERSAMPLENR * 671, 185 },
{ OVERSAMPLENR * 678, 190 },
{ OVERSAMPLENR * 685, 195 },
{ OVERSAMPLENR * 692, 200 },
{ OVERSAMPLENR * 699, 205 },
{ OVERSAMPLENR * 706, 210 },
{ OVERSAMPLENR * 713, 215 },
{ OVERSAMPLENR * 720, 220 },
{ OVERSAMPLENR * 726, 225 },
{ OVERSAMPLENR * 733, 230 },
{ OVERSAMPLENR * 740, 235 },
{ OVERSAMPLENR * 747, 240 },
{ OVERSAMPLENR * 754, 245 },
{ OVERSAMPLENR * 761, 250 },
{ OVERSAMPLENR * 767, 255 },
{ OVERSAMPLENR * 774, 260 },
{ OVERSAMPLENR * 781, 265 },
{ OVERSAMPLENR * 788, 270 },
{ OVERSAMPLENR * 794, 275 },
{ OVERSAMPLENR * 801, 280 },
{ OVERSAMPLENR * 808, 285 },
{ OVERSAMPLENR * 815, 290 },
{ OVERSAMPLENR * 821, 295 },
{ OVERSAMPLENR * 828, 300 },
{ OVERSAMPLENR * 835, 305 },
{ OVERSAMPLENR * 841, 310 },
{ OVERSAMPLENR * 848, 315 },
{ OVERSAMPLENR * 854, 320 },
{ OVERSAMPLENR * 861, 325 },
{ OVERSAMPLENR * 868, 330 },
{ OVERSAMPLENR * 874, 335 },
{ OVERSAMPLENR * 881, 340 },
{ OVERSAMPLENR * 887, 345 },
{ OVERSAMPLENR * 894, 350 },
{ OVERSAMPLENR * 900, 355 },
{ OVERSAMPLENR * 907, 360 },
{ OVERSAMPLENR * 913, 365 },
{ OVERSAMPLENR * 920, 370 },
{ OVERSAMPLENR * 926, 375 },
{ OVERSAMPLENR * 932, 380 },
{ OVERSAMPLENR * 939, 385 },
{ OVERSAMPLENR * 945, 390 },
{ OVERSAMPLENR * 951, 395 },
{ OVERSAMPLENR * 958, 400 }

};
#define temptable_pt100_len (sizeof(temptable_pt100) / sizeof(temptable_pt100[0]))
#endif

#endif /* PT100TABLES_H_ */
