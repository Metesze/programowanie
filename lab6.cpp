// lab6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdlib>
#include <iostream>
using namespace std;


template<class typ1, class typ2>
class Para {
    typ1 a;
    typ2 b;
public:
    Para() {};
    void wpisz(typ1 a1, typ2 b1) { a = a1, b = b1; }
    void wypisz() { cout << "Nasza para elementow " << a <<" "<<b<< endl; }

};
template<>
class Para<int,int> {
    int a;
    int b;
    int z;
public:
    Para() {};
    void wpisz(int a1, int b1) { a = a1, b = b1; }
    void podaj_z(int _z) { z = _z; }
    void wypisz() { cout << "Nasza trojka elementow " << a << " " << b<<" "<<z << endl; }

};
template<>
void Para<const char*,const char*>::wypisz() {
    cout << "Mamy dwa napisy: " << a << " " << b << endl;
}





//--------------------------------------------------------
int main(int argc, char* argv[])
{
    int c = 3;

    Para<int,float> p1;
    p1.wpisz(c, 81);
    p1.wypisz();

    Para<int, int>p2;
    p2.wpisz(1, 2);
    p2.podaj_z(3);
    p2.wypisz();
    Para<const char*,const  char*>p3;
    p3.wpisz("lubie", "C++");
    p3.wypisz();

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
