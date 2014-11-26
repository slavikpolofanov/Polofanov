#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
   string str;
   int i;
   cin >> str;
   for (i=0; str[i]!='.' && i<str.length(); i++) str[i+1]=' '; 
   cout <<str<<endl;
   system("pause"); 
   return 0;
}
