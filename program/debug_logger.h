// Логирование и отладка - предоставляет инструменты для отслеживания ошибок и оптимизации производительности
class DebugLogger {
public:
    // Записывает сообщение в лог
    static void log(const std::string& message);

    // Записывает предупреждение в лог
    static void warn(const std::string& message);

    // Записывает ошибку в лог
    static void error(const std::string& message);
};
