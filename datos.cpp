//Tu código en C++

#include <iostream>
#include <string>
using namespace std;

class Persona 
{ 
private: 
     int edad; 
     string nombre;
     //...

public:
     Persona(){ };
     void SetNombre();
     void SetEdad();
     void Imprimir();
     //...
}; 

void Persona::SetNombre()
{
     cout << "Nombre: ";
     getline(cin, nombre);
}

void Persona::SetEdad()
{
     cout << "Edad: ";
     cin >> edad;
}

void Persona::Imprimir()
{
     cout << nombre << ", " << edad << endl;
     cin.ignore();
}

int main() 
{
     Persona p[3];

     for(int i = 0; i < 3; i++)
     {
          p[i].SetNombre();
          p[i].SetEdad();
          p[i].Imprimir();
     }

     system("pause");
     return 0;
}
