/**
 * @brief Класс DebugLogger предоставляет инструменты для отслеживания ошибок и оптимизации производительности.
 */
class DebugLogger {
public:
    /**
     * @brief Записывает сообщение в лог.
     * @param message Сообщение для записи.
     */
    static void log(const std::string& message);

    /**
     * @brief Записывает предупреждение в лог.
     * @param message Сообщение предупреждения.
     */
    static void warn(const std::string& message);

    /**
     * @brief Записывает ошибку в лог.
     * @param message Сообщение об ошибке.
     */
    static void error(const std::string& message);
};
