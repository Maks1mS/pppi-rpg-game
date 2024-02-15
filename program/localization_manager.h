// Локализация - переводит текст и аудио игры на разные языки
class LocalizationManager {
public:
    // Загружает языковой пакет
    void loadLanguagePack(const std::string& languageCode);

    // Получает переведенную строку по ключу
    std::string getString(const std::string& key);

    // Устанавливает текущий язык интерфейса
    void setCurrentLanguage(const std::string& languageCode);
};
