#include "ArcaTeleGlob.h"
#include "PreTelitZona1Local.h"

// Definisco la funzione PreTelIt che crea una nuova finestra
void PreTelItZona1(string& map_it_pretel) {
    auto screen = ScreenInteractive::TerminalOutput();

    auto window_content = Renderer([&] {
        string mappa = map_it_pretel;

        return gridbox({
            { text("Mappa del prefissi telefonici della zona 01 italiana e i suoi distretti")},
            {vbox({
            separator(),
            hbox(
                vbox(
                    hbox( //Riga 1
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph(";ΤΤ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("χω") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 2
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph(";Ϊλ΄;;νΪΓΓΤϊφ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("φΦΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΦψΦΪΦΪΪΜς") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 3
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪϊϊϊϊϊϊϊϊϊϊϊϊϊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪ΅") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 4
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Γϊϊϊϊϊϊϊϊϊϊϊϊϊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΦΪΪΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΦΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΦ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    )
                    ),
                    filler() | borderEmpty,
                    filler() | borderEmpty,
                        vbox(
                        filler() | borderEmpty,
                        filler() | borderEmpty,
                                 paragraph("Zona       Colore           Città"),
                                 filler() | borderEmpty,
                        //paragraphAlignLeft("1          Arancione            ") | color(Color::RGB(_cz1ir, _cz1ig, _cz1ib)),
                        //separator(), filler() | borderEmpty,
                        //paragraphAlignLeft("2          Giallo            Milano  ") | color(Color::RGB(_cz2r, _cz2g, _cz2b)),
                        //separator(), filler() | borderEmpty,
                        //paragraphAlignLeft("3          Verde                 ") | color(Color::RGB(_cz3ir, _cz3ig, _cz3ib)),
                        //separator(), filler() | borderEmpty,
                        //paragraphAlignLeft("4          Rosa               ") | color(Color::RGB(_cz4ir, _cz4ig, _cz4ib)),
                        //separator(), filler() | borderEmpty,
                        //paragraphAlignLeft("5          Celeste              ") | color(Color::RGB(_cz5ir, _cz5ig, _cz5ib)),
                        //separator(), filler() | borderEmpty,
                        //paragraphAlignLeft("6          Giallo           Roma    ") | color(Color::RGB(_cz6ir, _cz6ig, _cz6ib)),
                        //separator(), filler() | borderEmpty,
                        //paragraphAlignLeft("7          Viola                 ") | color(Color::RGB(_cz7ir, _cz7ig, _cz7ib)),
                        //separator(), filler() | borderEmpty,
                        //paragraphAlignLeft("8          Acquamarina         ") | color(Color::RGB(_cz8ir, _cz8ig, _cz8ib)),
                        //separator(), filler() | borderEmpty,
                        //paragraphAlignLeft("9          Blu               ") | color(Color::RGB(_cz9ir, _cz9ig, _cz9ib)),
                        filler() | borderEmpty,
                        filler() | borderEmpty
                        )

                        ),
                  text("Q per uscire. || Backspace per ricolorare. || 1 - 9 per visualizzare zona su mappa. || F1 - F9 per aprire zona in nuova finestra.") | hcenter })}
            }) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)) | borderStyled(BorderStyle::DOUBLE) | color(Color::White);
        });


    // Aggiunto un evento per chiudere la finestra quando si preme Q o q 
    auto component = CatchEvent(window_content, [&](Event event) {
        if (event == Event::Character('q') || event == Event::Character('Q')) screen.ExitLoopClosure()();
        //TODO: Aggiungere dentro if delle zone altri se, se Return viene premuto allora entra nella window della Zona selezionata
        return true;
        });

    screen.Loop(component);  // Avvia il loop principale una volta sola

}
