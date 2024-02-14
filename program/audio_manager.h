// Менеджер аудио - управляет звуками и музыкой в игре
class AudioManager {
public:
    // Загружает аудио ресурс
    void loadSound(const std::string& path);

    // Воспроизводит звуковой эффект
    void playSoundEffect(const std::string& soundName);

    // Воспроизводит музыкальную композицию
    void playMusic(const std::string& musicName);

    // Останавливает все звуки и музыку
    void stopAllSounds();
};
