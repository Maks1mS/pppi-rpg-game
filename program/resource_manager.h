// Менеджер ресурсов - управляет загрузкой и выгрузкой игровых ресурсов
class ResourceManager {
public:
    // Загружает ресурс (текстура, модель, звук и т.д.)
    void loadResource(const std::string& resourcePath);

    // Возвращает загруженный ресурс
    template <typename ResourceType>
    ResourceType getResource(const std::string& resourceName);

    // Освобождает ресурсы
    void unloadAllResources();
};
