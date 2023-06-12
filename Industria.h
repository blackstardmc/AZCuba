#ifndef INDUSTRIA_H
#define INDUSTRIA_H
using namespace std;
#include <iostream>




class Industria
{
private:
    string name;
    int limpias,aLimpiar;
    
public:
    Industria(const string &name, int limpias, int aLimpiar);

    int getLimpias() const;
    void setLimpias(int newLimpias);
    int getALimpiar() const;
    void setALimpiar(int newALimpiar);
    
    string getName() const;
    void setName(const string &newName);
};

#endif // INDUSTRIA_H
