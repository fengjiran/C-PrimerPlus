#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string first_name;
    string last_name;
    cout << "What's your first name? ";
    getline(cin, first_name);

    cout << "What's your last name? ";
    getline(cin, last_name);

    char grade;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    grade = grade + 1;

    int age;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << last_name << ", "
         << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}