#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

bool bilet(int n){
    int n1,n2,n3,n4,n5,n6,s1,s2;
    
    n1=n/100000;
    n2=n/10000%10;
    n3=n/1000%100%10;
    n4=n/100%1000%100%10;
    n5=n/10%10000%1000%100%10;
    n6=n%100000%10000%1000%100%10;
    
    if((n1+n2+n3)==(n4+n5+n6)){
                               return 1;}
    else{ return 0;}
}

int main(){
    int a;
    bool b;
        
    for(a=100000;a<=999999;a++){
                                if(bilet(a)==1)
                                cout<<a<<endl;
                                Sleep(1);
                                }
    
    getch();
    return 0;
}
