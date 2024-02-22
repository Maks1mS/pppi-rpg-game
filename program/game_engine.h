/**
 * @brief Класс GameEngine является основой для всей архитектуры игры.
 */
class GameEngine {
public:
    /**
     * @brief Инициализирует игровой движок и все его подсистемы.
     */
    void initialize();

    /**
     * @brief Запускает основной игровой цикл.
     */
    void run();

    /**
     * @brief Останавливает игру и освобождает ресурсы.
     */
    void shutdown();

private:
    /**
     * @brief Обновляет все подсистемы (физика, анимация, AI и т.д.).
     * @param deltaTime Время, прошедшее с предыдущего обновления, в секундах.
     */
    void update(float deltaTime);

    /**
     * @brief Рендерит текущее состояние игры.
     */
    void render();
};
