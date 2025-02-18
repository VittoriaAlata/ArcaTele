# CMakeList.txt: progetto CMake per ArcaTele. Includere l'origine e definire
# qui la logica specifica del progetto.
#
cmake_minimum_required (VERSION 3.8)

# Abilita Ricaricamento rapido per i compilatori MSVC, se supportato.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("ArcaTele")

# Aggiungi FetchContent
include(FetchContent)

# Scarica e aggiungi FTXUI
FetchContent_Declare(
  ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/FTXUI.git
  GIT_TAG main  # Puoi specificare un commit/tag specifico
)
FetchContent_MakeAvailable(ftxui)

# Aggiungere l'origine all'eseguibile di questo progetto.
add_executable (ArcaTele "ArcaTele.cpp" "ArcaTele.h")

# Linka FTXUI al tuo eseguibile
target_link_libraries(ArcaTele PRIVATE ftxui::screen ftxui::dom ftxui::component)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ArcaTele PROPERTY CXX_STANDARD 20)
endif()

# TODO: Aggiungere i test e, se necessario, installare le destinazioni.
