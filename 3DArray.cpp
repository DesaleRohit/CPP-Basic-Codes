#include <iostream>
using namespace std;

int main() {
    int arr[2][3][2] = {
        {{1, 2}, {3, 4}, {5, 6}},
        {{7, 8}, {0, 9}, {0, 1}}
    };

    for (int i = 0; i < 2; i++) 
	{
        cout << "Layer " << i + 1 << ":" << endl;
        for (int j = 0; j < 3; j++) 
		{
            for (int k = 0; k < 2; k++) 
			{
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
