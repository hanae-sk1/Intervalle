#pragma once
#include "Tableau.h"

class TableauBorne : protected Tableau
{
private:
    float borneSup;
    float borneInf;

public:
    TableauBorne(int taille, float inf, float sup);

    const float& operator[](int i) const;

};