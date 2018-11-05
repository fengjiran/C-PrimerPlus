#include <iostream>
struct infatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    infatable bouquet =
        {
            "sunflowers",
            0.20,
            12.49};
    infatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    return 0;
}