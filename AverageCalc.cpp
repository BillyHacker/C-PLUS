#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, average;

    cout << "How Many Scores are there: ";
    cin >> n;

    while (n > 10 || n <= 9)
    {
        cout << "Error! number of Test scores should be 10)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Test Score: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}
