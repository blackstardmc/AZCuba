
#include "adminindustria.h"

int AdminIndustria::getCont() const
{
    return cont;
}

void AdminIndustria::setCont(int newCont)
{
    cont = newCont;
}

Industria *AdminIndustria::getPosIndustria(int pos)
{
    return industriaA[pos];
}

AdminIndustria::AdminIndustria()
{
	this->cont=0;
    industriaA=new Industria*[16];
}




bool AdminIndustria::insertar(Industria *industria)
{
    if(cont<16){
        industriaA[cont]=industria;
        cont++;
        return true;
    }
    else{
        return false;
    }
}


