/**
 * @brief Класс WorldBuilder создает и управляет игровым миром, включая различные локации.
 */
class WorldBuilder {
public:
    /**
     * @brief Загружает или создает новый игровой мир.
     */
    void loadOrCreateWorld();

    /**
     * @brief Добавляет новую локацию в мир.
     * @param locationParams Параметры новой локации.
     */
    void addLocation(/* параметры локации */);

    /**
     * @brief Удаляет локацию из мира.
     * @param locationId Идентификатор удаляемой локации.
     */
    void removeLocation(int locationId);

    /**
     * @brief Получает информацию о локации.
     * @param locationId Идентификатор локации.
     */
    void getLocationInfo(int locationId);
};
