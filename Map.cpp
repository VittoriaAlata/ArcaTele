#include "ArcaTeleGlob.h"

void Map(string& str_map_it, string& str_map_ru, string& str_map_fr, string& str_map_it_preftel) {
    //Input File Stream delle mappe mute delle Nazioni
    ifstream map_ru(".\\map\\ru"), map_it(".\\map\\it"), map_fr(".\\map\\fr");
    ofstream map_it_o("it_o");
    //Se i file esistono si trascrivono nelle stringhe
    if (map_ru && map_it && map_fr) {
        string line;
        while (getline(map_it, line)) str_map_it += line + "\n";
        map_it.close();
        while (getline(map_ru, line)) str_map_ru += line + "\n";
        map_ru.close();
        while (getline(map_fr, line)) str_map_fr += line + "\n";
        map_fr.close();
    }
    // Salva il contenuto di str_map_it in map_it_o
    map_it_o << str_map_it;
    map_it_o.close();
    //Mappe dei Prefissi Telefonici delle Nazioni
    ifstream map_it_preftel(".\\map\\it.pt.01");
    if (map_it_preftel) {
        string line;
        while (getline(map_it_preftel, line)) str_map_it_preftel += line + "\n";
        map_it_preftel.close();
    }
    //TODO: Aggiungere prefissi italiani e esteri (russia e francia) 
}