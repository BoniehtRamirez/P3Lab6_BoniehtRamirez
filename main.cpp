#include <iostream>

using namespace std;

class INTEGER{
	public:
		int integer;
		INTEGER(int _integer){
			integer = _integer;
		}
		INTEGER operator+(const INTEGER &b){
			return INTEGER(integer + b.integer);
		}
		INTEGER operator-(const INTEGER &b){
			return INTEGER(integer - b.integer);
		}
		INTEGER operator*(const INTEGER &b){
			return INTEGER(integer * b.integer);
		}
		INTEGER operator/(const INTEGER &b){
			return INTEGER(integer / b.integer);
		}
		
};

class STRING{
	public:
		string word;
		STRING(string _word){
			word = _word;
		}
		
		STRING operator*(const int &n){
			string newWord = "";
			for (int i=0; i < n; i++){
				newWord += word;
			}
			
			return newWord;
		}
		
		STRING operator+(const char &n){
			
			return word + n;
		}
};

class CHAR{
	public:
		char letra;
		CHAR(char _letra){
			letra = _letra;
		}
		
		void operator!(){
			cout << letra;
		}
		void operator<<(const char &n){
			letra = n;
		}
};

int main(int argc, char** argv) {
	CHAR x = CHAR('x');
	!x;
}
