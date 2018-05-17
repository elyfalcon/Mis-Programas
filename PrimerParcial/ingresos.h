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
void IngresoAuto(eIngresos lista_ingresos[]);
int buscarIngreso(eIngresos lista_ingresos[],int id);
int buscarPorIdIngresos(eIngresos lista[], int ,int );
//void MostrarUnAuto(ePropietario autos);

#endif // INGRESOS_H_INCLUDED
