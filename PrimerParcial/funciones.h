#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "propietario.h"
#include "ingresos.h"
#include "egresos.h"




void AltaUnaxxxx(ePropietario lista_propietario[]);
int obtenerEspacioLibre(ePropietario lista_propietario[],int cantidad);
void ValidaMenu(int opcion,int limite_inferior,int limite_superior);
int Inicializa_Propietario(ePropietario lista_propietario[],int limite);
void MostrarUnaPersona(ePropietario propietario);
void MostrarPropietarioConSusAutos(ePropietario lista_prop[],int cant_prop,eIngresos lista_ingre[],int cant_ingr);
void MostrarPropietariosAutosAudi(ePropietario lista_prop[],int cant_prop,eIngresos lista_ingre[],int cant_ingr);
int ListarPropietarios(ePropietario lista_propietario[],int cantidad);
void BajaPropietario(ePropietario lista_prop[],int idProp,int cant_prop,eIngresos list_ingresos[],int cant_ingreso,eEgreso lista_egreso[], int cant_egreso);
//int buscarPorId(ePropietario lista_propietario[], int id,int cantidad);
int buscarPorId(ePropietario lista[], int ,int );
//int buscarPorId(eIngresos lista[], int ,int );
//int buscarIngreso(eIngresos lista_ingresos[],int id,int cantidad);
void ModificarUnaPersona(ePropietario lista_propietario[],int cantidad);
int PedirEntero(char mensaje[]);
void BorrarUnaPersona(ePropietario lista[],int indice,int cantidad);
int devolverHorasEstadia();
//void IngresoAuto(eIngresos autos);
#endif // FUNCIONES_H_INCLUDED
