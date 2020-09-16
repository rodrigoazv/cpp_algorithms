#include <bits/stdc++.h>

using namespace std;

int main (){
	//matrix
	vector<vector<int>> matrix;
	int n;
	cin >> n;
	int flag = 0, sum = 0;
	for( int i = 0; i<n ; i ++){
		vector<int> myvector;
		for(int j= 0 ; j < 3 ; j++){
			int val  = 0;
			cin >> val;
			myvector.push_back(val);
		}
		matrix.push_back(myvector);
	}
	for(int i = 0; i<n; i++){
		for(int j=0; j<3 ; j++){	
			 sum = sum + matrix[i][j];
		}	
		if(sum >=2){
			flag++;
		}
		sum = 0;
	}
	cout << flag << endl;
}


