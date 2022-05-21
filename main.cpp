#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b;
	cout<<"Enter values of a and b"<<endl;
	cin>>a>>b;
	try{
		if(b==0){
			throw 1;
		}
		int c=a/b;
		cout<<c;
	}
	catch(int a){
		cout<<"division by zero not possible";
	}
	return 0;
}
