#include "TableauBorne.h"
#include <cstdlib>

TableauBorne::TableauBorne(int t, float inf, float sup)
    : Tableau(t)
{
    if (inf > sup)
    {
        cerr << "Intervalle invalide !" << endl;
        exit(1);
    }

    this->borneInf = inf;
    this->borneSup = sup;

    for (int i = 0; i < this->taille; i++)
    {
        this->tab[i] = this->borneInf;
    }
}

const float& TableauBorne::operator[](int i) const
{
    if (i < 0 || i >= this->taille)
    {
        cerr << "Indice invalide !" << endl;
        exit(1);
    }

    return this->tab[i];
}

