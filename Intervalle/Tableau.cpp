#include "Tableau.h"
#include <cstdlib>

Tableau::Tableau(int t)
{
    this->taille = t;
    this->tab = new float[this->taille];
}

Tableau::~Tableau()
{
    delete[] this->tab;
}

Tableau::Tableau(const Tableau& t)
{
    this->taille = t.taille;

    this->tab = new float[this->taille];

    for (int i = 0; i < this->taille; i++)
    {
        this->tab[i] = t.tab[i];
    }
}

Tableau& Tableau::operator=(const Tableau& t)
{
    if (this != &t)
    {
        delete[] this->tab;

        this->taille = t.taille;

        this->tab = new float[this->taille];

        for (int i = 0; i < this->taille; i++)
        {
            this->tab[i] = t.tab[i];
        }
    }

    return *this;
}

float& Tableau::operator[](int i)
{
    if (i < 0 || i >= this->taille)
    {
        cerr << "Indice invalide !" << endl;
        exit(1);
    }

    return this->tab[i];
}