#include "DiamondFunctionsCPP.h"
//n can be calculated like that: n = sizeof(YourArray[])/sizeof(YourArray[0]);
void pigeonholeSort(int array[], int n)
{
    int min = array[0], max = array[0];
    for (int i = 1; i < n; i++){
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max){
            max = array[i];
        }
    }
    int range = max - min + 1;
    vector<int> pigeonholes[range];

    for (int i = 0; i < n; i++)
        pigeonholes[array[i] - min].push_back(array[i]);

    int index = 0;
    for (int i = 0; i < range; i++)
    {
        vector<int>::iterator it;
        for (it = pigeonholes[i].begin(); it != pigeonholes[i].end(); ++it)
            array[index++]  = *it;
    }
}

void hello() {
    std::cout << "Hello, World!" << std::endl;
}
