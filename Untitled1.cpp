#include "iostream"
#include "string"
using namespace std;

int main(){
	float sum=0,i=2;
	while(i<=69){
		sum = sum+(1/i);
		i = i+1;
	}
cout << sum;
	return 0;
}
