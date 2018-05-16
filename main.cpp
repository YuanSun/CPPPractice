#include <iostream>
#include <vector>

using namespace std;

class AnimalNumber{
private:
    int my_num;
public:
    AnimalNumber(int x) {
        this->my_num = x;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;

    vector<AnimalNumber> v;
    AnimalNumber an1(5);
    AnimalNumber an2(10);
    v.push_back(an1);
    v.push_back(an2);
    v.erase(v.begin() + 1);
    return 0;
}