// ptitz2.cpp Prefissi Telefonici Italiani Zona 2 . cpp 
#include "ArcaTeleGlob.h"

void PreTelItZona2() {
    auto screen = ScreenInteractive::TerminalOutput();
    auto window_content = Renderer([&] {

        return gridbox({
            { text("Mappa del prefissi telefonici della zona 01 italiana e i suoi distretti")},
            {vbox({
            separator(),
            hbox(
                vbox(
                    hbox( //Riga 1
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph(";ΤΤ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("χω") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 2
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph(";Ϊλ΄;;νΪΓΓΤϊφ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("φΦΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΦψΦΪΦΪΪΜς") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 3
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪϊϊϊϊϊϊϊϊϊϊϊϊϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 4
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Γϊϊϊϊϊϊϊϊϊϊϊϊϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΦΪΪΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Ϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Φ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Ϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 5
                    paragraph("\n΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΅ώΪϊϊϊϊϊϊϊϊϊϊϊ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΪΪΪΪΪΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪω") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 6
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Τϊϊϊϊϊϊϊϊϊϊ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΝ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
					hbox( //Riga 7
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΓϊΊϊϊΊ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪφφΦΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΪΪΪΦΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Γ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
					hbox( //Riga 8
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΦΪΪΪΪΪΪΪΪΪΪ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΦΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ϊϊϊϊϊΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
					hbox( //Riga 9
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΪΪΪ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΓϊϊϊϊϊϊϊΪΫΊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
					),
					hbox( //Riga 10
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΫΪΪΪΪΪΪΪ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΦΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΦΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Γϊϊϊϊϊϊϊϊϊϊφ·") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
					),
					hbox( //Riga 11
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph(";;")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("εΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΪΦΦΦΪΪΪΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ϊϊϊϊϊϊϊϊϊϊϊΓ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
					),
					hbox( //Riga 12
                    paragraph("\n΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph(";νςν;ΓΪϊϊϊϊ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("φΦΦΦΦΦΪΪΪΪΪΪΪΪΪΪΪΪΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΓΤ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("φφφφΦΦΦΦφ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
					),
					hbox( //Riga 13
                    paragraph("\n΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΓϊϊϊϊϊϊΪΊΊΓ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪώ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
					),
					hbox( //Riga 14
                    paragraph("\n΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΅΅Γϊϊϊϊ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΦΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΦΦχχγΦΦ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
					),
					hbox( //Riga 15
                    paragraph("\n΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Γϊϊϊϊ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΪΪΪΪΪΪΪΪΪΦΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
					),
					hbox( //Riga 16
                    paragraph("\n΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΅ΤΓώ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪΪΪΪΦω") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
					),
					hbox( //Riga 17
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΙΪΪΪΪΪΪΪΪ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΦΦΦΦΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ϊΫ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΦΦΪΪΦΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),                    
                    paragraph("ΪΪ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΦχχ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
					),
					hbox( //Riga 18
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΊΪΊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ϊϊϊϊϊϊϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΪΪΪ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ϊϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),                    
                    paragraph("ΪΪΪΪΪΪΪΪ")| color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΦΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
					),
                    hbox( //Riga 19
                    paragraph("\n΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("βΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΓϊϊϊϊϊΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("φΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Ϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ϊϊϊϊϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΦΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 20
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph(";φ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ψ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Γϊϊϊϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΦΪΪΪΪΪΪΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ϊϊϊϊϊϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪφφΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΪφΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("Ϊψω") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ων") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 21
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΦΪΪΪΪΪΦΦΦΦΦΦΦΦΪΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΓϊϊϊΊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("φΦΪΪΪΪΪΪΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ψ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("Ί") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΦΦΦφφ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("Φ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ϊϊϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 22
                    paragraph("\n΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("φΪΪΪΪΪΪΪΪΪΪΪΪΪΪΦΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("Ϊ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("βΪΪΪΪΪΪΪΦΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ϊϊϊϊϊϊϊχ;") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ω;") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΑΦΦΦΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 23
                    paragraph("\n΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΦΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΪφ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΦΜ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΅΅΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΫξϊΓϊϊϊϊΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("ΦΪΪΦφΦΪΪΪΪΪΦω;") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 24
                    paragraph("\n΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΫΪΪΪΪΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪΪΪΪΪΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪΪΪΪΡ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("·") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΅ΫϊϊΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΦΪΪΪΪΪΪΪΪΪΪΪΆΫ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 25
                    paragraph("\n΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΅΅ΫΨΪΪΪΪΪΪΪΪΪΦΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΦΪΪΪΪΪΪΦ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
                    paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΅Ϋ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΦΪΪΪΪΪΪΪΪΪΦ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 26
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΤΫΫΦΆΫΫΫ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪφΪΪΪΪΦΫ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΡΫ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΆΦΪΪΪΪΪΪΪΦ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 27
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("Ϋ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΦΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΓϊϊϊΓ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΅ΨωΫΦΪΦΓ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 28
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΓϊϊΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΊΓϊ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 29
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("Ϊϊϊϊϊϊξ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΪΪΪΆ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 30
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΤϊϊϊϊϊϊϊΪ") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("ΪΡ΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 31
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("·΅·΅΅") | color(Color::RGB(c02R, c02G, c02B)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)),
					paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v5, v5, v5)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    ),
                    hbox( //Riga 32
                    paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v6, v6, v6)) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB))
                    )
                ),
                    filler() | borderEmpty,
                    filler() | borderEmpty,
                        vbox(
                        filler() | borderEmpty,
                        filler() | borderEmpty,
                                 paragraph("Distretto      Città"),
                                 filler() | borderEmpty,
                        paragraphAlignLeft("02             Milano") | color(Color::RGB(c02R, c02G, c02B)),
                        filler() | borderEmpty,
                        filler() | borderEmpty
                        )
                        ),
                  text("Q per uscire. || Backspace per ricolorare. || Scrvi il nome del distretto per selezionare. || a per Mod. Alto Contrasto.") | hcenter })}
            }) | bgcolor(Color::RGB(CZ2bgR, CZ2bgG, CZ2bgB)) | borderStyled(BorderStyle::DOUBLE) | color(Color::White);
        });

    // Aggiunto un evento per chiudere la finestra quando si preme Q o q 
    auto component = CatchEvent(window_content, [&](Event event) {
        if (event == Event::Character('a'))AltoContrasto = true;
        if (event == Event::Backspace)AltoContrasto = false;
        if (AltoContrasto == true) {
            c02R = 100, c02G = 255, c02B = 62;
        }  
        if (AltoContrasto == false) {
            c02R = 255, c02G = 255, c02B = 102;
        }  
        if (event == Event::Character('q') || event == Event::Character('Q')) screen.ExitLoopClosure()(); return true;
    });

    screen.Loop(component);  // Avvia il loop principale una volta sola

}
