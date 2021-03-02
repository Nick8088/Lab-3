#include <iostream>
using namespace std;
class Quaternion{ 
   private :
       double a,b,c,d;
   public:
Quaternion(double a = 0 , double b =0 ,double c=0 ,double d=0){   
 this->a=a;
this->b=b;
this->c=c;
this->d=d;
}
Quaternion operator + (Quaternion & obj){
Quaternion ans; 
ans.a = a + obj.a;
ans.b = b + obj.b;
ans.c = c + obj.c;
ans.d = d + obj.d;
return ans;
}
Quaternion operator - (Quaternion & obj){
Quaternion ans;
ans.a = a - obj.a;
ans.b = b - obj.b;
ans.c = c - obj.c;
ans.d = d - obj.d;
return ans;
}
bool operator == (Quaternion & obj){
if( a == obj.a && b == obj.b && c == obj.c && d == obj.d ) { 
return true;
}
return false;
}
Quaternion operator * (double m){
Quaternion ans; 
ans.a = a * m;
ans.b = b * m;
ans.c = c * m;
ans.d = d * m;
return ans;
}
void print(){
cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
}
};
int main() {
Quaternion q1(2.3,5.5,6.7,8.8), q2(2.3,5.5,6.7,8.8);
Quaternion a;
a= q1 * 5;
a.print();
a= q1 + q1;
a.print();
a=q1 - q2;
a.print();
bool ans= q1 == q2;
cout<<ans;
return 0;
}