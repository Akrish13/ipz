/* Нелепенко О.В. Лаб роб №4 завдання 1 egwgwegwegwegwegwdfwdfdsgsdgdweg*/
#include <QtCore/QCoreApplication>
#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <bitset>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication e(argc, argv);
double a,b,c,z1,z2,z3;
int f = 151;

cin >>z1 >>z2 >>z3;
cout <<"\nz1=" <<z1;
cout <<"\nz2=" <<z2;
cout <<"\nz3=" <<z3;
cout <<"\n\nafter change : \n";
if (z1>z2 && z1>z3)
{
    cout <<"\nmax=" <<z1;
    if(z2>z3)
    {
    cout <<"\nz2=" <<z2;
    cout <<"\nmin=" <<z3;
    }
    else
    {
        cout <<"\nz2=" <<z3;
        cout <<"\nmin=" <<z2;
    }
}
else if (z2>z1 && z2>z3)
{
    cout <<"\nz2="<<z2;
    if(z1>z3)
    {
        cout<<"\nmax="<<z1;
        cout<<"\nmin="<<z3;
    }
    else
    {
        cout<<"\nmax="<<z3;
        cout<<"\nmin="<<z1;
    }
}
else if (z3>z2 && z3>z1)
{
    cout<<"\nmax="<<z3;
    if(z1>z2)
    {
        cout<<"\nmin="<<z2;
        cout<<"\nz2="<<z1;
    }
    else
    {
        cout<<"\nz2="<<z2;
        cout<<"\nmin="<<z1;
        cout << "\nz2=" << z2;
       
    }

}


    return e.exec();
}
/* git efe*/