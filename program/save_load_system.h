/**
 * @brief Класс SaveLoadSystem позволяет игроку сохранять и загружать свой прогресс.
 */
class SaveLoadSystem {
public:
    /**
     * @brief Сохраняет текущее состояние игры в файл.
     * @param saveFileName Имя файла сохранения.
     * @param otherParams Другие параметры, такие как данные о состоянии игры.
     */
    void saveGame(const std::string& saveFileName, /* другие параметры, например, данные о состоянии игры */);

    /**
     * @brief Загружает состояние игры из файла.
     * @param saveFileName Имя файла сохранения.
     */
    void loadGame(const std::string& saveFileName);

    /**
     * @brief Перечисляет доступные файлы сохранений.
     * @return Вектор строк, содержащих имена доступных файлов сохранений.
     */
    std::vector<std::string> listSaveFiles();

    /**
     * @brief Удаляет файл сохранения.
     * @param saveFileName Имя файла сохранения для удаления.
     */
    void deleteSaveFile(const std::string& saveFileName);

private:
    /**
     * @brief Сериализует данные состояния игры для сохранения.
     * @param gameStateParams Параметры состояния игры для сериализации.
     */
    void serializeGameState(/* параметры состояния игры */);

    /**
     * @brief Десериализует данные состояния игры из файла сохранения.
     * @param loadParams Параметры для загрузки состояния игры.
     */
    void deserializeGameState(/* параметры для загрузки состояния игры */);
};
