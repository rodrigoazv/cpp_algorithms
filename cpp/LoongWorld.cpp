#include <bits/stdc++.h>

using namespace std;

int main (){
	vector<string> myArray;
	int flag;
	string data;
	cin >> flag;
	for (int a=0; a<flag; a++){
		cin >> data;
		myArray.push_back(data);
	}
	for (int a=0; a< flag; a++){
		if(myArray[a].length() >= 10)
			cout << myArray[a][0] << myArray[a].length() - 2 << myArray[a][myArray[a].length() - 1] <<endl; 
		else 
			cout << myArray[a] << endl;
	}
	return 0;
	
}
