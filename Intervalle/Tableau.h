#pragma once
#include<iostream>
using namespace std;

class Tableau
{
protected://car ils nous ont demande que les classes filles puissent y acceder
	float* tab;
	int taille;
public:
	Tableau(int taille);
	~Tableau();
	Tableau(const Tableau& t);
	float& operator[](int i);
};

