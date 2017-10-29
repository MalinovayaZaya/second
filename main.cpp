#include <iostream>

using namespace std;

int main(){
 double pow(double a, int b);
 int b;
 double a;
 cin >> a >> b;
 double c = pow(a, b);
 cout << a << "*" << b << "=" << c;
 return 0;
}
double pow(double a, int b){
   if(a==0)return 0;
   if(b==0)return 1;
   if(b<0) return pow(a, b++)/a;
   if(b>0) return pow(a,b--)*a;
   }
