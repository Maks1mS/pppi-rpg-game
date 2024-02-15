// Система модификаций - позволяет сообществу создавать и распространять собственные модификации к игре
class ModdingSupport {
public:
    // Загружает модификации
    void loadMods();

    // Включает или отключает модификацию
    void toggleMod(const std::string& modId, bool enable);

    // Предоставляет интерфейс для модификаций для взаимодействия с игровым движком
    void provideModdingAPI();
};
