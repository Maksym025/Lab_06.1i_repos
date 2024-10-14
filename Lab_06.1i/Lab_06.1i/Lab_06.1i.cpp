#include <iostream>
#include <time.h>
using namespace std;


void Create(int* b, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        b[i] = Low + rand() % (High - Low + 1);
    }
}


int CountElements(const int* b, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (b[i] % 2 != 0 && b[i] % 3 == 0) {
            count++;
        }
    }
    return count;
}


int SumElements(const int* b, const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (b[i] % 2 != 0 && b[i] % 3 == 0) {
            sum += b[i];
        }
    }
    return sum;
}


void ReplaceElements(int* b, const int size, int& count)
{
    count = 0; 
    for (int i = 0; i < size; i++)
    {
        if (b[i] % 2 != 0 && b[i] % 3 == 0)
        {
            b[i] = 0;
            count++; 
        }
    }
}


int main() {
    srand((unsigned)time(NULL)); 

    const int n = 21; 
    int b[n];
    int Low = 10;
    int High = 90;

   
    Create(b, n, Low, High);

  
    cout << "Start: ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    int count = CountElements(b, n);
    int sum = SumElements(b, n);

  
    ReplaceElements(b, n,count);

 
    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;

  
    cout << "Mod: ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
