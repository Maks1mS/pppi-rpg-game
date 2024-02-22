/**
 * @brief Класс LocalizationManager переводит текст и аудио игры на разные языки.
 */
class LocalizationManager {
public:
    /**
     * @brief Загружает языковой пакет.
     * @param languageCode Код языка для загрузки.
     */
    void loadLanguagePack(const std::string& languageCode);

    /**
     * @brief Получает переведенную строку по ключу.
     * @param key Ключ строки для перевода.
     * @return Переведенная строка.
     */
    std::string getString(const std::string& key);

    /**
     * @brief Устанавливает текущий язык интерфейса.
     * @param languageCode Код языка интерфейса.
     */
    void setCurrentLanguage(const std::string& languageCode);
};
