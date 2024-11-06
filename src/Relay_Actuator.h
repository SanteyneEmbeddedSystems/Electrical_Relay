#ifndef RELAY_ACTUATOR_H
#define RELAY_ACTUATOR_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
/* Configuration_Parameter */
#include "E_Relay_Configuration.h"

/* Realized interfaces */
#include "Relay_Actuation_Requests.h"

/* Required interfaces */
#include "Discrete_Output.h"


/*============================================================================*/
/* Component_Type */
/*============================================================================*/
typedef struct {

    /* Required interfaces */
    const Discrete_Output* Pin;
    
    /* Configuration_Parameter */
    const E_Relay_Configuration Relay_Configuration;

} Relay_Actuator;


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void Relay_Actuator__Command__Close_Circuit( const Relay_Actuator* Me );
void Relay_Actuator__Command__Open_Circuit( const Relay_Actuator* Me );

#endif