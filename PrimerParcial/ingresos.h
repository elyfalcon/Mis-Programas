#ifndef INGRESOS_H_INCLUDED
#define INGRESOS_H_INCLUDED


    typedef struct
{
    int id;
    char patente[20];
    int marca;
    int propietario;
}eIngresos;


void HardcodeIngresos(eIngresos lista_ingresos[]);



#endif // INGRESOS_H_INCLUDED
