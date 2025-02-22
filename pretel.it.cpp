// pretel.it.cpp
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <string>

using namespace ftxui;

// Definisco la funzione PreTelIt che crea una nuova finestra
static void PreTelIt() {
    auto screen = ScreenInteractive::TerminalOutput();

    auto window_content = Renderer([] {
        return window(text("Prefissi Telefonici Italiani"), vbox({
          text("Italia: +39"),
          text("USA: +1"),
          text("UK: +44"),
          separator(),
          text("Q per uscire.") | hcenter,
        }) | vcenter);
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
