/**
 * @brief Класс QuestSystem управляет заданиями и миссиями.
 */
class QuestSystem {
public:
    /**
     * @brief Добавляет новый квест.
     * @param questParams Параметры добавляемого квеста.
     */
    void addQuest(/* параметры квеста */);

    /**
     * @brief Проверяет выполнение условий квеста.
     * @param deltaTime Время, прошедшее с предыдущего обновления, в секундах.
     */
    void update(float deltaTime);

    /**
     * @brief Завершает квест.
     * @param questId Идентификатор завершаемого квеста.
     */
    void completeQuest(int questId);
};
