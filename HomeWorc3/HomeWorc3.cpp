#include <iostream>
using namespace std;

int main()
{	
	// DZ2
	{
		int a = 10, b;
		b = (a <= 21) ? (21 - a) : 2 * (21 - a);
		cout << b << endl;
	}
	//DZ3	
	{
	const int FILED = 3;
	int Array[FILED][FILED][FILED];
	for (int x = 0; x < FILED; x++) {
		for (int y = 0; y < FILED; y++) {
			for (int z = 0; z < FILED; z++) {
				Array[x][y][z] = (x + 1) + (x + 1) + (x + 1);
			}
		}
	}
	int* pArray = nullptr;
	pArray = &Array[1][1][1];
	cout << *pArray << endl;
	}
	//*DZ4
	{
		extern const int a;
		extern const int b;
		extern const int c;
		extern const int d;
		float f = a * (b + (float(c) / d));
		cout << f << endl;
	return 0;
	}
};