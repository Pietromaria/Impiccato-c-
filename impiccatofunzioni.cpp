//implementazione funzioni
#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
using namespace std;

struct recParola{
	string parola;
};

void personaggio(int t){
	
 if (t==6){//riamngono 6 tentativi   primo pezzo
	cout << "     =======" << endl;
	cout << "     ||    |" << endl; 
	cout << "     ||     " << endl;
	cout << "     ||     "<< endl;
	cout << "     ||     "<< endl;
	cout << "   / ||     "<< endl;
	cout << "  ============= " << endl;
 }
 if (t==5){//riamngono cinque tentativi		secondo pezzo
	cout << "//     =======" << endl;
	cout << "//     ||    |" << endl; 
	cout << "//     ||    0" << endl;
	cout << "//     ||    "<< endl;
	cout << "//     ||    "<< endl;
	cout << "//   / ||    "<< endl;
	cout << "//   ============= " << endl;
 }
 if (t==4){//riamngono quattro tentativi		terzo pezzo
	cout << "     =======" << endl;
	cout << "     ||    |" << endl; 
	cout << "     ||    0" << endl;
	cout << "     ||    |"<< endl;
	cout << "     ||    "<< endl;
	cout << "   / ||    "<< endl;
	cout << "  ============= " << endl;
 }
 if (t==3){ //riamngono tre tentativi		quarto pezzo
	cout << "     =======" << endl;
	cout << "     ||    |" << endl; 
	cout << "     ||    0" << endl;
	cout << "     ||   /|"<< endl;
	cout << "     ||    "<< endl;
	cout << "   / ||    "<< endl;
	cout << "  ============= " << endl;
 }
 if (t==2){//riamngono due tentativi	quinto pezzo
	cout << "    =======" << endl;
	cout << "    ||    |" << endl; 
	cout << "    ||    0" << endl;
	cout << "    ||   /|\\"<< endl;
	cout << "    ||    "<< endl;
	cout << "  / ||    "<< endl;
	cout << "  ============= " << endl;
 }
 if (t==1){ // rimane un tentativo		sesto pezzo 
	cout << "     =======" << endl;
	cout << "     ||    |" << endl; 
	cout << "     ||    0" << endl;
	cout << "     ||   /|\\"<< endl;
	cout << "     ||   /"<< endl;
	cout << "   / ||    "<< endl;
	cout << "  ============= " << endl;
 }
 if (t==0){   //tentativi conclusi fine gioco		settimo pezzo
	cout << "     =======" << endl;
	cout << "     ||    |" << endl; 
	cout << "     ||    0" << endl;
	cout << "     ||   /|\\"<< endl;
	cout << "     ||   / \\"<< endl;
	cout << "  /  ||    "<< endl;
	cout << "  ============= " << endl;
 }

}


void estraiParola(char rigain[], char parola[]){
	int i,k,j;
	
	for(i=0; (i<MAX_LEN)&&(rigain[i]!='\0')&&(rigain[i]!=';'); i++);
	
	for(k=0 ; k<1; k++)
		parola[k]=rigain[k];
	parola[k]='\0';
	
	j=0;
	
	for(k=i+1; k<MAX_LEN; k++){
		rigain[j]=rigain[k];
		j++;
	}
}
	
	
	
	
struct recParola{
	string parola;
};



void ranWord(){
	int i;
	recParola arrWord[N];
	srand(time(NULL));
	
	ifstream parolaCasuale;
	parolaCasuale.open(vocitaliano.txt);
	
	for(i = 0; i<N; i++){
		ranWord >> arrWord[i];
	//	cout << arrWord[i] <<endl; //cotntrollo stampa
	}
	
	int pos= rand()%N;
	parola = arrWord[pos];
	// cout << arrWord[pos]; //controllo stampa
	
	parolaCasuale.close();
}

string nascondiParola(string parola){  //parolaCens= parola censurata
	string parolaCens(parola.lenght(),'_'); //sostituisco le lettere con _
	cout<< parolaCens <<endl;
}

string trovaParola(string parola, string parolaCens, lettera){
	do{
		for(i=0; i< parolaCens.lenght(); i++){
			if(parola[i]==lettera){
				parolaCens[i]=lettera;
				cout<< "Bravo, hai trovato la lettera" << lettera <<endl;
			}
				     
		}
		if(parolaCens == parola){
			cout<<"La parola misteriosa é: "<< parola<<endl;
			cout<< "Bravo, hai vinto il gioco trovando la parola mistriosa!!!"<<endl;
		}
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
