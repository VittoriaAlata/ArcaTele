#include <fstream>
#include <string>
#include <iostream>

void Map(std::string& str_map_it, std::string& str_map_ru, std::string& str_map_fr) {
    std::ifstream map_ru(".\\map\\ru");
    std::ifstream map_it(".\\map\\it");
    std::ifstream map_fr(".\\map\\fr");

    if (map_ru && map_it && map_fr) {
        std::string line;
        while (std::getline(map_it, line)) {
            str_map_it += line + "\n";
        }
        map_it.close();
        while (std::getline(map_ru, line)) {
            str_map_ru += line + "\n";
        }
        map_ru.close();
        while (std::getline(map_fr, line)) {
            str_map_fr += line + "\n";
        }
        map_fr.close();
    }
}
