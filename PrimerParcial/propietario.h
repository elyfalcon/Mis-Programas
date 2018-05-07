#ifndef PROPIETARIO_H_INCLUDED
#define PROPIETARIO_H_INCLUDED

typedef struct
{
    int idPropietario;
    char nombre_prop [20];
    char ape_prop [20];
    char direccion [30];
    char tarjeta[20];

}ePropietario;

void HardcodePersona(ePropietario lista_propietario[]);




#endif // PROPIETARIO_H_INCLUDED
