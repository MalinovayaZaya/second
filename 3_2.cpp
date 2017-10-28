//Напишите программу находящую в массиве сумму элементов делящихся либо на 72 либо на 27(не вместе).

#include <iostream>
using namespace std;
int main(){
int N,s=0;
cin >> N;
int*A=new int [N];
for(int i=0; i<N;i++){
cin >> A[i];}
for(int i=0;i<N; i++){
if(A[i]%27==0){
    if(A[i]%72!=0){
s+=A[i];
    }
}
else{
if(A[i]%72==0){
s+=A[i];}
}
}
cout << s;
delete []A;
return 0;
}
