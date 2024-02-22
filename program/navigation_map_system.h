/**
 * @brief Класс NavigationMapSystem предоставляет карты и инструменты навигации.
 */
class NavigationMapSystem {
public:
    /**
     * @brief Создает карту мира или обновляет существующую.
     * @param worldParams Параметры мира для создания или обновления карты.
     */
    void createOrUpdateMap(/* параметры мира */);

    /**
     * @brief Позволяет получить маршрут от одной точки до другой.
     * @param startPoint Начальная точка маршрута.
     * @param endPoint Конечная точка маршрута.
     */
    void findPath(/* начальная точка, конечная точка */);

    /**
     * @brief Отображает карту или часть карты.
     * @param displayParams Параметры отображения карты.
     */
    void displayMapSection(/* параметры отображения */);
};
