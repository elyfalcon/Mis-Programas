#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "propietario.h"
#include "ingresos.h"
#include "egresos.h"




void AltaUnaxxxx(ePropietario propietario[],int);
void AltaPropietarios(ePropietario lista[],int limite);
int obtenerEspacioLibre(ePropietario lista_propietario[],int cantidad);
int obtenerLibreIngreso(eIngresos lista_ingresos[],int );
void IngresoAuto(eIngresos lista_ingresos[],int,ePropietario lista_propietario[],int);
void ValidaMenu(int opcion,int limite_inferior,int limite_superior);
int Inicializa_Propietario(ePropietario lista_propietario[],int limite);
void MostrarUnaPersona(ePropietario propietario);
void MostrarPropietarioConSusAutos(ePropietario lista_prop[],int cant_prop,eIngresos lista_ingre[],int cant_ingr);
void MostrarPropietariosAutosAudi(ePropietario lista_prop[],int cant_prop,eIngresos lista_ingre[],int cant_ingr);
int ListarPropietarios(ePropietario lista_propietario[],int );
void ListarPropietarioYAuto(ePropietario lista[],eIngresos ingreso[],int,int);
void BajaPropietario(ePropietario lista_prop[],int indice,int cant_prop,eIngresos list_ingresos[],int cant_ingreso,eEgreso lista_egreso[], int cant_egreso);
int buscarPorId(ePropietario lista[], int ,int );
void ModificarUnaPersona(ePropietario lista_propietario[],int cantidad);
void MostrarIngresoAuto(eIngresos autos);
void ListarIngresoAuto(eIngresos lista_ingresos[],int);
void EgresoAutos(eIngresos lista_ingresos[],int,eEgreso lista_egreso[],int,ePropietario lista[],int);
int PedirEntero(char mensaje[]);
char Responder(char mensaje[]);
void BorrarUnaPersona(ePropietario lista[],int indice,int cantidad);
int devolverHorasEstadia();
void MarcaAutoaNombre(int ,char marca[]);
int BuscarLibreEgreso(eEgreso lista_egreso[],int );
void AltaEgreso(eEgreso vec[],int,int,int);
void ListarUnEgreso(eEgreso autos);
void ListarEgresos(eEgreso vec[],int);
void RecaudacionTotal(eEgreso lista[],int limite);
void RecaudacionPorMarca(eEgreso lista[],int limite);
void ListarAutosYPropietarios(eIngresos lista[],int,ePropietario vec[],int);
void ListarPropActivos(ePropietario lista[],int);
void ListarPropBajas(ePropietario lista[],int);
void MostrarIngresoPorid(eIngresos autos[],int);
float Liquidacion(eIngresos vec[],eEgreso egreso[],int,int);
#endif // FUNCIONES_H_INCLUDED
