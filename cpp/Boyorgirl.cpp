#include <bits/stdc++.h>

using namespace std;

#define MAX_CHAR 100

int main(){
	char array[MAX_CHAR] = {'0'};
	for (int r=0; r<MAX_CHAR; r++){
		array[r] = '0';
	}
	int tamanho = 0;
	int count = 0;
	int size =0;
	int num = 0;
	cin >> array;
	for (int l=0; l<MAX_CHAR; l++){
		if(array[l] != '0'){
			size++;
		}
	}
	for(int i=0; i<size; i++){

		for(int z=0; z<size; z++){
			if(i != z){
				if((array[i] == array[z]) && (array[i] != '0')){
					array[z] = '0';
					count++;
				}
			}
		}
	}
	cout << size << endl;
	cout << count << endl;
	num = (size-1) - count;
	if (num%2 == 0){
		cout << "CHAT WITH HER!";
	}else{
		cout << "IGNORE HIM!";
	}

	return 0;
}
