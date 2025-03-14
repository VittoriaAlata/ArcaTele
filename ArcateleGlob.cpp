#include "ArcaTeleGlob.h"
//IMPOSTAZIONI E ASSEGNAZIONI PRIMARIE

    //COLORI, BOOL ZONE MAPPA ITALIA

    //ASSEGNAZIONE Colore Zona 1 Iniziale e Finale rosso, verde, blu
    int cz1ir = 174, cz1ig = 124, cz1ib = 41,
        cz1fr = 178, cz1fg = 112, cz1fb = 27;
    //ASSEGNAZIONE Colore Zona 2 rosso, verde, blu
    int cz2r = 255, cz2g = 255, cz2b = 102;
    //ASSEGNAZIONE Colore Zona 3 Iniziale e Finale rosso, verde, blu
    int cz3ir = 122, cz3ig = 247, cz3ib = 82,
        cz3fr = 93, cz3fg = 132, cz3fb = 28;
    //ASSEGNAZIONE Colore Zona 4 Iniziale e Finale rosso, verde, blu
    int cz4ir = 154, cz4ig = 68, cz4ib = 109,
        cz4fr = 147, cz4fg = 16, cz4fb = 79;
    //ASSEGNAZIONE Colore Zona 5 Iniziale e Finale rosso, verde, blu
    int cz5ir = 53, cz5ig = 123, cz5ib = 154,
        cz5fr = 27, cz5fg = 101, cz5fb = 141;
    //ASSEGNAZIONE Colore Zona 6 Iniziale e Finale rosso, verde, blu
    int cz6ir = 234, cz6ig = 228, cz6ib = 13,
        cz6fr = 148, cz6fg = 104, cz6fb = 63;
    //ASSEGNAZIONE Colore Zona 7 Iniziale e Finale rosso, verde, blu
    int cz7ir = 121, cz7ig = 71, cz7ib = 131,
        cz7fr = 108, cz7fg = 48, cz7fb = 127;
    //ASSEGNAZIONE Colore Zona 8 Iniziale e Finale rosso, verde, blu
    int cz8ir = 69, cz8ig = 131, cz8ib = 130,
        cz8fr = 21, cz8fg = 100, cz8fb = 92;
    //ASSEGNAZIONE Colore Zona 9 Iniziale e Finale rosso, verde, blu
    int cz9ir = 80, cz9ig = 94, cz9ib = 135,
        cz9fr = 50, cz9fg = 63, cz9fb = 110;
    //ASSEGNAZIONE Vuoto 1 ` & Vuoto 2 ί
    int v1 = 40, v2 = 80;
    //ASSEGNAZIONE Background rosso ,verde, blu
    int ZbgR = 0, ZbgG = 2, ZbgB = 30; 
    //ASSEGNAZIONE Bool di selezione della Zona FALSE
    bool cz1sel = false, cz2sel = false, cz3sel = false, cz4sel = false, cz5sel = false, cz6sel = false, cz7sel = false, cz8sel = false, cz9sel = false;

    //COLORI ZONE & DISTRETTI

    #include "ptitz1c.h"
    //ASSEGNAZIONE Colore Distretti 01, rosso, verde, blu
    int c0165R = Light_SalmonR, c0165G = Light_SalmonG, c0165B = Light_SalmonB,
        c0166R = CoralR, c0166G = CoralR, c0166B = CoralB,
        c0125R = TomatoR, c0125G = TomatoG, c0125B = TomatoB;
    //ASSEGNAZIONE Vuoto Colore Grigio Zona 01
    int v3 = 40, v4 = 80;
    //Color Zone 1 Background rosso,verde,blu
    int CZ1bgR = 0, CZ1bgG = 40, CZ1bgB = 30;

    //ASSEGNAZIONE Colore Zona 02, rosso, verde, blu
    int c02R = 255, c02G = 255, c02B = 102; 
    //ASSEGNAZIONE Vuoto Colore Grigio Zona 02
    int v5 = 40, v6 = 80;
    //ASSEGNAZIONE Colore Zona 02 Background rosso, verde, blu
    int CZ2bgR = 0, CZ2bgG = 90, CZ2bgB = 30;


    //ALTO CONTRASTO
    bool AltoContrasto = false;
    //ASSEGNAZIONE ALTO CONTRASTO ZONA 1                             
    int AC01sz1R = 80,  AC01sz1G = 117, AC01sz1B = 162,
        AC01sz2R = 61,  AC01sz2G = 225, AC01sz2B = 22,
        AC01sz3R = 215, AC01sz3G = 35,  AC01sz3B = 129,
        AC01sz4R = 204, AC01sz4G = 125, AC01sz4B = 23;  
    //ASSEGNAZIONE ALTO CONTRASTO ZONA 2   
    int AC02R = 100, AC02G = 200, AC02B = 218;
