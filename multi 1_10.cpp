#include <iostream>
using namespace std;
int main()
{
for(int i =1; i<=10; i++){
	cout<<"-----------------------------"<<endl;
	cout<<"La Tabla del "<< i <<endl;
	
	for(int m = 0; m <= 10; m++){
		cout << i << " x " << m << " = "<<i * m<<endl;
	}
}
system("PAUSE");

}
