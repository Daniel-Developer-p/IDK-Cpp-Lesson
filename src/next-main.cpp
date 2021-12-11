#include <string>
#include <iostream>
#include <vector>

int main() {


    /*
    Windows

    setlocale(LC_ALL, "ru_RU.UTF-8");
    std::wstring hello = L"Привет Мир!";
    std::wcout << hello << std::endl;
    */

    /*
    Mac and Linux:

    const char* hello = "Привет Мир!";
    std::cout << hello << std::endl;
    */

    /*
    std::string heystack = "Хлеб - хлебобулочное изделие, "
        "получаемое путём выпикания теста "
        "(состоящего как минимум из муки и воды), "
        "разрыхлённогодрожжами или закваской";
    std::string needle = "хлеб";
    int position = heystack.find(needle);
    std::string bread = heystack.substr(position, 13);
    std::cout << bread << std::endl;
    */

    std::vector<std::string> cats;
    std::cout << "Введите Клички Ваших Домашних Животных через запятую:" << std::endl;
    std::string names;
    std::cin >> names;
    
    while(names.size() > 0) {
        int pos = names.find(",");
        if (pos == -1) {
            cats.push_back(names);
            names = "";
        } else {
            std::string cat = names.substr(0, pos);
            cats.push_back(cat);
            names = names.substr(pos + 1);
        }
    };

    for (std::string cat : cats) {
        std::cout << "Привет, " << cat << "!" << std::endl;
    }
    return 0;
}
