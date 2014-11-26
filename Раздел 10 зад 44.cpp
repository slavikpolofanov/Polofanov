#include <iostream.h>
#include <conio.h>
 
 
void recNat(int n){
    if(n == 1){
        cout << 1;
    } else {
        cout << n << " ";
        recNat(n-1);
    }
}
 
 
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    recNat(n);
    getch();
    return 0;

}
