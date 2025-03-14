// ptitz1.cpp Prefissi Telefonici Italiani Zona 1 . cpp 
#include "ptitz1l.h"
/*
-------------------------------------------
Colore Zona 01 Alto Contrasto
-------------------------------------------
Subzona 1   Blu
Subzona 2   Verde
Subzona 3   Magente
Subzona 4   Arancione
*/
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
                    paragraph(";ΤΤ") | color(Color::RGB(c0165R, c0165G, c0165B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("χω") | color(Color::RGB(c0166R, c0166G, c0166B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 2
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph(";Ϊλ΄;;νΪΓΓΤϊφ") | color(Color::RGB(c0165R, c0165G, c0165B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("φΦΪΪ") | color(Color::RGB(c0166R, c0166G, c0166B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΦψΦΪΦΪΪΜς") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 3
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪϊϊϊϊϊϊϊϊϊϊϊϊϊ") | color(Color::RGB(c0165R, c0165G, c0165B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪ") | color(Color::RGB(c0166R, c0166G, c0166B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪ΅") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 4
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Γϊϊϊϊϊϊϊϊϊϊϊϊϊ") | color(Color::RGB(c0165R, c0165G, c0165B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΦΪΪΦ") | color(Color::RGB(c0166R, c0166G, c0166B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Ϊ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Φ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Ϊ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΦ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 5
                    paragraph("\n΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΅ώΪϊϊϊϊϊϊϊϊϊϊϊ")| color(Color::RGB(c0165R, c0165G, c0165B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΪΪΪΪΪΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪω") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 6
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Τϊϊϊϊϊϊϊϊϊϊ")| color(Color::RGB(c0165R, c0165G, c0165B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΝ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
					hbox( //Riga 7
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΓϊΊϊϊΊ")| color(Color::RGB(c0165R, c0165G, c0165B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪφφΦΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΪΪΪΦΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Γ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
					hbox( //Riga 8
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΦΪΪΪΪΪΪΪΪΪΪ")| color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΦΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ϊϊϊϊϊΪ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
					hbox( //Riga 9
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΪΪΪ")| color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΓϊϊϊϊϊϊϊΪΫΊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
					),
					hbox( //Riga 10
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΫΪΪΪΪΪΪΪ")| color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΦΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΦΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Γϊϊϊϊϊϊϊϊϊϊφ·") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
					),
					hbox( //Riga 11
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph(";;")| color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("εΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΪΦΦΦΪΪΪΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ϊϊϊϊϊϊϊϊϊϊϊΓ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
					),
					hbox( //Riga 12
                    paragraph("\n΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph(";νςν;ΓΪϊϊϊϊ")| color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("φΦΦΦΦΦΪΪΪΪΪΪΪΪΪΪΪΪΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΓΤ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("φφφφΦΦΦΦφ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
					),
					hbox( //Riga 13
                    paragraph("\n΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΓϊϊϊϊϊϊΪΊΊΓ")| color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪώ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
					),
					hbox( //Riga 14
                    paragraph("\n΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΅΅Γϊϊϊϊ")| color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΦΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΦΦχχγΦΦ΅") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
					),
					hbox( //Riga 15
                    paragraph("\n΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Γϊϊϊϊ")| color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΪΪΪΪΪΪΪΪΪΦΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
					),
					hbox( //Riga 16
                    paragraph("\n΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΅ΤΓώ")| color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪΪΪΪΦω") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
					),
					hbox( //Riga 17
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΙΪΪΪΪΪΪΪΪ")| color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΦΦΦΦΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ϊΫ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪ")| color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΦΦΪΪΦΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),                    
                    paragraph("ΪΪ")| color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΦχχ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
					),
					hbox( //Riga 18
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪ")| color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΊΪΊ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ϊϊϊϊϊϊϊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΪΪΪ")| color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ϊϊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),                    
                    paragraph("ΪΪΪΪΪΪΪΪ")| color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΦΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
					),
                    hbox( //Riga 19
                    paragraph("\n΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("βΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΓϊϊϊϊϊΪ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("φΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ϊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Ϊ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ϊϊϊϊϊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΦΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 20
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph(";φ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ψ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Γϊϊϊϊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΦΪΪΪΪΪΪΦ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ϊϊϊϊϊϊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪφφΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΪφΦ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("Ϊψω") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ων") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 21
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΦΪΪΪΪΪΦΦΦΦΦΦΦΦΪΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΓϊϊϊΊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("φΦΪΪΪΪΪΪΦ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ψ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("Ί") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΦΦΦφφ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("Φ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ϊϊϊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 22
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("φΪΪΪΪΪΪΪΪΪΪΪΪΪΪΦΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("Ϊ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("βΪΪΪΪΪΪΪΦΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ϊϊϊϊϊϊϊχ;") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ω;") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΑΦΦΦΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 23
                    paragraph("\n΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΦΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΪφ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΦΜ΅") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΅΅΅") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΫξϊΓϊϊϊϊΪ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("ΦΪΪΦφΦΪΪΪΪΪΦω;") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 24
                    paragraph("\n΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΫΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΦ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪΪΪΪΡ΅") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("·") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΅ΫϊϊΪ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΦΪΪΪΪΪΪΪΪΪΪΪΆΫ΅") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 25
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΅΅ΫΨΪΪΪΪΪΪΪΪΪΦΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΦΪΪΪΪΪΪΦ΅") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΅Ϋ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΦΪΪΪΪΪΪΪΪΪΦ΅") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 26
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΤΫΫΦΆΫΫΫ΅") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪφΪΪΪΪΦΫ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΡΫ΅") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΆΦΪΪΪΪΪΪΪΦ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 27
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("Ϋ") | color(Color::RGB(cz01sz3R, cz01sz3G, cz01sz3B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΦΪΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΓϊϊϊΓ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΅ΨωΫΦΪΦΓ") | color(Color::RGB(cz01sz2R, cz01sz2G, cz01sz2B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 28
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΓϊϊΪ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪΪ") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΊΓϊ΅") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 29
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("Ϊϊϊϊϊϊξ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΪΪΪΆ΅") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 30
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΤϊϊϊϊϊϊϊΪ") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("ΪΡ΅") | color(Color::RGB(cz01sz4R, cz01sz4G, cz01sz4B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 31
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("·΅·΅΅") | color(Color::RGB(cz01sz1R, cz01sz1G, cz01sz1B)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v3, v3, v3)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    ),
                    hbox( //Riga 32
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v4, v4, v4)) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB))
                    )
                ),
                    filler() | borderEmpty,
                    filler() | borderEmpty,
                        vbox(
                        filler() | borderEmpty,
                        filler() | borderEmpty,
                                 paragraph("Distretto      Città"),
                                 filler() | borderEmpty,
                        paragraphAlignLeft("0165           Aosta") | color(Color::RGB(c0165R, c0165G, c0165B)),
                        paragraphAlignLeft("0166           Saint-Vincent") | color(Color::RGB(c0166R, c0166G, c0166B)),
                        paragraphAlignLeft("0125           Ivrea") | color(Color::RGB(c0125R, c0125G, c0125B)),
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
                  text("Q per uscire. || Backspace per ricolorare. || Scrvi il nome del distretto per selezionare. || a per Mod. Alto Contrasto.") | hcenter })}
            }) | bgcolor(Color::RGB(CZ1bgR, CZ1bgG, CZ1bgB)) | borderStyled(BorderStyle::DOUBLE) | color(Color::White);
        });

    // Aggiunto un evento per chiudere la finestra quando si preme Q o q 
    auto component = CatchEvent(window_content, [&](Event event) {
        if (event == Event::Character('a'))AltoContrasto = true;
        if (event == Event::Backspace)AltoContrasto = false;
        if (AltoContrasto == true) {
			c0165R = cz01sz1R, c0165G = cz01sz1G, c0165B = cz01sz1B;
			c0166R = cz01sz2R, c0166G = cz01sz2G, c0166B = cz01sz2B;
			c0125R = cz01sz3R, c0125G = cz01sz3G, c0125B = cz01sz3B;
        }  
        if (AltoContrasto == false) {
			c0165R = Light_SalmonR, c0165G = Light_SalmonG, c0165B = Light_SalmonB;
			c0166R = CoralR, c0166G = CoralR, c0166B = CoralB;
			c0125R = TomatoR, c0125G = TomatoG, c0125B = TomatoB;
        }  
        if (event == Event::Character('q') || event == Event::Character('Q')) screen.ExitLoopClosure()(); return true;
    });

    screen.Loop(component);  // Avvia il loop principale una volta sola

}
