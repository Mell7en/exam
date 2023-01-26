#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;
class Person {
public:
    Person(string name, string gender) {
        this->name = name;
        this->gender = gender;
    }
    string getName() {
        return name;
    }
    string getGender() {
        return gender;
    }
private:
    string name;
    string gender;
};
int main()
{
    Person p("John","man");
    cout << p.getName() << " is " << p.getGender();
    string line;
    ifstream in("C:\\C++\\snake\\exam\\волосы.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();
    cout << "End of program" << std::endl;
    return 0;

}