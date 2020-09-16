#include <bits/stdc++.h>

using namespace std;

int main (){
	vector<int> territorial;
	int flag;
	int sizing ,soma1=0, soma2=0 ;
	cin >> flag;
	for (int i=0; i<flag; i++){
		cin >> sizing;
		territorial.push_back(sizing);
		soma1 += sizing;
	}
	for (int i=0; i<flag; i++){
		soma2+=territorial[i];
		if(soma2 == soma1-soma2){
			cout << i+1 << endl;      		
		}	
	}
	return 0;
									
}

