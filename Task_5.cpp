#include <iostream>
using namespace std;

int main() {
   const char* FName = "/home/guffindor/test/data1.bin";       
   const char* FName1 = "/home/guffindor/test/data2.bin";
								//Переменные для записи
    double mas[10];
	for (int i = 0; i<10; i++)
		mas[i]=i;
   /*РАБОТА С БИНАРНЫМ ФАЙЛОМ*/
   ofstream out(FName, ios::binary);
        out.write((char*)&mas, sizeof(mas));
   out.close();

   for (int i = 0; i<10; i++)
		mas[i]=1/mas[i];

   /*КОНЕЦ РАБОТЫ С БИНАРНЫМ ФАЙЛОМ*/
   ifstream in(FName1,ios::binary);
        in.read((char*)&mas, sizeof(mas));
   in.close();
   /*КОНЕЦ РАБОТЫ С ФАЙЛОМ*/
	for (int i = 0; i<10; i++)
		cout << mas[i] << '\n';
    cin.get();
}
