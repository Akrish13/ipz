/* ��������� �.�. �?-214 ��� �4 �������� 2 */
#include <QtCore/QCoreApplication>
#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <bitset>

using namespace std;

double ds(double a, double b, double c); //���� ���ਬ?����
void kw(double a, double b, double c) //஧�'燐� �����⭮�� �?��ﭭ�
{

    double d;
    double x1;
    double x2;
    d = (b*b)-(4*a*c) ;

    if (d>0)
    {
        cout <<"\nd="<<d;
        x1 = (-b + sqrt(d))/(2*a) ;
        x2 = (-b - sqrt(d))/(2*a) ;
        cout <<"\nx1="<<x1;
        cout<<"\nx2="<<x2;
    }

    else  if (d==0)
    {
        cout <<"\nd="<<d;
        x1 = ((-b)/(2*a)) ;
        x2 = ((-b)/(2*a)) ;
        cout<<"\nx1="<<x1;
        cout<<"\nx2="<<x2;
    }

     else if (d<0)
    {
         cout <<"\nd="<<d;
        d = -((b*b)-(4*a*c)) ;
        cout<<"\nx1="<<"("<<-b<<"+"<<sqrt(d)<<"i)/"<<2*a;
        cout<<"\nx2="<<"("<<-b<<"-"<<sqrt(d)<<"i)/"<<2*a;
    } }
     void li(double b, double c)//஧�'燐� �?�?����� �?��ﭭ�
     {
         double x = -c / b;
         cout << "x=" << x << endl;
     }
int main(int argc, char *argv[])
{

    QCoreApplication e(argc, argv);
    for (;;)
    {
        double a,b,c;
        cin>>a>>b>>c;
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
        cout<<"\nc="<<c << "\n";
        cout << a << "x^2+(" << b << "x)+(" << c <<")=0" << endl;
        if (a != 0 & a=10)
    {
        kw(a, b, c);
    }
      else if(b!=0)
    {
      li(b, c);
    }
      else
    {
      if (c == 0)
      cout << "any solution " << endl;
      else
      cout << "no solution" << endl;
    }
    }
      return e.exec();
    }
      double ds(double a, double b, double c)//���� ���ਬ?����
    {
      double d = (pow(b, 2)) - 4 * a * c;
      return d;
    }
