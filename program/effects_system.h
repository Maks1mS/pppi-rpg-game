/**
 * @brief Класс EffectsSystem управляет специальными визуальными и аудиоэффектами.
 */
class EffectsSystem {
public:
    /**
     * @brief Добавляет новый эффект.
     * @param effectParams Параметры добавляемого эффекта.
     */
    void addEffect(/* параметры эффекта */);

    /**
     * @brief Воспроизводит эффект.
     * @param effectId Идентификатор воспроизводимого эффекта.
     */
    void playEffect(int effectId);

    /**
     * @brief Останавливает эффект.
     * @param effectId Идентификатор останавливаемого эффекта.
     */
    void stopEffect(int effectId);

    /**
     * @brief Обновляет активные эффекты.
     * @param deltaTime Время, прошедшее с предыдущего обновления, в секундах.
     */
    void update(float deltaTime);
};
