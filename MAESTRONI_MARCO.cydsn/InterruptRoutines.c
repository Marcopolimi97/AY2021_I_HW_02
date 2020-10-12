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

CY_ISR(ChangeState)
{
    if(state==1)
    {
        newstate=2;
    }
    if(state==2)
    {
        newstate=3;
    }
    if(state==3)
    {
        newstate=4;
    }
    if(state==4)
    {
        newstate=5;
    }
    if(state==5)
    {
        newstate=6;
    }
    if(state==6)
    {
        newstate=7;
    }
    if(state==7)
    {
        newstate=1;
    }
}


/* [] END OF FILE */
