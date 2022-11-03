#ifndef TABLADEVARIABLES_H
#define TABLADEVARIABLES_H
#include <iostream>
#include <map>
using namespace std;

void insertar(map<string, string> &tablaVariables, string id, string tipo)
{
    tablaVariables.insert(pair<string, string>(id, tipo));
}

void buscar(map<string, string> tablaVariables, string variableABuscar)
{
    if (tablaVariables.count(variableABuscar)>0)
    {
        cout<<"La variable "<<variableABuscar<<" si se encuentra en la tabla."<<endl;
    }
    else
    {
        cout<<"La variable "<<variableABuscar<<" no se encuentra en la tabla."<<endl;
    }
}

#endif