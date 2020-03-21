#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	scanf("%d", &test);
	for(int i = 1; i <= test; i++){
		int arrayLength;
		scanf("%d", &arrayLength);
		
		int array[arrayLength];
		for(int j = 0; j < arrayLength; j++){
			scanf("%d", &array[j]);
		}
		
		sort(array, array+arrayLength, greater<int>());
		
		printf("%d", array[0]);
		for(int j = 1; j< arrayLength; j++){
			printf(" %d", array[j]);
		}
		printf("\n");
	}
	return 0;
}