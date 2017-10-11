#include "iostream"
#include "map"

int main()
{
    std::map<int, std::string> map;

    map[0] = "Amogh";
    map[1] = "Computer Science";
    map[2] = "Algorithms";
    map[3] = "Data Structures";

    std::cout << map[2] <<" and " <<map[3] << '\n';

    map.insert(std::pair<int , std::string>(4," Map is Cool"));

    std::map<int, std::string>::iterator it;

    for (it=map.begin(); it!=map.end(); it++) {
        std::cout << it->first <<" ==> "<< it->second  << '\n';
    }

    std::map<int, std::string>::iterator it2 = map.find(0);
    std::cout << it2->second << '\n';

    map.erase(it2);
    for (it=map.begin(); it!=map.end(); it++) {
        std::cout << it->first <<" ==> "<< it->second  << '\n';
    }
}
