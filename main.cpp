#include <iostream>
#include <string>

using namespace std;
int main()
{
    string firstName;
    cout << "Type your first name: ";
    getline(cin, firstName);
    cout << "Your name is: " << firstName << endl;
    return 0;
}