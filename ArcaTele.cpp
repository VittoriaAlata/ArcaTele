#include "ArcaTele.h"
#include "Map.h"
#include "pretelit.h"

using namespace ftxui;

int main() {
    Map(str_map_it, str_map_ru, str_map_fr, str_map_it_preftel);



    Component Lingua = Toggle(&Lingue_disponibili, &LinguaSelezionata);
    Component input_first_name = Input(&first_name, "first name");
    Component Toggle_Nazioni = Toggle(&Nazione, &NazioneSelezionata);

    auto Tab_Servizi_cell = Container::Tab(
        {
            Radiobox(&Servizi, &ServizioSelezionatocell),
        },
        &Tab_Sevizio_Sel
        );

    auto container = Container::Vertical({
        Toggle_Nazioni,
        Tab_Servizi_cell,
        input_first_name,
        Lingua,
    });

    auto renderer = Renderer(container, [&] {
        switch (NazioneSelezionata) {
        case 0:
            ArcaTele = "Programma per le informazioni geografiche standardizzate";
            map = str_map_it;
            ServizioSelezionato = ServizioSelezionatocell;
            break;
        case 1:
            map = str_map_ru;
            ServizioSelezionato1 = ServizioSelezionatocell;
            break;
        case 2:
            map = str_map_fr;
            ServizioSelezionato2 = ServizioSelezionatocell;
            break;
        default:
            break;
        }
        switch (LinguaSelezionata){
        case 0:
            linguaTesto = "LINGUA: ";
            ServiziTesto = "Servizi disponibili:";
            ServiziDispTesto = " \nPrefissi Telefonici\nProtezione Civile\nOspedali";
            break;
        case 1:
            linguaTesto = "LANGUAGE: ";
            ServiziTesto = "Active Services:";
            //Segnaposto e codici di escape per avere testo come stringa che varia con la scelta della lingua
            ServiziDispTesto = " \nTelephone Prefixes\nCivil Protection\nHospitals";
            break;
        case 2:
            linguaTesto = "ЯЗЫК: ";
            ServiziTesto = "Доступные услуги:";
            ServiziDispTesto = " \nТелефонные префиксы\nГражданская защита\nБольницы";
            break;
        default:
            break;
        }
        switch (ServizioSelezionato) { //Reindirizzamento a servizi italiani con switch
        case 1:
            //Rimanda alla funzione statica PreTelIt che contiene la finestra
            PreTelIt(str_map_it_preftel);
            //Quando si chiude la finestra si sottrae 1 a ServizioSelezionato così da uscire dal loop 
            //(Si ritornava semopre a PreTelIt poichè ServizioSelezionato era sempre 1)
            ServizioSelezionatocell--;
            break;
        default:
            break;
        }

        return gridbox({
            { text("ArcaTele") | bold | hcenter | bgcolor(Color::RGB(1,10,0)) | color(Color::CadetBlue) },
            { vbox(Toggle_Nazioni->Render(), filler() | border)},
            { separator()},
            { hbox(paragraph(map) | borderStyled(BorderStyle::DOUBLE), 
                vbox(text("") | border, paragraph(ServiziTesto),
                    hbox(Tab_Servizi_cell->Render(),paragraph(ServiziDispTesto), filler() | border)))
            },
            { hbox(text(" First name : "), input_first_name->Render(), filler(), text(linguaTesto), Lingua->Render())},
        })
              | bgcolor(Color::RGB(0,35,140))  // Imposta sfondo blu globalmente
              | borderStyled(BorderStyle::DOUBLE) // Bordo squadrato e leggero
              | color(Color::White);  // Colore del testo bianco
    });

    auto screen = ScreenInteractive::TerminalOutput();
    screen.Loop(renderer);
    screen.Clear();
}
