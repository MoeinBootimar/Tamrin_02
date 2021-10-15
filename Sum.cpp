#include <iostream>
using namespace std;
int main()
{
    float num , sum=0;
    string option;
    while(1)
    {
        cout << "enter number: ";
        cin >> num;
        sum += num;
        cout <<"wish to enter more numbers? (yes / exit)";
        cin >> option;
        if (option == "yes")
            continue;
        if (option == "exit")
            break;
    }
    cout << "here is the result: " << sum << endl;
    return 0;
}
