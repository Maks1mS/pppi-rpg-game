// Система сохранения и загрузки - позволяет игроку сохранять и загружать свой прогресс
class SaveLoadSystem {
public:
    // Сохраняет текущее состояние игры в файл
    void saveGame(const std::string& saveFileName, /* другие параметры, например, данные о состоянии игры */);

    // Загружает состояние игры из файла
    void loadGame(const std::string& saveFileName);

    // Перечисляет доступные файлы сохранений
    std::vector<std::string> listSaveFiles();

    // Удаляет файл сохранения
    void deleteSaveFile(const std::string& saveFileName);

private:
    // Сериализует данные состояния игры для сохранения
    void serializeGameState(/* параметры состояния игры */);

    // Десериализует данные состояния игры из файла сохранения
    void deserializeGameState(/* параметры для загрузки состояния игры */);
};
