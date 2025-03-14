//------------------------------------
//IMPOSTAZIONI-----------PREPROCESSORE
#pragma once
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
using namespace ftxui;
using namespace std;

//IMPOSTAZIONI E DEFINIZIONI PRIMARIE

	//COLORI MENU PRINCIPALE
	//DEFINIZIONE Background rosso ,verde, blu
    extern int bgR, bgG, bgB; 

    //COLORI, BOOL ZONE MAPPA ITALIA

    //DEFINIZIONE Colore Zona 1 Iniziale e Finale rosso, verde, blu
    extern int cz1ir, cz1ig, cz1ib,
               cz1fr, cz1fg, cz1fb;
    //DEFINIZIONE Colore Zona 2 rosso, verde, blu
    extern int cz2r, cz2g, cz2b;
    //DEFINIZIONE Colore Zona 3 Iniziale e Finale rosso, verde, blu
    extern int cz3ir, cz3ig, cz3ib,
               cz3fr, cz3fg, cz3fb;
    //DEFINIZIONE Colore Zona 4 Iniziale e Finale rosso, verde, blu
    extern int cz4ir, cz4ig, cz4ib,
               cz4fr, cz4fg, cz4fb;
    //DEFINIZIONE Colore Zona 5 Iniziale e Finale rosso, verde, blu
    extern int cz5ir, cz5ig, cz5ib,
               cz5fr, cz5fg, cz5fb;
    //DEFINIZIONE Colore Zona 6 Iniziale e Finale rosso, verde, blu
    extern int cz6ir, cz6ig, cz6ib,
               cz6fr, cz6fg, cz6fb;
    //DEFINIZIONE Colore Zona 7 Iniziale e Finale rosso, verde, blu
    extern int cz7ir, cz7ig, cz7ib,
               cz7fr, cz7fg, cz7fb;
    //DEFINIZIONE Colore Zona 8 Iniziale e Finale rosso, verde, blu
    extern int cz8ir, cz8ig, cz8ib,
               cz8fr, cz8fg, cz8fb;
    //DEFINIZIONE Colore Zona 9 Iniziale e Finale rosso, verde, blu
    extern int cz9ir, cz9ig, cz9ib,
               cz9fr, cz9fg, cz9fb;
    //DEFINIZIONE Vuoto 1 ` & Vuoto 2 ί
    extern int v1, v2;
    //DEFINIZIONE Background rosso ,verde, blu
    extern int ZbgR, ZbgG, ZbgB; 
    //DEFINIZIONE Bool di selezione della Zona FALSE
    extern bool cz1sel, cz2sel, cz3sel, cz4sel, cz5sel, cz6sel, cz7sel, cz8sel, cz9sel;

    //COLORI ZONE & DISTRETTI

    //DEFINIZIONE Colore Distretti 01, rosso, verde, blu
    extern int c0165R, c0165G, c0165B,
               c0166R, c0166G, c0166B,
               c0125R, c0125G, c0125B;
    ////DEFINIZIONE Vuoto Colore Grigio Zona 01
    extern int v3, v4;
    //DEFINIZIONE Colore Zona 01 Background rosso, verde, blu
    extern int CZ1bgR, CZ1bgG, CZ1bgB;

    //DEFINIZIONE Colore Zona 02, rosso, verde, blu
    extern int c02R, c02G, c02B; 
    //DEFINIZIONE Vuoto Colore Grigio Zona 02
    extern int v5, v6;
    //DEFINIZIONE Colore Zona 02 Background rosso, verde, blu
    extern int CZ2bgR, CZ2bgG, CZ2bgB;

    //ALTO CONTRASTO
    //DEFINIZIONE AltoContrasto
    extern bool AltoContrasto;
    //DEFINIZIONE ALTO CONTRASTO ZONA 1                             
    extern int AC01sz1R,  AC01sz1G, AC01sz1B;
    extern int AC01sz2R,  AC01sz2G, AC01sz2B;
    extern int AC01sz3R, AC01sz3G,  AC01sz3B;
    extern int AC01sz4R, AC01sz4G, AC01sz4B;   
    //DEFINIZIONE ALTO CONTRASTO ZONA 2   
    extern int AC02R, AC02G, AC02B;

	//COLORI AGGIUNTIVI PER DISTRETTI

	//DEFINIZIONE Colore Zona 1 Distretti
		extern int Light_SalmonR,Light_SalmonG,Light_SalmonB;
		extern int CoralR,CoralR,CoralB;
		extern int TomatoR,TomatoG,TomatoB;
