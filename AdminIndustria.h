
#ifndef ADMININDUSTRIA_H
#define ADMININDUSTRIA_H

#include "industria.h"





class AdminIndustria
{
private:
    Industria **industriaA;
    int cont;
public:
	
    AdminIndustria();
    bool insertar(Industria *industria);
    int getCont() const;
    void setCont(int newCont);
    Industria *getPosIndustria(int);
};

#endif // ADMININDUSTRIA_H

