#include <Arduino.h>

#ifndef _ID_H
#define _ID_H

#define STOP_ROBOT_FIN_MATCH 0x001
#define START_ROBOT_MATCH 0x003

#define ROTATION 0x020
#define LIGNE_DROITE 0x021
#define RECALAGE 0x022
#define IMMOBILE 0x023
#define XYTHETA 0x024

#define ESP32_RESTART 0x025

#define POLAIRE 0x026
#define ODO_SEND 0x027

#define COEFF_P_ASSERVISSEMENT_POSITION 0x028
#define COEFF_D_ASSERVISSEMENT_POSITION 0x029
#define COEFF_I_ASSERVISSEMENT_POSITION 0x030
#define COEFF_P_ASSERVISSEMENT_VITESSE 0x031
#define COEFF_D_ASSERVISSEMENT_VITESSE 0x032
#define COEFF_I_ASSERVISSEMENT_VITESSE 0x033
#define ACKNOWLEDGE_BASE_ROULANTE 0x034

#define LIDAR 0x040
#define CARTE_MAITRE 0x041

#define ARU 0x003
#define COURT_CIRCUITBATT1 0x005
#define COURT_CIRCUITBATT2 0x006 
#define COURT_CIRCUITBATT3 0x007
#define BATT_MAIN 0x100
#define BATT_1 0x101
#define BATT_2 0x102
#define BATT_3 0x103
#define CELLULE_BAT 0x104
#define INTERRUPTEUR_BATT1 0x105
#define INTERRUPTEUR_BATT2 0x106
#define INTERRUPTEUR_BATT3 0x107
#define BOOT_CARTE_PUISSANCE 0x108

#define BRAS_HERKULEX_DEVANT 0x516
#define HERKULEX_ASCENSEUR_AVANT 0x518
#define BRAS_HERKULEX_ARRIERE 0x517
#define HERKULEX_ASCENSEUR_ARRIERE 0x519

#define PAMI_ONE 0x5B0
#define PAMI_TWO 0x5B1
#define PAMI_THREE 0x5B2
#define PAMI_FOUR 0x5B3
#define PAMI_FIVE 0x5B4


#endif
