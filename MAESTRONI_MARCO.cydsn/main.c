/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "InterruptRoutines.h"
#include "RGBLedDriver.h"
#include "colors.h"
#include "project.h"


int state=1;
int newstate=1;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    isr_Button_StartEx(ChangeState);
    
    for(;;)
    { 
        if(newstate==1)
        {
            state=1;
            RGBLed_Start();
            RGBLed_WriteColor(YELLOW_COLOR);
        }
        
        if(newstate==2)
        {
            state=2;
            RGBLed_Start();
            RGBLed_WriteColor(YELLOW_COLOR);
            CyDelay(1000);
            RGBLed_WriteColor(RED_COLOR);
            CyDelay(1000);
        }
        
        if(newstate==3)
        {
            state=3;
            RGBLed_Start();
            RGBLed_WriteColor(GREEN_COLOR);
            CyDelay(1000);
            RGBLed_WriteColor(YELLOW_COLOR);
            CyDelay(1000);
        }
        
        if(newstate==4)
        {
            state=4;
            RGBLed_Start();
            RGBLed_WriteColor(RED_COLOR);
            CyDelay(500);
            RGBLed_WriteColor(GREEN_COLOR);
            CyDelay(500);
        }
        
        if(newstate==5)
        {
            state=5;
            RGBLed_Start();
            RGBLed_WriteColor(GREEN_COLOR);
            CyDelay(250);
            RGBLed_WriteColor(RED_COLOR);
            CyDelay(250);
        }
        
        if(newstate==6)
        {
            state=6;
            RGBLed_Start();
            RGBLed_WriteColor(YELLOW_COLOR);
            CyDelay(1000);
            RGBLed_WriteColor(RED_COLOR);
            CyDelay(500);
            RGBLed_WriteColor(NO_COLOR);
            CyDelay(500);
        }
        
        if(newstate==7)
        {
            state=7;
            RGBLed_Start();
            RGBLed_WriteColor(GREEN_COLOR);
            CyDelay(500);
            RGBLed_WriteColor(NO_COLOR);
            CyDelay(500);
            RGBLed_WriteColor(YELLOW_COLOR);
            CyDelay(500);
            RGBLed_WriteColor(RED_COLOR);
            CyDelay(500);
        }
    }
}

/* [] END OF FILE */
