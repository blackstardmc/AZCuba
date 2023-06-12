#include "Industria.h"

string Industria::getName() const
{
    return name;
}

void Industria::setName(const string &newName)
{
    name = newName;
}

int Industria::getLimpias() const
{
    return limpias;
}

void Industria::setLimpias(int newLimpias)
{
    limpias = newLimpias;
}

int Industria::getALimpiar() const
{
    return aLimpiar;
}

void Industria::setALimpiar(int newALimpiar)
{
    aLimpiar = newALimpiar;
}




Industria::Industria(const string &name, int limpias, int aLimpiar) : name(name),
    limpias(limpias),
    aLimpiar(aLimpiar)
{}

