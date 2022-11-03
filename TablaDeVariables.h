#ifndef TABLADEVARIABLES_H
#define TABLADEVARIABLES_H
#include <iostream>
#include <map>
using namespace std;

class TablaDeVariables
{
    public:
        void insertar(map<string, string>&, string, string);
        void buscar(map<string, string>, string);
};

void TablaDeVariables::insertar(map<string, string> &tablaVariables, string id, string tipo)
{
    tablaVariables.insert(pair<string, string>(id, tipo));
}

void TablaDeVariables::buscar(map<string, string> tablaVariables, string variableABuscar)
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