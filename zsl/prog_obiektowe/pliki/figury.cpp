#include <iostream>
	using namespace std;
	
	class rectangle{
	public:
		float A,B;
		float fild(float A, float B);
		float circuit(float A, float B);
		
			void showFild();
			void showCircuit();
	};
	
	
	void rectangle::fild(float A, float B){
		return A*B;	
	};
	
	void rectangle::circuit(float A, float B){
		return (A+B)*2;
	};
	
	
	int main (int argc, char** argv) {
		setlocale(LC_CTYPE,"polish");
		
		rectangle prostokat;
		prostokat.B = 5;
		prostokat.A = 9;
		prostokat.showCircuit();
		prostokat.showFild();
		
		return 0;
	}
	
	
