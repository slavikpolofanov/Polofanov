#include <conio.h>
#include <iostream.h>
#include <math.h>
using namespace std;

int main()
{
int s[10]; // ������ ��� �������� ���� �����
int k=0; // ������� ���� � �����
int sr=0; // ������� �����
int ls=0;// ����� ����� ���� ����
int rs=0;// ����� ������ ��� �����
int n=0;
// ��������� ����� �� ����� � ��������� �� 0 �� 100000

for(int i=0; i<6; i++){
        cin>>s[i];
        } 

for ( n=0; n<=100000; n++)
{
for(int i=0;i<6;i++)
{
s[i]=n%10;
n/=10;
}
}


//���� ����� ������������, �� ������� ����� ������ � ����� ���� � �����

if(k==6)
{
sr=k/2;
for(int i=0; i<sr; i++)
{
ls=ls+s[i];
}
for(int i=sr; i<sr+1; i++)
{
rs=rs+s[i];
}
if(ls==rs)
{
cout<<n<<"schastlivoe chilso"<<endl;
}

}
getch();
return 0;
}
