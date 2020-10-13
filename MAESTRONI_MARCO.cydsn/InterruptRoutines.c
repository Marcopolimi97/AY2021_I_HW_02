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

/* Ogni qualvolta entro nella interrrupt devo incrementare il numero del nuovo state.
 * Ho scelto la seguente configurazione dell'interrupt con numerosi if, poichè il semplice
 * incremento fatto tramite la seguente linea di codice:
 *       state=state +1;
 * mi dava dei problemi.
 *
 * L'uso di un'altra variabile globale newstate è stata quindi necessaria per evitare di non
 * dover entrare ciclicamente negli if successivi.
*/
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
    // se sono allo state 7, torno allo state 1
    if(state==7)
    {
        newstate=1;
    }
}


/* [] END OF FILE */
