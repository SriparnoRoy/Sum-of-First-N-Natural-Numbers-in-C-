// Find The Sum Of First N Natural Numbers 
// Using --> For Loop
#include <iostream>
using namespace std;

int main()
{
    int num, i, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (i = 1; i <= num; ++i){
        sum = sum + i;
    }
    cout << "sum is: " << sum;
    return 0;
}

// Using--> While Loop
#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (i <= num) {
        sum += i;
        i++;
    }

    cout << "Sum is: " << sum;
    return 0;
}
