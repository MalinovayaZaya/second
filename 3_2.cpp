//Напишите программу находящую в массиве сумму элементов делящихся либо на 72 либо на 27(не вместе).

#include <iostream>
using namespace std;
int main(){
int n, s;
s=0;
cin >> n;
int*A=new int[n];
for(int i=0; i<n; i++){
    cin >> A[i];
}
for(int i=0; i<n; i++){
    if(A[i]%27==0){
        s+=A[i];
    }
    else{
        if(A[i]%72==0){
            s+=A[i];
        }
    }
}
cout << s;
return 0;
}
