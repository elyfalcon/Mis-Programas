#ifndef CallCenter_H_INCLUDED
#define CallCenter_H_INCLUDED

typedef struct{
int id_abonado;
int numero;
char nombre[50];
char apellido[50];
int estado;
}eAbonado;

typedef struct{
char motivo[50];
int estado;
int id_abonado;
int tiempo_horas;
}eLlamadas;

void MostrarMenu();
void MostarUnAbonado(eAbonado abonado);
int BuscarLibre(eAbonado lista[],int cantidad);
void AltaDeUnAbonado(eAbonado abonado);









#endif // CALLCENTER_H_INCLUDED
