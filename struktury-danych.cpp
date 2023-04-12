#include <iostream>
using namespace std;

int main()
{
	struct uzytkownicy {
		string name;
		string lname;
		int id;
		string kod;
	};

	//METODA NR.1

	uzytkownicy uzyt1;
	uzyt1.name = "Adam";
	uzyt1.lname = "Kowal";
	uzyt1.id = 45;
	uzyt1.kod = "zablokowany";


	uzytkownicy uzyt2;
	uzyt2.name = "Piotr";
	uzyt2.lname = "XDD";
	uzyt2.id = 94;
	uzyt2.kod = "aktywny";
	//METODA NR.2
	
	uzytkownicy uzyt3 = uzyt1;
	//WYSWIETLANIE OBIEKTU

	cout 
		<< endl << uzyt1.name
		<< endl << uzyt1.lname
		<< endl << uzyt1.id
		<< endl << uzyt1.kod;
	cout
		<< endl << endl << uzyt2.name
		<< endl << uzyt2.lname
		<< endl << uzyt2.id
		<< endl << uzyt2.kod;
	cout
		<< endl << endl << uzyt3.name
		<< endl << uzyt3.lname
		<< endl << uzyt3.id
		<< endl << uzyt3.kod;
}