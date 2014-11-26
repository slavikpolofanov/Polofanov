#include <iostream.h>
#include <conio.h>
#define n 3
 
 struct mountain
  {
   char name[10];
   int h;
  };
 
  int main()
   {
    mountain a[n];
    int i;
    cout<<" Enter:\n";
     for(i=0;i<3;i++)
      {
       cout<<"\n Name of "<<i+1<<" mountain: ";
       cin>>a[i].name;
       cout<<"\n H=";
       cin>>a[i].h;
       cout<<"\n  -------\n";
      }
    cout<<"\n\n H>3000:\n";
     for(i=0;i<n;i++)
      if(a[i].h>3000) cout<<a[i].name<<"\t"<<a[i].h<<"\n";
    getch();
   }
