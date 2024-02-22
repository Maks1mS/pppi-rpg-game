/**
 * @brief Класс AchievementsSystem управляет достижениями игрока и награждает их за выполнение определенных задач.
 */
class AchievementsSystem {
public:
    /**
     * @brief Регистрирует новое достижение в системе.
     * @param achievementParams Параметры достижения для регистрации.
     */
    void registerAchievement(/* параметры достижения */);

    /**
     * @brief Проверяет, выполнены ли условия достижения, и награждает игрока.
     * @param checkParams Параметры для проверки условий достижения.
     */
    void checkAndUnlock(/* параметры проверки */);

    /**
     * @brief Возвращает список достигнутых игроком достижений.
     */
    void getUnlockedAchievements();
};
