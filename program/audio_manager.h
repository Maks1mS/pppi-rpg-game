/**
 * @brief Класс AudioManager управляет звуками и музыкой в игре.
 */
class AudioManager {
public:
    /**
     * @brief Загружает аудио ресурс.
     * @param path Путь к аудио файлу.
     */
    void loadSound(const std::string& path);

    /**
     * @brief Воспроизводит звуковой эффект.
     * @param soundName Наименование звукового эффекта.
     */
    void playSoundEffect(const std::string& soundName);

    /**
     * @brief Воспроизводит музыкальную композицию.
     * @param musicName Наименование музыкальной композиции.
     */
    void playMusic(const std::string& musicName);

    /**
     * @brief Останавливает все звуки и музыку.
     */
    void stopAllSounds();
};
