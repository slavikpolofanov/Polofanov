#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;
 
void Reverse(long n){
    if(!n)
        return;
 
    cout << n%10;
    Reverse(n/10);
}
 
 
int main(){
    long n;
    cout << "Enter number: ";
    cin >> n;
    Reverse(fabs(n));
    getch();
    return 0;
}
