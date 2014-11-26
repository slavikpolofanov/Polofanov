#include<iostream.h>
#include<conio.h>
#include<string.h>

int main(){
    char c[128],a;
    
    cin>>c;
    
    int n=strlen(c);
    
    for(int i=0; i<n; i++){
            c[i]=a;
            c[i]=c[n-1-i];
            c[n-1-i]=a;
            }
            
    for(int i=0; i<n; i++){
            cout<<c[i];
            }
    getch();
    return 0;
}
