// Мир и локации - создает и управляет игровым миром, включая различные локации
class WorldBuilder {
public:
    // Загружает или создает новый игровой мир
    void loadOrCreateWorld();

    // Добавляет новую локацию в мир
    void addLocation(/* параметры локации */);

    // Удаляет локацию из мира
    void removeLocation(int locationId);

    // Получает информацию о локации
    void getLocationInfo(int locationId);
};
