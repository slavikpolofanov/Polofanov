#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main ()
{
    int size_A, size_B;
    setlocale (0,"rus");
    cout<<"Введiть розмiрнiсть масива А : ";
    cin>>size_A;
    cout<<endl<<"Введiть розмiрнiсть масива B : ";
    cin>>size_B;
    int * mas_A=new int [size_A];
    int * mas_B=new int [size_B];
    int * mas_C=new int [size_A+size_B];
    
    cout<<endl<<"Введiть значення масива А : ";
    for (int i=0;i<size_A;i++)
    cin>>mas_A[i];
    cout<<endl<<"Введiть значення масива В : ";
    for (int i=0;i<size_B;i++)
    cin>>mas_B[i];
    
    system ("cls");
    
    cout<<endl<<"Ви ввели : "<<endl<<"\t Масив А: ";;
    
    for (int i=0;i<size_A;i++)
    cout<<mas_A[i]<<" ";
    
    cout<<endl<<"\t Масив В: ";;
    
    for (int i=0;i<size_B;i++)
    cout<<mas_B[i]<<" ";
    
    int x=0;    
    
    for (int i=0;i<size_A;i++,x++)
    mas_C[x]=mas_A[i];
    
    for (int i=0;i<size_A;i++,x++)
    mas_C[x]=mas_B[i];
    
cout<<endl<<endl<<"\t Масив С: ";
for (int chisla=0;chisla<10;chisla++)
for (int i=0;i<size_A+size_B;i++)
if (chisla==mas_C[i])
{cout<<mas_C[i]<<" ";
chisla++;}
    
 getch();
 return 0;   
}
