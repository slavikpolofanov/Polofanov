#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
  for (int min17 = 200; ; min17++)
  {
    if (min17 % 17 == 0) 
      break;
  }
  cout <<"Минимальное число больше за 200, которое нацело делиться на 17 это - "<< 200+(17-200%17) << endl ;

getch();
return 0;
}
