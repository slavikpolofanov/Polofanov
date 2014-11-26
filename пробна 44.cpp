#include <iostream.h>
#include <cmath>
#include <conio.h>
 
void Reverse(int n){
    if(!n)
        return;
 
    cout << n%10;
    Reverse(n/10);
}
 
 
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    Reverse(fabs(n));
    
    getch(); 
    return 0;
}
