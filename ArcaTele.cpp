#include "ArcaTele.h"

using namespace ftxui;

int main() {
    std::string ServiziTesto;
    std::string ServiziDispTesto;
    std::string linguaTesto;
    std::vector<std::string> Lingue_disponibili = { "ITALIANO","ENGLISH","\u0420\u0423\u0421\u0421\u041A\u0418\u0419", };
    std::vector<std::string> Nazione = { "Italia", "Россия", "France" };
    std::vector<std::string> Servizi = { "","",""}; //Pre Tel, Prot Civ, Ospedali 
    std::string first_name;
    std::string ArcaTele;
    std::string map;
    int LinguaSelezionata = 0;
    int NazioneSelezionata = 0;
    int ServizioSelezionato = 0;
    int Tab_Sevizio_Sel = 0;


    std::ifstream map_ru(".\\map\\ru");
    std::string str_map_ru;
    
    std::ifstream map_it(".\\map\\it");
    std::string str_map_it;

    std::ifstream map_fr(".\\map\\fr");
    std::string str_map_fr;

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

    Component Lingua = Toggle(&Lingue_disponibili, &LinguaSelezionata);
    Component input_first_name = Input(&first_name, "first name");
    Component Toggle_Nazioni = Toggle(&Nazione, &NazioneSelezionata);


    auto Tab_Servizi = Container::Tab(
        {
            Radiobox(&Servizi, &ServizioSelezionato),
        },
        &Tab_Sevizio_Sel);


    auto container = Container::Vertical({
        Lingua,
        Toggle_Nazioni,
        Tab_Servizi,
        input_first_name,
        });


    auto renderer = Renderer(container, [&] {
        if (NazioneSelezionata == 0) {
            ArcaTele = "Programma per le informazioni geografiche standardizzate";
            map = str_map_it;
        }
        else if (NazioneSelezionata == 1) {
            map = str_map_ru;
        }
        else if (NazioneSelezionata == 2) {
            map = str_map_fr;
        }
        if (LinguaSelezionata == 0) {
            linguaTesto = "LINGUA        : ";
            ServiziTesto = "Servizi disponibili:";
            ServiziDispTesto = "Prefissi Telefonici\nProtezione Civile\nOspedali";
        }
        else if (LinguaSelezionata == 1) {
            linguaTesto = "LANGUAGE      : ";
            ServiziTesto = "Active Services:";
            ServiziDispTesto = "Telephone Prefixes\nCivil Protection\nHospitals";
        }
        else if (LinguaSelezionata == 2) {
            linguaTesto = "ЯЗЫК      : ";
            ServiziTesto = "Доступные услуги:";
            ServiziDispTesto = "Телефонные префиксы\nГражданская защита\nБольницы";
        }

        return gridbox({
            { text(ArcaTele) },
            {vbox(Toggle_Nazioni->Render(), filler() | border)},
            { separator() },
            { hbox(paragraph(map) | borderStyled(BorderStyle::DOUBLE), Tab_Servizi->Render(),  paragraph(ServiziDispTesto), filler() | border)},
            {  },
            { hbox(text(" First name : "), input_first_name->Render(), filler())},
            { filler() },
            { hbox(filler(), text(linguaTesto), Lingua->Render()) },
            { text("blink") | blink, text(" "), text("bgcolor") | bgcolor(Color::Blue), text(" ") },
            })
            | bgcolor(Color::RGB(0,35,140))  // Imposta sfondo blu globalmente
            | borderStyled(BorderStyle::DOUBLE) // Bordo squadrato e leggero
            | color(Color::White);  // Colore del testo bianco
        ;

        });

    auto screen = ScreenInteractive::TerminalOutput();
    screen.Loop(renderer);
    screen.Clear();
}
