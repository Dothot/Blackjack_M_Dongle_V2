/*******************************************************************************
*   Projektname:  		Project
*   Prozessor:    		NUC130VE
*   Funktion:     		NWT_Blinky
*   Erstellungsdatum: 	
*   Bearbeiter: 		
*   History:
*******************************************************************************/
#include "..\_Driver\BoardConfig.h"
#include "..\_Module\GLCD_NWT.h"
#include "..\_Module\M_DONGLE_NWT.h"

#include "stdlib.h"

#include "init.h"

int main (void)
{  
	//Variablen
	uint32_t ui32Karpfen;
	uint32_t ui32Random;
	uint32_t ui32Random2;
	uint32_t ui32Kartoffel;
	uint32_t ui32Esilo;
	int32_t i32hauau;
	//Grundeinstellungen
	DrvSystem_ClkInit();          	// Setup clk system
	DrvSystem_HClkSet(HCLK_PLL);	//48MHz PLL Clock
	Board_Init();   				// Initialisierung der Peripherie des M_Dongles
	GLCD_Init();					//Display initialisieren
	GLCD_BackgroundInit();
	
	//Variablem mit Startwerten initialisieren

	//Variablem mit Startwerten initialisieren
	//Weiter einmalige Anweisungen
	ui32Karpfen=0;
	ui32Kartoffel=0;
	GLCD_SetTextCursor(3,0);
	GLCD_PrintText(3,0,"Press Joystick down");
	
	//Endlosschleife
	while(1)
	{
//		if(GET_SW2()==1)
//			{
//				GLCD_SetTextCursor(3,7);
//				GLCD_PrintIntStellen(ui32Karpfen,2);
//			}
	
	
//	if(i32fumufumu == 1)
//	{
//		GLCD_BackgroundSetColor(0);
//		WAIT_mS(50);
//		GLCD_BackgroundSetColor(1);
//		WAIT_mS(50);
//		GLCD_BackgroundSetColor(2);
//		WAIT_mS(50);
//		GLCD_BackgroundSetColor(3);
//		WAIT_mS(50);
//		GLCD_BackgroundSetColor(4);
//		WAIT_mS(50);
//		GLCD_BackgroundSetColor(5);
//		WAIT_mS(50);
//		GLCD_BackgroundSetColor(6);
//		WAIT_mS(50);
//		GLCD_BackgroundSetColor(7);
//		WAIT_mS(50);
//	}		
	
		if (GET_JOYSTICK()==3)
		{
			GLCD_BackgroundSetColor(0);
			GLCD_SetTextCursor(3,0);
			GLCD_PrintText(3,0,"                                       ");
			while(GET_JOYSTICK()==3)
				
					
			
			{
				ui32Random=ui32Random+1;
				if(ui32Random>=15)
				{
					ui32Random=1;
				}
				if(ui32Random2>=15)
				{
					ui32Random2=1;
				}
			
			}
			
			GLCD_SetTextCursor(0,0);
			GLCD_PrintIntStellen(ui32Random,2);
			
			if(ui32Random>=11)
			{	
				ui32Random=11;
			}
			
		
//				GLCD_SetTextCursor(0,0);
//				GLCD_PrintIntStellen(ui32Random,2);
				ui32Kartoffel=ui32Kartoffel+ui32Random;
				GLCD_SetTextCursor(3,0);
				GLCD_PrintIntStellen(ui32Kartoffel,2);
			
				ui32Random2=rand()%11+1;
//				GLCD_SetTextCursor(0,7);
//				GLCD_PrintIntStellen(ui32Random2,2);
				ui32Karpfen=ui32Karpfen+ui32Random2;
//				GLCD_SetTextCursor(3,7);
//				GLCD_PrintIntStellen(ui32Karpfen,2);
		}
		
		if(GET_JOYSTICK()==1)
		{
			ui32Kartoffel=0;
			GLCD_SetTextCursor(3,0);
				GLCD_PrintIntStellen(ui32Kartoffel,2);
			
		}		
		if(ui32Kartoffel>21)
		{
			GLCD_BackgroundSetColor(4);
			GLCD_SetTextCursor(5,5);
			GLCD_PrintText(5,5,"You Lose");
			WAIT_mS(1000);
			ui32Kartoffel=0;
			GLCD_PrintText(5,5,"_________");
			GLCD_BackgroundSetColor(7);
			ui32Karpfen=0;
		
		}
		if(ui32Kartoffel==21)
		{
			GLCD_BackgroundSetColor(2);
			GLCD_SetTextCursor(5,5);
			GLCD_PrintText(5,5,"You Win");
			WAIT_mS(1000);
			ui32Kartoffel=0;
			GLCD_PrintText(5,5,"_________");
			GLCD_BackgroundSetColor(7);
			ui32Karpfen=0;
			
		}
		if(ui32Karpfen==21)
		{
			GLCD_BackgroundSetColor(4);
			GLCD_SetTextCursor(5,5);
			GLCD_PrintText(5,5,"You Lose");
			WAIT_mS(1000);
			ui32Kartoffel=0;
			GLCD_PrintText(5,5,"_________");
			GLCD_BackgroundSetColor(7);
			ui32Karpfen=0;
			
		}
		
      ui32Esilo=21-ui32Kartoffel;
//      GLCD_SetTextCursor(0,4);
//      GLCD_PrintIntStellen(ui32Esilo,2);
      i32hauau=21-ui32Karpfen;
			if(i32hauau<0)
				i32hauau=-1*i32hauau;
//	    GLCD_SetTextCursor(0,10);
//      GLCD_PrintIntStellen(ui32hauau,2);
		
			if(GET_SW2()==1)
			{
				if(ui32Esilo>i32hauau)
				{
					GLCD_BackgroundSetColor(4);
					GLCD_SetTextCursor(5,5);
					GLCD_PrintText(5,5,"You Lose");
					GLCD_SetTextCursor(3,7);
		    	GLCD_PrintIntStellen(ui32Karpfen,2);
					WAIT_mS(2000);
					ui32Kartoffel=0;
					GLCD_PrintText(5,5,"_________");
					GLCD_BackgroundSetColor(7);
					ui32Karpfen=0;
				
					GLCD_SetTextCursor(3,7);
		    	GLCD_PrintIntStellen(ui32Karpfen,2);
					GLCD_SetTextCursor(3,0);
					GLCD_PrintIntStellen(ui32Kartoffel,2);
				}
		
				if(ui32Esilo<i32hauau)
				{
					GLCD_BackgroundSetColor(2);
					GLCD_SetTextCursor(5,5);
					GLCD_PrintText(5,5,"You Win");
					GLCD_SetTextCursor(3,7);
		    	GLCD_PrintIntStellen(ui32Karpfen,2);	
					
					WAIT_mS(2000);
					ui32Kartoffel=0;
					GLCD_PrintText(5,5," ");
					GLCD_BackgroundSetColor(7);
					ui32Karpfen=0;
					GLCD_SetTextCursor(3,7);
		    	GLCD_PrintIntStellen(ui32Karpfen,2);
					GLCD_SetTextCursor(3,0);
					GLCD_PrintIntStellen(ui32Kartoffel,2);
				}
				if(ui32Esilo==i32hauau)
				{
					GLCD_BackgroundSetColor(3);
					GLCD_SetTextCursor(5,5);
					GLCD_PrintText(5,5,"Draw");
					GLCD_SetTextCursor(3,7);
		    	GLCD_PrintIntStellen(ui32Karpfen,2);	
					WAIT_mS(2000);
					ui32Kartoffel=0;
					GLCD_PrintText(5,5,"                                 ");
					GLCD_BackgroundSetColor(7);
					ui32Karpfen=0;
					GLCD_SetTextCursor(3,7);
		    	GLCD_PrintIntStellen(ui32Karpfen,2);
					GLCD_SetTextCursor(3,7);
		    	GLCD_PrintIntStellen(ui32Karpfen,2);
					GLCD_SetTextCursor(3,0);
					GLCD_PrintIntStellen(ui32Kartoffel,2);
			}
		}
//			if(GET_JOYSTICK()==2)
//			{
//				ui32Karpfen=0;
//			  ui32Kartoffel=0;
//			ui32Random2=0;
//			ui32Random=0;
//			}
	
}
}
	 