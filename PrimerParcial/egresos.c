#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "egresos.h"

void HardcodeEgreso(eEgreso lista_egresos[])
{
  int marca[]={1,4,2,3,2,2,3,4,1,1};
  float importe[]= {100,200,100,300,100,100,200,200,100,100};
  int i;

  for(i=0;i<10;i++)
  {
    lista_egresos[i].marca_auto=marca[i];
    lista_egresos[i].estado=0;
    lista_egresos[i].id=0;
    lista_egresos[i].importe=importe[i];
  }
}
void Inicializa_Egreso(eEgreso lista[],int limite)
{
    int i;

    for(i=0;i<limite;i++)
    {
        lista[i].estado=0;
        lista[i].marca_auto=0;
        lista[i].importe=0;
    }
}

