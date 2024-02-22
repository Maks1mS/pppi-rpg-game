/**
 * @brief Класс AnimationSystem управляет анимациями персонажей и объектов.
 */
class AnimationSystem {
public:
    /**
     * @brief Добавляет анимацию к объекту.
     * @param animationParams Параметры анимации для добавления.
     */
    void addAnimation(/* параметры анимации */);

    /**
     * @brief Обновляет анимации объектов.
     * @param deltaTime Время, прошедшее с предыдущего обновления, в секундах.
     */
    void update(float deltaTime);
};
