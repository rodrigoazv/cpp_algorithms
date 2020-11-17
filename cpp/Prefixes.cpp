#include <bits/stdc++.h>

using namespace std;

int main (){
	int flag;
	int qntA=0, qntB=0;
	int turn=0;
	cin >> flag;
	char word[flag];
	cin >> word;
	for( int i=0; i<flag; i=i+2){
		if(word[i] == word[i+1]){
			if(turn == 0){
			
				turn = 1;
				if(word[i+1] == 'a'){
					qntA++;
					word[i]='b';
				}else{
					qntB++;
					word[i]='a';
				}
			}else{
				turn = 0;
				if(word[i+1] == 'a'){
					qntA++;
					word[i+1]='b';
				}else{
					qntB++;
					word[i+1]='a';
				}

			}
		}
	}
	if(qntA > 0 || qntB > 0){
		cout << qntA+qntB << endl;
		cout << word << endl;
	       	return 0;	
	}
	cout << 0 << endl;
	cout << word << endl;	
	return 0;	
}

