#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "propietario.h"

void HardcodePersona(ePropietario lista_propietario[])
{
    int i;
    int id[]= {1,2,3,4};
    char nombre[][20]= {"Juan","Luis","Maria","Jose"};
    char tarjeta[][20]= {"111-111","222-222","333-333","444-444"};
    char direccion[][20]= {"mitre","urquiza","belgrano","alsina"};

    for(i=0;i<4;i++)
    {
      lista_propietario[i].idPropietario=id[i];
      strcpy(lista_propietario[i].nombre_prop,nombre[i]);
      strcpy(lista_propietario[i].tarjeta,tarjeta[i]);
      strcpy(lista_propietario[i].direccion,direccion[i]);
       }
  //  for(i=0;i<4;i++)

}


