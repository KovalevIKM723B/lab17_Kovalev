#include <iostream>
#include <string.h>
#include "windows.h"
using namespace std;
class Human
{
private:
    string Name;
    int Age;
    int Weight;
public:
    void Set_Human(string N, int A, int W)
    {
        Name = N;
        Age = A;
        Weight = W;
    }
    void Show_Human()
    {
        cout << "Name - " << Name << endl;
        cout << Age << " years old" << endl;
        cout << "Weight - " << Weight << endl;
    }
};
class FullYear :public Human
{
private:
    int Passnumber;
public:
    void Set_Passnumber(int P)
    {
        Passnumber = P;
    }
    void Show_Passnumber()
    {
        cout << "Passnumber - " << Passnumber << endl;
    }
};


int main()
{
    int A, W, Passnumber;
    string N;
    cout << "Enter Name, Age, Weight:" << endl;
    cin >> N >> A >> W;
    Human person;
    person.Set_Human(N, A, W);
    cout << "Enter passnumber:" << endl;
    cin >> Passnumber;
    FullYear ob;
    ob.Set_Passnumber(Passnumber);
    person.Show_Human();
    ob.Show_Passnumber();
}