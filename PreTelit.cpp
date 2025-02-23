#include "ArcaTeleGlob.h"

using namespace ftxui;

// Definisco la funzione PreTelIt che crea una nuova finestra
void PreTelIt(std::string&map_it_pretel) {
    auto screen = ScreenInteractive::TerminalOutput();
    auto window_content = Renderer([&] {
        std::string mappa = map_it_pretel;
        return gridbox({
            { text("Prefissi Telefonici Italiani")},
            {vbox({
            separator(),
            paragraph(mappa),
          text("Q per uscire.") | hcenter })}
        })| bgcolor(Color::RGB(5, 35, 130))| borderStyled(BorderStyle::DOUBLE)| color(Color::White);
    });
    // Aggiunto un evento per chiudere la finestra quando si preme Q o q 
    auto component = CatchEvent(window_content, [&](Event event) {
        if (event == Event::Character('q') || event == Event::Character('Q')) {screen.ExitLoopClosure()();}
        return true;});
    screen.Loop(component);
}
