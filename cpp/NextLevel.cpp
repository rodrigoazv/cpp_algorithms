#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 0 , k = 0, sizing, flag=0;
	vector<int> notes;
	cin >> n;
	cin >> k;
	k = k-1;
	for(int i =0 ; i<n ; i++){
		cin>>sizing;
		notes.push_back(sizing);
	}	
	for(int j=0; j<n; j++){
		if(notes[j] > 0){
			if(notes[j]>=notes[k]){
				flag++;
			} 
		}
	}
	cout << flag<< endl;

}

