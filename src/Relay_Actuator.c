#include "Relay_Actuator.h"


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void Relay_Actuator__Command__Close_Circuit( const Relay_Actuator* Me )
{
    if( Me->Relay_Configuration == MONOSTABLE_RELAY_NORMALLY_CLOSED )
    {
        Me->Pin->Set_Level(IO_LEVEL_LOW);
    }
    else if ( Me->Relay_Configuration == MONOSTABLE_RELAY_NORMALLY_OPEN )
    {
        Me->Pin->Set_Level(IO_LEVEL_HIGH);
    }
}
/*----------------------------------------------------------------------------*/
void Relay_Actuator__Command__Open_Circuit( const Relay_Actuator* Me )
{
    if( Me->Relay_Configuration == MONOSTABLE_RELAY_NORMALLY_CLOSED )
    {
        Me->Pin->Set_Level(IO_LEVEL_HIGH);
    }
    else if ( Me->Relay_Configuration == MONOSTABLE_RELAY_NORMALLY_OPEN )
    {
        Me->Pin->Set_Level(IO_LEVEL_LOW);
    }
}