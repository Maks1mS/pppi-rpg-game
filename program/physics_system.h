/**
 * @brief Класс PhysicsSystem обрабатывает физическое поведение объектов.
 */
class PhysicsSystem {
public:
    /**
     * @brief Инициализирует физический мир.
     */
    void initialize();

    /**
     * @brief Обновляет состояние физического мира.
     * @param deltaTime Время, прошедшее с предыдущего обновления, в секундах.
     */
    void update(float deltaTime);

    /**
     * @brief Очищает физические объекты и мир.
     */
    void shutdown();
};
