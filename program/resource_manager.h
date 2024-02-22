/**
 * @brief Класс ResourceManager управляет загрузкой и выгрузкой игровых ресурсов.
 */
class ResourceManager {
public:
    /**
     * @brief Загружает ресурс (текстура, модель, звук и т.д.).
     * @param resourcePath Путь к ресурсу.
     */
    void loadResource(const std::string& resourcePath);

    /**
     * @brief Возвращает загруженный ресурс.
     * @tparam ResourceType Тип возвращаемого ресурса.
     * @param resourceName Имя ресурса.
     * @return Загруженный ресурс заданного типа.
     */
    template <typename ResourceType>
    ResourceType getResource(const std::string& resourceName);

    /**
     * @brief Освобождает ресурсы.
     */
    void unloadAllResources();
};
