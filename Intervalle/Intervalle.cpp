#include <iostream>
#include "Tableau.h"
#include "TableauBorne.h"

using namespace std;

int main()
{

    Tableau t(3);

    t[0] = 10.5;
    t[1] = 15.5;
    t[2] = 20.5;

    for (int i = 0; i < 3; i++)
    {
        cout << t[i] << endl;
    }

    Tableau t2(t);

    for (int i = 0; i < 3; i++)
    {
        cout << t2[i] << endl;
    }
    Tableau t3(2);

    t3 = t;


    for (int i = 0; i < 3; i++)
    {
        cout << t3[i] << endl;
    }


    TableauBorne tb(4, 5, 20);


    for (int i = 0; i < 4; i++)
    {
        cout << tb[i] << endl;
    }


    

    return 0;
}