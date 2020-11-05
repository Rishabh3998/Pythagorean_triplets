#include <iostream>
using namespace std;

int main()
{
    int sum = 1000;
    // list <int> entry;
    int entry[3] = {0};
    for (int a = 1; a < (sum / 3); a++)
    {
        for (int b = a + 1; b < (sum / 2); b++)
        {
            int c = sum - a - b;
            if (a * a + b * b == c * c)
            {
                entry[0] = a;
                entry[1] = b;
                entry[2] = c;
            }
        }
    }

    cout << "The value of a is " << entry[0] << endl;
    cout << "The value of b is " << entry[1] << endl;
    cout << "The value of c is " << entry[2] << endl;

    cout << entry[0] * entry[1] * entry[2];

    return 0;
}