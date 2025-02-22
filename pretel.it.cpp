#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "ftxui/component/captured_mouse.hpp"
#include "ftxui/component/component.hpp"
#include "ftxui/component/component_base.hpp"
#include "ftxui/component/screen_interactive.hpp"
#include "ftxui/dom/elements.hpp"
#include <fstream>
#include "pretelit.h"

using namespace ftxui;

// Definisco la funzione PreTelIt che crea una nuova finestra
void PreTelIt(void) {
    auto screen = ScreenInteractive::TerminalOutput();
    auto window_content = Renderer([] {
        return gridbox({
            { text("Prefissi Telefonici Italiani")},
            {vbox({
            separator(),
            paragraph(""),
          text("Q per uscire.") | hcenter })}
        })
        | bgcolor(Color::RGB(5, 35, 130))  // Imposta sfondo blu globalmente
        | borderStyled(BorderStyle::DOUBLE) // Bordo squadrato e leggero
        | color(Color::White);  // Colore del testo bianco
    });

    // Aggiunto un evento per chiudere la finestra quando si preme Q o q 
    auto component = CatchEvent(window_content, [&](Event event) {
        if (event == Event::Character('q') || event == Event::Character('Q')) {
            screen.ExitLoopClosure()();
        }
        return true;
    });

    screen.Loop(component);
}
