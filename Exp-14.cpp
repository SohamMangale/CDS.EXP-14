//soham
//entc B1
//23070123084
//experiment 14
#include <iostream>
#include <string>
using namespace std;

class Uni
{
public:
    string uni = "subham: ";
    void discipline() 
    {
        cout << "Engineering" << endl;
    }
};

class Dep : public Uni {
public:
    string dept = "Electronics & Tele-Communication";
};

int main() {
    Dep u1;
    u1.discipline();
    cout << u1.uni + u1.dept << endl;
    return 0;
}
