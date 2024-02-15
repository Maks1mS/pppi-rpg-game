// Система навигации и картографии - предоставляет карты и инструменты навигации
class NavigationMapSystem {
public:
    // Создает карту мира или обновляет существующую
    void createOrUpdateMap(/* параметры мира */);

    // Позволяет получить маршрут от одной точки до другой
    void findPath(/* начальная точка, конечная точка */);

    // Отображает карту или часть карты
    void displayMapSection(/* параметры отображения */);
};