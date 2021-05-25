#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

    int mas[10];
    cout<<"Введите последовательность чисел: "<<endl;
    for (int i=0; i<10; i++)
    {
        cin>>mas[i];

    }
    cout<<"Перевод чисел из 10-ой системы счисления."<<endl;
    cout<<"8-ая: \t"<<"10-ая: \t"<<"16-ая: \t"<<endl;
    for (int i=0; i<10; i++)
    {
        cout<<setw(2)<<oct<<mas[i]<<"\t"<<setw(2)<<dec<<mas[i]<<"\t"<<setw(2)<<hex<<mas[i]<<"\t"<<endl;
    }
    return 0;
}
