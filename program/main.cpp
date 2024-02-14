#include "game_engine.h"

int main() {
    GameEngine engine;
    engine.initialize();

    while (true) {
        engine.update(0.016); // Предполагаем фиксированный таймстеп
        engine.render();
    }

    engine.shutdown();
    return 0;
}
