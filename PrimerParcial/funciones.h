#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "propietario.h"



void AltaUnaxxxx(ePropietario lista_propietario[]);

int obtenerEspacioLibre(ePropietario lista_propietario[],int cantidad);
void ValidaMenu(int opcion,int limite_inferior,int limite_superior);
int Inicializa_Propietario(ePropietario lista_propietario[],int limite);
void MostrarUnaPersona(ePropietario propietario);
void ListarPropietarios(ePropietario lista_propietario[],int cantidad);
int buscarPorId(ePropietario lista_propietario[], int id,int cantidad);
void ModificarUnaPersona(ePropietario lista_propietario[],int cantidad);
int PedirEntero(char mensaje[]);
void BorrarUnaPersona(ePropietario lista[],int indice,int cantidad);
void IngresoAuto(eIngresos autos);

#endif // FUNCIONES_H_INCLUDED
