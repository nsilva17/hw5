#include <iostream>
#include <string>
using namespace std;
int linearShearch(const int list[], int key, int arraySize)
{
	for (int i = 0; i < arraySize; i++){
		if (key == list[i])
			return i;
	}
}
double linearSearch(const double list1[], double keya, double arraysize){
	for (int i = 0; i < arraysize; i++){
		if (keya == list1[i])
			return i;
	}
}
string LinearSearch(const string list2[], string keyb, string ArraySize){
	for (string i= 0; i < ArraySize; i++){
		if (keyb == list2[i])
			return i;
	}
}
int main(){
	
}