// Arcatele.h: file di inclusione per file di inclusione di sistema standard,

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
#include "out/build/x64-debug/_deps/ftxui-src/src/ftxui/dom/table.cpp"
#include <fstream>

std::string ServiziTesto;
std::string ServiziDispTesto;
std::string linguaTesto;
std::vector<std::string> Lingue_disponibili = { "ITALIANO","ENGLISH","РУССКИЙ" };
std::vector<std::string> Nazione = { "Italia", "Россия", "France" };
std::vector<std::string> Servizi = { "","","","" }; //Pre Tel, Prot Civ, Ospedali 
std::string first_name;
std::string ArcaTele;
std::string map;
int LinguaSelezionata = 0;
int NazioneSelezionata = 0;
int ServizioSelezionato = 0;
int Tab_Sevizio_Sel = 0;
