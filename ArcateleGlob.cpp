#include "ArcaTeleGlob.h"
#include "ptitz1c.h"
//IMPOSTAZIONI E ASSEGNAZIONI PRIMARIE

	//COLORI MENU PRINCIPALE
	//ASSEGNAZIONE Background rosso ,verde, blu
    int bgR = 0, bgG = 18, bgB = 50; 

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

	//ASSEGNAZIONE COLORI DISTRETTI ZONE
	//ZONA 1
int Light_SalmonR = 255, Light_SalmonG = 160, Light_SalmonB = 122;
int CoralR = 255, CoralG = 127, CoralB = 80;
int TomatoR = 255, TomatoG = 99, TomatoB = 71;
int Orange_RedR = 255, Orange_RedG = 69, Orange_RedB = 0;
int Dark_OrangeR = 255, Dark_OrangeG = 140, Dark_OrangeB = 0;
int OrangeR = 255, OrangeG = 165, OrangeB = 0;
int Deep_SaffronR = 255, Deep_SaffronG = 179, Deep_SaffronB = 71;
int Light_ApricotR = 255, Light_ApricotG = 184, Light_ApricotB = 77;
int SaffronR = 255, SaffronG = 195, SaffronB = 0;
int SunglowR = 255, SunglowG = 204, SunglowB = 51;
int GoldenR = 255, GoldenG = 215, GoldenB = 0;
int Light_GoldenR = 255, Light_GoldenG = 224, Light_GoldenB = 51;
int Peach_PuffR = 255, Peach_PuffG = 218, Peach_PuffB = 185;
int MoccasinR = 255, MoccasinG = 228, MoccasinB = 181;
int Papaya_WhipR = 255, Papaya_WhipG = 229, Papaya_WhipB = 180;
int SalmonR = 255, SalmonG = 140, SalmonB = 105;
int Vivid_Orange_PeelR = 255, Vivid_Orange_PeelG = 154, Vivid_Orange_PeelB = 0;
int Fire_OpalR = 233, Fire_OpalG = 92, Fire_OpalB = 75;
int BlushR = 222, BlushG = 93, BlushB = 131;
int Sandy_BrownR = 234, Sandy_BrownG = 126, Sandy_BrownB = 93;
int SiennaR = 244, SiennaG = 164, SiennaB = 96;
int ChocolateR = 210, ChocolateG = 105, ChocolateB = 30;
int PeruR = 205, PeruG = 133, PeruB = 63;
int Sienna_DarkR = 160, Sienna_DarkG = 82, Sienna_DarkB = 45;
int Saddle_BrownR = 139, Saddle_BrownG = 69, Saddle_BrownB = 19;
int Sandy_Brown_LightR = 244, Sandy_Brown_LightG = 164, Sandy_Brown_LightB = 96;
int Chocolate_DarkR = 210, Chocolate_DarkG = 105, Chocolate_DarkB = 30;
//File dei colori utilizzati per distinguere i distretti in Mod. Colore Normale nella Zona 1.
