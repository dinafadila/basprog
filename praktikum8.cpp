/*
//-----------genap ganjil---------------//
#include <iostream>

using namespace std;

int main () {
	int angka;
	cin >> angka;
	
	if(angka%2 == 0) {
		cout <<"genap\n";
	}
	else {
		cout <<"ganjil\n";
	}
	return 0;
}


//----------hasil penjumlahan-----------//
#include <iostream>

using namespace std;

int main () {
	int n,bil,sum=0;
	cin >> n;
	
	while (n--) {
		cin >> bil;
		sum+=bil;	
	}
	cout <<sum<<"\n";
	return 0;
}


//----------sisi miring------------------//
#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int a,b,mir;
	cin >> a;
	cin >> b;
	
	mir = sqrt(a*a + b*b);
	
	cout << mir <<"\n";
	
	return 0;
}


//-----------nilai diskriminan---------//
#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int a,b,c,d;
	double x1,x2;
	cin >> a;
	cin >> b;
	cin >> c;
	
	d = b*b - 4*a*c;
	if (d<0) {
		cout << "x1 dan x2 undefined\n";
	}
	else if (d == 0) {
		x1 = (-b + sqrt(d)) / 2.0*a;
		cout << "x1 = x2 = " << x1 <<"\n";
		
	}
	else {
		x1 = (-b + sqrt(d)) / 2.0*a;
		x2 = (-b - sqrt(d)) / 2.0*a;
		cout << "x1 = " << x1 <<"\n";
		cout << "x2 = " << x2 <<"\n";
	}
	
	
	return 0;
}
*/

//-------------menu aritmatika---------//
#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int a,b, pilihan;
	cin >> a;
	cin >> b;
	
	cout <<"MENU\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\npilihan menu (1-4) :";
	cin >> pilihan;
	switch(pilihan) {
		case 1: cout<<a+b<<"\n";break;
		case 2: cout<<a-b<<"\n";break;
		case 3: cout<<a*b<<"\n";break;
		case 4: cout<<a/b<<"\n";break;
	}
	return 0;
}
