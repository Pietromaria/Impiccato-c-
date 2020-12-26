//main
//matteocafarelli
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void){
	ifstream vocFile;
	vocFile.open("vocitaliano.txt", ios::in);
	vocFile.getline()
	while(!vocFile.eof()){
		cout<<"Parola: "<<i++<<endl;
		estraiParola();
	}
	vocFile.close()
}
