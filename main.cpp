#include "head.h"

// W tej wersji postaram siê zaimplementowaæ sprawdzenie,
//czy spacer wystarczy na okreœlon¹ przez u¿ytkownika iloœæ minut

int main()
{
    std::cout << std::boolalpha << isValidWalk(inputArray());
    return 0;
}

std::vector<char> inputArray() {
    int d; char temp; std::cout << "Input array size: " << std::endl; std::cin >> d;
    std::vector<char> vec; std::cout << "Input array elements: " << std::endl;
    for (int i = 0; i < d; i++) { std::cin >> temp; vec.push_back(temp); }
    return vec;
}

// wystêpuje nieparzyst¹ liczbê razy. Liczba taka wystepuje tylko raz
bool isValidWalk(const std::vector<char>& walk) {
    int vertical = 0, horizontal = 0;
    for (int i = 0; i < walk.size(); i++) {
        switch (walk[i]) {
        case 'n': vertical++; break;
        case 's': vertical--; break;
        case 'e': horizontal++; break;
        case 'w': horizontal--; break;
        default: break;
        }
    }
    if (vertical == 0 && horizontal == 0 && static_cast<int>(walk.size()) == 10) {
        return true;
    }
    return false;
}