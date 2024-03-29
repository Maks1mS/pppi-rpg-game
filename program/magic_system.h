/**
 * @brief Класс MagicSystem управляет использованием магических способностей и заклинаний.
 */
class MagicSystem {
public:
    /**
     * @brief Добавляет новое заклинание в арсенал.
     * @param spellParams Параметры добавляемого заклинания.
     */
    void addSpell(/* параметры заклинания */);

    /**
     * @brief Использует заклинание.
     * @param spellId Идентификатор заклинания для использования.
     * @param target Цель заклинания.
     */
    void castSpell(int spellId, /* цель заклинания */);

    /**
     * @brief Обновляет состояние магии (например, восстановление маны).
     * @param deltaTime Время, прошедшее с предыдущего обновления, в секундах.
     */
    void update(float deltaTime);
};