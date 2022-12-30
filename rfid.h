/*
=============================================================================================================
Author       : Mamoun
Module       : RDM6300 RFID
File Name    : rfid.h
Date Created : Dec 21, 2022
Description  : Header file for the RDM6300 RFID Reader driver.
=============================================================================================================
*/


#ifndef RFID_H_
#define RFID_H_

/*===========================================================================================================
                                               < Includes >
===========================================================================================================*/

#include "std_types.h"

/*===========================================================================================================
                                < Definitions and Static Configurations >
===========================================================================================================*/

#define RFID_FRAME_LENGTH                (14)
#define RFID_ID_LENGTH                   (8)

/*===========================================================================================================
                                         < Functions Prototypes >
===========================================================================================================*/


/*===========================================================================================================
 * [Function Name] : RFID_init
 * [Description]   : Initialize the RFID module by initializing the UART with specific configurations.
 * [Arguments]     : The function takes no arguments.
 * [return]        : The function returns void.
 ==========================================================================================================*/
void RFID_init(void);


/*===========================================================================================================
 * [Function Name] : RFID_readCard
 * [Description]   : Read the card/tag ID using UART.
 * [Arguments]     : The function takes no arguments.
 * [return]        : The function returns the card/tag ID.
 ==========================================================================================================*/
sint32 RFID_readCard(void);

#endif /* RFID_H_ */