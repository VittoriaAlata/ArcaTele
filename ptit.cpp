#include "ArcaTeleGlob.h"
#include "ptitl.h"
#include "ptitz1.h"

// Definisco la funzione PreTelIt che crea una nuova finestra
void PreTelIt(string&map_it_pretel) {
    auto screen = ScreenInteractive::TerminalOutput();
       
    auto window_content = Renderer([&] {
        //string mappa = map_it_pretel;

        return gridbox({
            { text("Mappa dei prefissi telefonici italiani")},
            {vbox({
            separator(),
            hbox(
                vbox(
            //paragraph(mappa) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)), //Mappa in BW
            hbox( //Riga 1
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph(";;;;ιΓ") | color(Color::RGB(cz4ir, cz4ig, cz4ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 2
            paragraph("\nίίίίίίίίίίίίίίίίίίίίίίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ιίΓΓΓΪΪΪΓίΓΓ;") | color(Color::RGB(cz4fr, cz4fg, cz4fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ίίίίίίίίίίί΄Mappa΄dei΄Pref.΄Telefonici΄ίίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 3
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph(";") | color(Color::RGB(cz3ir, cz3ig, cz3ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΤΓώ") | color(Color::RGB(cz3ir, cz3ig, cz3ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΓϊϊφφψΓώφΦψΪΪΪψψΦΦΓ") | color(Color::RGB(cz4ir, cz4ig, cz4ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄ITALIANI΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 4
            paragraph("\nίίίίίίίίίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("φΪ·ί;·;ΦωΤΪΓΓΪ") | color(Color::RGB(cz3fr, cz3fg, cz3fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΪΪΪΦΪχΪΓγΓΪΪΪχΓ") | color(Color::RGB(cz4fr, cz4fg, cz4fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ίίίίίίίίίίίίίίίίίίίίίίίίίίίίίίίίίίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 5
            paragraph("\n΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph(";") | color(Color::RGB(cz1ir, cz1ig, cz1ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph(";") | color(Color::RGB(cz1ir, cz1ig, cz1ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("φΪΪΪΦΓΫΪψχχφψΫΪ") | color(Color::RGB(cz3ir, cz3ig, cz3ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΫΪΪΫΓΪΪΦΫψΪψψΪΪΪΪκ") | color(Color::RGB(cz4ir, cz4ig, cz4ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 6
            paragraph("\nίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΓϊφΓΪΪΪΫΫ") | color(Color::RGB(cz1fr, cz1fg, cz1fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ψψΪΪίψΪΪβξφΦϊ") | color(Color::RGB(cz3fr, cz3fg, cz3fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΦψΪΪΪΪφφξφΪΫΫΫ΄ΐΓ") | color(Color::RGB(cz4fr, cz4fg, cz4fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ίίίίίίίίίίίίίίίίίίίίίίίίίίίίίίίίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 7
            paragraph("\n΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ϊχχΦΪΓΪΓΪ") | color(Color::RGB(cz1ir, cz1ig, cz1ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("φΪΪή") | color(Color::RGB(cz3ir, cz3ig, cz3ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("MI") | color(Color::RGB(cz2r, cz2g, cz2b)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("φφΦλψψφ") | color(Color::RGB(cz3ir, cz3ig, cz3ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪχφΪΫφΪφΓρΪΓ΅") | color(Color::RGB(cz4ir, cz4ig, cz4ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄ίί΄΄΄ίί΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 8
            paragraph("\nίί΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΓΪΪΪΪΓΓΫχ") | color(Color::RGB(cz1fr, cz1fg, cz1fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪψΫΪΪΪΪΪΪΪΪΪΪΪ") | color(Color::RGB(cz3fr, cz3fg, cz3fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪχΪφΪΪΪΓ΅") | color(Color::RGB(cz4fr, cz4fg, cz4fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄ίίί··ιί΄ίίίίίίίίίίίίίίίίίίίίίίίίίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 9
            paragraph("\n΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ϊΪΪχΓϊϊψβΪΪΪ") | color(Color::RGB(cz1ir, cz1ig, cz1ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪϊΪΪΓ") | color(Color::RGB(cz3ir, cz3ig, cz3ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ϊΪΐΪΫΫ΅") | color(Color::RGB(cz5ir, cz5ig, cz5ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("φΪΪξΰ") | color(Color::RGB(cz3ir, cz3ig, cz3ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪίΓίΪΫΓ") | color(Color::RGB(cz4ir, cz4ig, cz4ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄ί΄΄·΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 10
            paragraph("\nίίί·") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΪΪΪΪΪϊψψΪ") | color(Color::RGB(cz1fr, cz1fg, cz1fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("Ϊ") | color(Color::RGB(cz3ir, cz3ig, cz3ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΓΪΪΪΪφφχΓφφΦψφΪϊΪΫ΅") | color(Color::RGB(cz5fr, cz5fg, cz5fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄·ίίίίίίίίίίίίίίίίίίίίίίίίίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 11
            paragraph("\n΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ϊίΪϊϊίψΪΪΪΪΪΫΪϊΓ") | color(Color::RGB(cz1ir, cz1ig, cz1ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΓΪΪΪΪΓΪΪΓίΪΪΪΪΑΪψΓ") | color(Color::RGB(cz5ir, cz5ig, cz5ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄ι΄ί΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 12
            paragraph("\nίίί΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ϊΪίϊΪΪΪΪΪ") | color(Color::RGB(cz1fr, cz1fg, cz1fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ϊΫΪφ") | color(Color::RGB(cz1fr, cz1fg, cz1fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΪΦψξΪΆΓφΪψ;") | color(Color::RGB(cz5fr, cz5fg, cz5fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄S.Marino΄΄΄΄΄·΄ίίίίίίίίίίίίίίίίίίίίίίίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 13
            paragraph("\n΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("γφΦΰ΅") | color(Color::RGB(cz1ir, cz1ig, cz1ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪψΪΪΪΪΓΫΫϊΪίίίϊΪ") | color(Color::RGB(cz5ir, cz5ig, cz5ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("Τ;") | color(Color::RGB(cz7ir, cz7ig, cz7ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄·΄΄΄ί΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 14
            paragraph("\nίίίίίί΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ϊΪΫΪψΓΫΓΪΪΪΪΪ΅") | color(Color::RGB(cz5fr, cz5fg, cz5fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪϊΓΪψμμ") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄ίίίίίίίίίίίίίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 15
            paragraph("\n΄΄ί΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΫΓΪΪΪΪΪΪΪΪΪΪ΅") | color(Color::RGB(cz5ir, cz5ig, cz5ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪψΦΓΪΪΪΓ") | color(Color::RGB(cz7ir, cz7ig, cz7ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄·ι΄΄΄΄ί΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 16
            paragraph("\nίι΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("·ΦΓΪΪΪΪΪΪΪ΅") | color(Color::RGB(cz5fr, cz5fg, cz5fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΓΪΪΓΪΫΪΓ") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄···΄·ίίίίίίίίί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 17
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄ί΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("·ΫΪΐίϊΪΪΓϊ΅") | color(Color::RGB(cz5ir, cz5ig, cz5ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪίύφΪψΫΪ") | color(Color::RGB(cz7ir, cz7ig, cz7ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪ") | color(Color::RGB(cz8ir, cz8ig, cz8ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄ί΄΄ί") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 18
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄ιιίίί΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΅") | color(Color::RGB(cz5fr, cz5fg, cz5fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΤΪΪϊφ") | color(Color::RGB(cz5fr, cz5fg, cz5fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪφΪΪΪΪ") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("φΪΪΪΦμ") | color(Color::RGB(cz8fr, cz8fg, cz8fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄ί") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 19
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("··ϊ") | color(Color::RGB(cz5ir, cz5ig, cz5ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΫΓΪΫχχΪ") | color(Color::RGB(cz7ir, cz7ig, cz7ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΦΦΪΪΫψχ") | color(Color::RGB(cz8ir, cz8ig, cz8ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 20
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄ίίίίί΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("·") | color(Color::RGB(cz5fr, cz5fg, cz5fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪ") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΪ") | color(Color::RGB(cz6ir, cz6ig, cz6ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΓ") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪφΪΦψΪΪΪφΦχμ;΄;;;;;") | color(Color::RGB(cz8fr, cz8fg, cz8fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 21
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄ιί΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪROMAΪ") | color(Color::RGB(cz6fr, cz6fg, cz6fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("Ϊϊ") | color(Color::RGB(cz7ir, cz7ig, cz7ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ϊΪΪΦΦΪΪΪΪΪΪΦΪΦΦΪΪ΅") | color(Color::RGB(cz8ir, cz8ig, cz8ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 22
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄ίί΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪϊΪΪφ") | color(Color::RGB(cz6ir, cz6ig, cz6ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪϊΪΪΪ") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΪΪψβΦΪΪφψμ;΅") | color(Color::RGB(cz8fr, cz8fg, cz8fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 23
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄;΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ζΪζΨΪΫ") | color(Color::RGB(cz7ir, cz7ig, cz7ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΦΪψΦΦΦΦΪΪΪΦΦΦΦΪΦΪΪΜχγ;;΅") | color(Color::RGB(cz8ir, cz8ig, cz8ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 24
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ι") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("χψΓ;") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΅ΦΪβΪΪΦΪΦΦΪ") | color(Color::RGB(cz8fr, cz8fg, cz8fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪ") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΪΪΪΪΪχω;") | color(Color::RGB(cz8fr, cz8fg, cz8fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 25
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("χ;;ψΦΪΪΓΐΤ") | color(Color::RGB(cz7ir, cz7ig, cz7ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("·") | color(Color::RGB(cz8ir, cz8ig, cz8ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ίΪώΆΦΦΪΪ") | color(Color::RGB(cz8ir, cz8ig, cz8ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪϊΦΓ") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΦΦΪΪ") | color(Color::RGB(cz8ir, cz8ig, cz8ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΦΦΆβψ") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΦΦΪΦω") | color(Color::RGB(cz8ir, cz8ig, cz8ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 26
            paragraph("\n΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("·ΫΪΪΪΪΪΪΪΪΪ;") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΅ΪΪΪ") | color(Color::RGB(cz8fr, cz8fg, cz8fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪβψΓ") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΦ") | color(Color::RGB(cz8fr, cz8fg, cz8fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΐΪΪ") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΫΪΪΦΦ") | color(Color::RGB(cz8fr, cz8fg, cz8fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 27
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΫΪΪΪΪΪψΪΓ") | color(Color::RGB(cz7ir, cz7ig, cz7ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΫΪΪΦΪΪψψΪΦΪ") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΫΓΓ") | color(Color::RGB(cz8ir, cz8ig, cz8ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 28
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph(";ΪΪΪψΆΪΪΦ") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪψΦΪΓ") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 29
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΫϊΪΪΫΓΪ") | color(Color::RGB(cz7ir, cz7ig, cz7ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪξψΪΦκ;") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 30
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("χΪΪΪΪΪΪΪΓ") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΫΓΪΓΪΪΪΪ") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 31
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪφΓΪΪΪΪΪ") | color(Color::RGB(cz7ir, cz7ig, cz7ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪψψΪΪ") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 32
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΓΪΪΪΓ") | color(Color::RGB(cz7fr, cz7fg, cz7fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΓ") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 33
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("·") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΓΪΓ") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 34
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("·") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("··") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph(";") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph(";ΪΦΦζ") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 35
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph(";;Γ") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph(";χχΦΫΓ") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΦΪΦ") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 36
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("·") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("·γΓΪβψΪψψΪΪξφΪΦΪΪΪΪΪΓ") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 37
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΪΪφψΪψθΪψβΦΓψΫ") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 38
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΅ΫΪβψφΫΪΦΪΪΪΪω") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 39
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄ιι΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΫΐΫΪΪΪψΦψΦ") | color(Color::RGB(cz9fr, cz9fg, cz9fb)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 40
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄ίίίίίίίί΄΄΄΄·ι΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("ΪΪΪΪΪ") | color(Color::RGB(cz9ir, cz9ig, cz9ib)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB)),
            paragraph("΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 41
            paragraph("\nιι΄ιί΄ίι΄΄ιιιίί΄΄΄΄΄΄΄΄΄Γ΄·ί΄΄΄΄΄΄΄΄΄·΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 42
            paragraph("\nίίίίίίίίίίίίίίίίίίίίίίίίίίίί΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 43
            paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄·΄΄΄΄΄·΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            ),
            hbox( //Riga 44
            paragraph("\nίίίίίίίίίίίίίίίίίίίίίίίίίί΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄·΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            )
            //hbox( //Riga 45
            //paragraph("\n΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄ι΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v1, v1, v1)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            //),
            //hbox( //Riga 46
            //paragraph("\n·····························΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄΄") | color(Color::RGB(v2, v2, v2)) | bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))
            //)
            ),
            filler() | borderEmpty,
            filler() | borderEmpty,
                vbox(
                filler() | borderEmpty,
                filler() | borderEmpty,
                         paragraph("Zona    Colore       Città     Capoluoghi"),
                         filler() | borderEmpty,
                paragraphAlignLeft("1       Arancione    /////     Aosta - Torino - Genova") | color(Color::RGB(cz1ir, cz1ig, cz1ib)),
                separator(), filler() | borderEmpty,
                paragraphAlignLeft("2       Giallo       MILANO    Milano") | color(Color::RGB(cz2r, cz2g, cz2b)),
                separator(), filler() | borderEmpty,
                paragraphAlignLeft("3       Verde        /////     \\\\\\\\\\\\\\\\\\\\") | color(Color::RGB(cz3ir, cz3ig, cz3ib)),
                separator(), filler() | borderEmpty,
                paragraphAlignLeft("4       Rosa         \\\\\\\\\\     Venezia - Trento - Trieste") | color(Color::RGB(cz4ir, cz4ig, cz4ib)),
                separator(), filler() | borderEmpty,
                paragraphAlignLeft("5       Celeste      /////     Bologna - Firenze") | color(Color::RGB(cz5ir, cz5ig, cz5ib)),
                separator(), filler() | borderEmpty,
                paragraphAlignLeft("6       Giallo       ROMA      Roma") | color(Color::RGB(cz6ir, cz6ig, cz6ib)),
                separator(), filler() | borderEmpty,
                paragraphAlignLeft("7       Viola        /////     Perugia - Ancona - Cagliari") | color(Color::RGB(cz7ir, cz7ig, cz7ib)),
                separator(), filler() | borderEmpty,
                paragraphAlignLeft("8       Acquamarina  \\\\\\\\\\     L'Aquila - Campobasso - Napoli - Bari") | color(Color::RGB(cz8ir, cz8ig, cz8ib)),
                separator(), filler() | borderEmpty,
                paragraphAlignLeft("9       Blu          /////     Potenza - Catanzaro - Palermo") | color(Color::RGB(cz9ir, cz9ig, cz9ib)),
                separator(), filler() | borderEmpty
                ),
                filler() | borderEmpty
                ),
          text("Q per uscire. || Backspace per diselezionare. || 1 - 9 per selezionare zona su mappa. || F1 - F9 per aprire zona selezionata in una nuova finestra.") | hcenter })}
        })| bgcolor(Color::RGB(ZbgR, ZbgG, ZbgB))| borderStyled(BorderStyle::DOUBLE)| color(Color::White);
    });


    // Aggiunto un evento per chiudere la finestra quando si preme Q o q 
    auto component = CatchEvent(window_content, [&](Event event) {
        if (event == Event::Character('q') || event == Event::Character('Q')) screen.ExitLoopClosure()();
        if (event == Event::Character('1')) {
            cz1ir = 174, cz1ig = 124, cz1ib = 41;
            cz1fr = 178, cz1fg = 112, cz1fb = 27;
            cz2r = v2; cz2g = v2; cz2b = v2;
            cz3ir = v2; cz3ig = v2; cz3ib = v2;
            cz4ir = v2; cz4ig = v2; cz4ib = v2;
            cz5ir = v2; cz5ig = v2; cz5ib = v2;
            cz6ir = v2; cz6ig = v2; cz6ib = v2;
            cz7ir = v2; cz7ig = v2; cz7ib = v2;
            cz8ir = v2; cz8ig = v2; cz8ib = v2;
            cz9ir = v2; cz9ig = v2; cz9ib = v2;
            cz3fr = v1; cz3fg = v1; cz3fb = v1;
            cz4fr = v1; cz4fg = v1; cz4fb = v1;
            cz5fr = v1; cz5fg = v1; cz5fb = v1;
            cz6fr = v1; cz6fg = v1; cz6fb = v1;
            cz7fr = v1; cz7fg = v1; cz7fb = v1;
            cz8fr = v1; cz8fg = v1; cz8fb = v1;
            cz9fr = v1; cz9fg = v1; cz9fb = v1;
            cz1sel = true;
            cz2sel = false; cz3sel = false; 
            cz4sel = false; cz5sel = false;
            cz6sel = false; cz7sel = false; 
            cz8sel = false; cz9sel = false;
        }
        if (event == Event::F1 && cz1sel == true) PreTelItZona1(map_it_pretel);
        if (event == Event::Character('2')) {
            cz2r = 255, cz2g = 255, cz2b = 102;
            cz1ir = v2, cz1ig = v2, cz1ib = v2;
            cz3ir = v2; cz3ig = v2; cz3ib = v2;
            cz4ir = v2; cz4ig = v2; cz4ib = v2;
            cz5ir = v2; cz5ig = v2; cz5ib = v2;
            cz6ir = v2; cz6ig = v2; cz6ib = v2;
            cz7ir = v2; cz7ig = v2; cz7ib = v2;
            cz8ir = v2; cz8ig = v2; cz8ib = v2;
            cz9ir = v2; cz9ig = v2; cz9ib = v2;
            cz1fr = v1, cz1fg = v1, cz1fb = v1;
            cz3fr = v1; cz3fg = v1; cz3fb = v1;
            cz4fr = v1; cz4fg = v1; cz4fb = v1;
            cz5fr = v1; cz5fg = v1; cz5fb = v1;
            cz6fr = v1; cz6fg = v1; cz6fb = v1;
            cz7fr = v1; cz7fg = v1; cz7fb = v1;
            cz8fr = v1; cz8fg = v1; cz8fb = v1;
            cz9fr = v1; cz9fg = v1; cz9fb = v1;
            cz1sel = false;
            cz2sel = true; cz3sel = false;
            cz4sel = false; cz5sel = false;
            cz6sel = false; cz7sel = false;
            cz8sel = false; cz9sel = false;
        }
        if (event == Event::Character('3')) {
            cz3ir = 122, cz3ig = 247, cz3ib = 82;
            cz3fr = 93, cz3fg = 132, cz3fb = 28;
            cz2r = v2, cz2g = v2, cz2b = v2;
            cz1ir = v2, cz1ig = v2, cz1ib = v2;
            cz4ir = v2; cz4ig = v2; cz4ib = v2;
            cz5ir = v2; cz5ig = v2; cz5ib = v2;
            cz6ir = v2; cz6ig = v2; cz6ib = v2;
            cz7ir = v2; cz7ig = v2; cz7ib = v2;
            cz8ir = v2; cz8ig = v2; cz8ib = v2;
            cz9ir = v2; cz9ig = v2; cz9ib = v2;
            cz1fr = v1, cz1fg = v1, cz1fb = v1;
            cz4fr = v1; cz4fg = v1; cz4fb = v1;
            cz5fr = v1; cz5fg = v1; cz5fb = v1;
            cz6fr = v1; cz6fg = v1; cz6fb = v1;
            cz7fr = v1; cz7fg = v1; cz7fb = v1;
            cz8fr = v1; cz8fg = v1; cz8fb = v1;
            cz9fr = v1; cz9fg = v1; cz9fb = v1;
            cz1sel = false;
            cz2sel = false; cz3sel = true;
            cz4sel = false; cz5sel = false;
            cz6sel = false; cz7sel = false;
            cz8sel = false; cz9sel = false;
        }
        if (event == Event::Character('4')) {
            cz4ir = 154, cz4ig = 68, cz4ib = 109;
            cz4fr = 147, cz4fg = 16, cz4fb = 79;
            cz1ir = v2, cz1ig = v2, cz1ib = v2;
            cz2r  = v2, cz2g  = v2, cz2b  = v2;
            cz3ir = v2, cz3ig = v2, cz3ib = v2;
            cz5ir = v2; cz5ig = v2; cz5ib = v2;
            cz6ir = v2; cz6ig = v2; cz6ib = v2;
            cz7ir = v2; cz7ig = v2; cz7ib = v2;
            cz8ir = v2; cz8ig = v2; cz8ib = v2;
            cz9ir = v2; cz9ig = v2; cz9ib = v2;
            cz1fr = v1, cz1fg = v1, cz1fb = v1;
            cz3fr = v1, cz3fg = v1, cz3fb = v1;
            cz5fr = v1; cz5fg = v1; cz5fb = v1;
            cz6fr = v1; cz6fg = v1; cz6fb = v1;
            cz7fr = v1; cz7fg = v1; cz7fb = v1;
            cz8fr = v1; cz8fg = v1; cz8fb = v1;
            cz9fr = v1; cz9fg = v1; cz9fb = v1;
            cz1sel = false;
            cz2sel = false; cz3sel = false;
            cz4sel = true; cz5sel = false;
            cz6sel = false; cz7sel = false;
            cz8sel = false; cz9sel = false;
        }
        if (event == Event::Character('5')) {
            cz5ir = 53, cz5ig = 123, cz5ib = 154;
            cz5fr = 27, cz5fg = 101, cz5fb = 141;
            cz1ir = v2, cz1ig = v2, cz1ib = v2;
            cz2r = v2, cz2g = v2, cz2b = v2;
            cz3ir = v2, cz3ig = v2, cz3ib = v2;
            cz4ir = v2, cz4ig = v2, cz4ib = v2;
            cz6ir = v2; cz6ig = v2; cz6ib = v2;
            cz7ir = v2; cz7ig = v2; cz7ib = v2;
            cz8ir = v2; cz8ig = v2; cz8ib = v2;
            cz9ir = v2; cz9ig = v2; cz9ib = v2;
            cz1fr = v1, cz1fg = v1, cz1fb = v1;
            cz3fr = v1, cz3fg = v1, cz3fb = v1;
            cz4fr = v1, cz4fg = v1, cz4fb = v1;
            cz6fr = v1; cz6fg = v1; cz6fb = v1;
            cz7fr = v1; cz7fg = v1; cz7fb = v1;
            cz8fr = v1; cz8fg = v1; cz8fb = v1;
            cz9fr = v1; cz9fg = v1; cz9fb = v1;
            cz1sel = false;
            cz2sel = false; cz3sel = false;
            cz4sel = false; cz5sel = true;
            cz6sel = false; cz7sel = false;
            cz8sel = false; cz9sel = false;
        }
        if (event == Event::Character('6')) {
            cz6ir = 234, cz6ig = 228, cz6ib = 13;
            cz6fr = 148, cz6fg = 104, cz6fb = 63;
            cz1ir = v2, cz1ig = v2, cz1ib = v2;
            cz2r = v2, cz2g = v2, cz2b = v2;
            cz3ir = v2, cz3ig = v2, cz3ib = v2;
            cz4ir = v2, cz4ig = v2, cz4ib = v2;
            cz5ir = v2, cz5ig = v2, cz5ib = v2;
            cz7ir = v2; cz7ig = v2; cz7ib = v2;
            cz8ir = v2; cz8ig = v2; cz8ib = v2;
            cz9ir = v2; cz9ig = v2; cz9ib = v2;
            cz1fr = v1, cz1fg = v1, cz1fb = v1;
            cz3fr = v1, cz3fg = v1, cz3fb = v1;
            cz4fr = v1, cz4fg = v1, cz4fb = v1;
            cz5fr = v1, cz5fg = v1, cz5fb = v1;
            cz7fr = v1; cz7fg = v1; cz7fb = v1;
            cz8fr = v1; cz8fg = v1; cz8fb = v1;
            cz9fr = v1; cz9fg = v1; cz9fb = v1;
            cz1sel = false;
            cz2sel = false; cz3sel = false;
            cz4sel = false; cz5sel = false;
            cz6sel = true; cz7sel = false;
            cz8sel = false; cz9sel = false;
        }
        if (event == Event::Character('7')) {
            cz7ir = 121, cz7ig = 71, cz7ib = 131;
            cz7fr = 108, cz7fg = 48, cz7fb = 127;
            cz1ir = v2, cz1ig = v2, cz1ib = v2;
            cz2r = v2, cz2g = v2, cz2b = v2;
            cz3ir = v2, cz3ig = v2, cz3ib = v2;
            cz4ir = v2, cz4ig = v2, cz4ib = v2;
            cz5ir = v2, cz5ig = v2, cz5ib = v2;
            cz6ir = v2, cz6ig = v2, cz6ib = v2;
            cz8ir = v2; cz8ig = v2; cz8ib = v2;
            cz9ir = v2; cz9ig = v2; cz9ib = v2;
            cz1fr = v1, cz1fg = v1, cz1fb = v1;
            cz3fr = v1, cz3fg = v1, cz3fb = v1;
            cz4fr = v1, cz4fg = v1, cz4fb = v1;
            cz5fr = v1, cz5fg = v1, cz5fb = v1;
            cz6fr = v1, cz6fg = v1, cz6fb = v1;
            cz8fr = v1; cz8fg = v1; cz8fb = v1;
            cz9fr = v1; cz9fg = v1; cz9fb = v1;
            cz1sel = false;
            cz2sel = false; cz3sel = false;
            cz4sel = false; cz5sel = false;
            cz6sel = false; cz7sel = true;
            cz8sel = false; cz9sel = false;
        }
        if (event == Event::Character('8')) {
            cz8ir = 69, cz8ig = 131, cz8ib = 130;
            cz8fr = 21, cz8fg = 100, cz8fb = 92;
            cz1ir = v2, cz1ig = v2, cz1ib = v2;
            cz2r = v2, cz2g = v2, cz2b = v2;
            cz3ir = v2, cz3ig = v2, cz3ib = v2;
            cz4ir = v2, cz4ig = v2, cz4ib = v2;
            cz5ir = v2, cz5ig = v2, cz5ib = v2;
            cz6ir = v2, cz6ig = v2, cz6ib = v2;
            cz7ir = v2, cz7ig = v2, cz7ib = v2;
            cz9ir = v2; cz9ig = v2; cz9ib = v2;
            cz1fr = v1, cz1fg = v1, cz1fb = v1;
            cz3fr = v1, cz3fg = v1, cz3fb = v1;
            cz4fr = v1, cz4fg = v1, cz4fb = v1;
            cz5fr = v1, cz5fg = v1, cz5fb = v1;
            cz6fr = v1, cz6fg = v1, cz6fb = v1;
            cz7fr = v1, cz7fg = v1, cz7fb = v1;
            cz9fr = v1; cz9fg = v1; cz9fb = v1;
            cz1sel = false;
            cz2sel = false; cz3sel = false;
            cz4sel = false; cz5sel = false;
            cz6sel = false; cz7sel = false;
            cz8sel = true; cz9sel = false;
        }
        if (event == Event::Character('9')) {
            cz9ir = 80, cz9ig = 94, cz9ib = 135;
            cz9fr = 50, cz9fg = 63, cz9fb = 110;
            cz1ir = v2, cz1ig = v2, cz1ib = v2;
            cz2r = v2, cz2g = v2, cz2b = v2;
            cz3ir = v2, cz3ig = v2, cz3ib = v2;
            cz4ir = v2, cz4ig = v2, cz4ib = v2;
            cz5ir = v2, cz5ig = v2, cz5ib = v2;
            cz6ir = v2, cz6ig = v2, cz6ib = v2;
            cz7ir = v2, cz7ig = v2, cz7ib = v2;
            cz8ir = v2, cz8ig = v2, cz8ib = v2;
            cz1fr = v1, cz1fg = v1, cz1fb = v1;
            cz3fr = v1, cz3fg = v1, cz3fb = v1;
            cz4fr = v1, cz4fg = v1, cz4fb = v1;
            cz5fr = v1, cz5fg = v1, cz5fb = v1;
            cz6fr = v1, cz6fg = v1, cz6fb = v1;
            cz7fr = v1, cz7fg = v1, cz7fb = v1;
            cz8fr = v1, cz8fg = v1, cz8fb = v1;
            cz1sel = false;
            cz2sel = false; cz3sel = false;
            cz4sel = false; cz5sel = false;
            cz6sel = false; cz7sel = false;
            cz8sel = false; cz9sel = true;
        }
        if (event == Event::Backspace) {
            cz1ir = 174, cz1ig = 124, cz1ib = 41;
            cz1fr = 178, cz1fg = 112, cz1fb = 27;
            cz2r = 255, cz2g = 255, cz2b = 102;
            cz3ir = 122, cz3ig = 247, cz3ib = 82;
            cz3fr = 93, cz3fg = 132, cz3fb = 28;
            cz4ir = 154, cz4ig = 68, cz4ib = 109;
            cz4fr = 147, cz4fg = 16, cz4fb = 79;
            cz5ir = 53, cz5ig = 123, cz5ib = 154;
            cz5fr = 27, cz5fg = 101, cz5fb = 141;
            cz6ir = 234, cz6ig = 228, cz6ib = 13;
            cz6fr = 148, cz6fg = 104, cz6fb = 63;
            cz7ir = 121, cz7ig = 71, cz7ib = 131;
            cz7fr = 108, cz7fg = 48, cz7fb = 127;
            cz8ir = 69, cz8ig = 131, cz8ib = 130;
            cz8fr = 21, cz8fg = 100, cz8fb = 92;
            cz9ir = 80, cz9ig = 94, cz9ib = 135;
            cz9fr = 50, cz9fg = 63, cz9fb = 110;
            cz1sel = false;
            cz2sel = false; cz3sel = false;
            cz4sel = false; cz5sel = false;
            cz6sel = false; cz7sel = false;
            cz8sel = false; cz9sel = false;
        }
        //TODO: Aggiungere dentro if delle zone altri se, se Return viene premuto allora entra nella window della Zona selezionata
        return true;
    });
    screen.Clear();

    screen.Loop(component);  // Avvia il loop principale una volta sola

}
