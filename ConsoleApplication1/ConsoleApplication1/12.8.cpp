#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> maxValue;
vector<string>maxValue;
template <typename T>
T maxvalue(const T& value1, const T& value2)
{
	if (value1 > value2)
		return value1;
	else
		return value2;
}
int main(){
	cout << "maximum between 1 and 3 is" << maxValue(1, 3) << endl;
	cout << "maximum between 1.5 and 0.3 is" << maxValue(1.5, 0.3) << endl;
	cout << "maximum between A and N is" << maxValue('A','N') << endl;
	cout << "maximum between \"NBC\" and \"ABC\" is" << maxValue(string("NBC"),(string("ABC")) << endl;
	return 0;
}