#ifndef EGRESOS_H_INCLUDED
#define EGRESOS_H_INCLUDED



typedef struct
{
   int marca_auto;
   float importe;
}eEgreso;


void HardcodeEgreso(eEgreso lista_egresos[]);
int BuscarPorMarca(eEgreso lista_egreso[],int);
int devolverHorasEstadia();
#endif // EGRESOS_H_INCLUDED
