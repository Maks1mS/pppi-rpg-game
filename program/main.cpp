#include "game_engine.h"
#include "ui_system.h"

int main() {
    GameEngine engine;
    UISystem ui;

    engine.initialize();
    ui.initialize();

    while (true) {
        engine.update(0.016); // Предполагаем фиксированный таймстеп
        ui.update(0.016);
        engine.render();
        ui.render();
    }

    engine.shutdown();
    ui.shutdown();
    return 0;
}