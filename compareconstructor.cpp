#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		complex(){
			a=0;
			b=0;
		}
		complex(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"The complex no is:"<<a<<"+i"<<b<<endl;
		}
		friend void add(complex,complex);
};
void add(complex c1,complex c2){
	complex c;
	c.a=c1.a+c2.a;
	c.b=c1.b+c2.b;
	cout<<"After addition,"<<endl;
	c.display();
}
int main(){
	int a,b,c,d;
	cout<<"Enter complex no:";
	cin>>a>>b;
	complex c1(a,b);
	cout<<"Enter complex no:";
	cin>>c>>d;
	complex c2(c,d);
	add(c1,c2);
	return 1;
}