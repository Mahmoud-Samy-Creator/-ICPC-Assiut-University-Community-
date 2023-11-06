#include <iostream>
using namespace std;

void say_hello(string name)
{
    cout << "Hello, " << name << endl;
}

int main()
{
    string name; 

    cin >> name;

    say_hello(name);

    return (0);
}