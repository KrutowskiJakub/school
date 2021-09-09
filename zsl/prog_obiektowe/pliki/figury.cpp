#include <iostream>
	using namespace std;
	
	class rectangle{
		public:
			int A;
			int B;
			
		void sum(){
			cout << "obwód: " << (A + B)*2 << endl;
		};
		
		void fild(){
			cout << "pole: " << A * B << endl;	
		};
		
	};
	
	int main (int argc, char** argv) {
		setlocale(LC_CTYPE,"polish");
		
		rectangle prostokat;
		prostokat.B = 5;
		prostokat.A = 9;
		prostokat.sum();
		prostokat.fild();
		
		return 0;
	}
	
	
