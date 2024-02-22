/**
 * @brief Класс ModdingSupport позволяет сообществу создавать и распространять собственные модификации к игре.
 */
class ModdingSupport {
public:
    /**
     * @brief Загружает модификации.
     */
    void loadMods();

    /**
     * @brief Включает или отключает модификацию.
     * @param modId Идентификатор модификации.
     * @param enable Флаг, указывающий, следует ли включить модификацию.
     */
    void toggleMod(const std::string& modId, bool enable);

    /**
     * @brief Предоставляет интерфейс для модификаций для взаимодействия с игровым движком.
     */
    void provideModdingAPI();
};
