#include <bits/stdc++.h>

using namespace std;

int main (){
	int notes[101]={};
	int flag, inputNote, maior=-1, maiorValue=0;
	cin >> flag;
	for ( int i=0 ; i<flag; i++){
		cin >> inputNote;
		notes[inputNote]++;
		if(notes[inputNote] >= maior){
			if(notes[inputNote] == maior){
				if(maiorValue < inputNote){
					maiorValue = inputNote;
				}	
			}else{
				maior = notes[inputNote];
				maiorValue = inputNote;	
			}
		}
	}

	cout << maiorValue << endl;
	return 0;	
}


