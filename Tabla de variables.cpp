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

int main()
{
    map<string, string> tablaVariables;
    string id, tipo, variableABuscar;
    char respuesta;
    bool seguirInsertando=true, seguirBuscando=true;
    do
    {
        cout<<"Inserte una variable."<<endl;
        cin>>id>>tipo;
        insertar(tablaVariables, id, tipo);
        cout<<endl;
        cout<<"Desea insertar otra variable? (Escriba S o N)."<<endl;
        cin>>respuesta;
        cout<<endl;
        if (respuesta=='N')
        {
            seguirInsertando=false;
        }
    }
    while (seguirInsertando);
    map<string, string> :: iterator it;
    for (it=tablaVariables.begin(); it!=tablaVariables.end(); ++it)
    {
        cout<<it->first<<" - "<<it->second<<endl;
    }
    do
    {
        cout<<endl;
        cout<<"Que variable desea buscar?"<<endl;
        cin>>variableABuscar;
        buscar(tablaVariables, variableABuscar);
        cout<<endl;
        cout<<"Desea buscar otra variable? (Escriba S o N)."<<endl;
        cin>>respuesta;
        if (respuesta=='N')
        {
            seguirBuscando=false;
        }
    }
    while(seguirBuscando);
    return 0;
}
