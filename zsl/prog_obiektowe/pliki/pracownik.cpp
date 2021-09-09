#include <iostream>
using namespace std;

class Test{
	public:
	int a;
};

class Worker{
	public:
		string name;
		string surname;
		string nationality;
		unsigned short int yearBirthday;
		float height;
		char gender;
		
		void showNameSurname(){
			cout << "Imie i Nazwisko: " << name << " " << surname << "\n\n";
		};

	void showAllData();
	
};
 	
 	void Worker::showAllData(){
	 	
	 	string genderDescripton;
	 	
	 	switch(gender){
	 		
	 		case 'm':
	 			genderDescripton = "Mê¿czyzna";
	 			
	 			break;
	 			
	 		case 'w' :
	 			genderDescripton = "Kobieta";
	 			
	 			break;
	 			
	 		default :
	 			genderDescripton ="-";
		 }
		 
		 cout << "Imie i Nazwisko: " << name << " " << surname << "\n\n"
		 << "Narodowoœæ: " << nationality << ", data urudzenia: " << yearBirthday << "\nwzrost" << height << ", p³eæ: " << genderDescripton;
		 
	};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Test NewObject;
	
	Worker pracownik;
	pracownik.name="Jan";
	pracownik.surname="Kowalski";
	pracownik.nationality="Polska";
	pracownik.yearBirthday=1998;
	pracownik.height=180;
	pracownik.gender='m';
	
	cout << pracownik.name << endl << endl;
	pracownik.showNameSurname();
	pracownik.showAllData();
	
	return 0;
}
