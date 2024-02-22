/**
 * @brief Класс FactionSystem управляет отношениями между игроком и различными группировками.
 */
class FactionSystem {
public:
    /**
     * @brief Изменяет репутацию игрока в фракции.
     * @param factionId Идентификатор фракции.
     * @param reputationDelta Изменение репутации игрока в указанной фракции.
     */
    void changeReputation(int factionId, int reputationDelta);

    /**
     * @brief Проверяет отношение фракции к игроку.
     * @param factionId Идентификатор фракции.
     * @return Текущая репутация игрока в указанной фракции.
     */
    int getReputation(int factionId);
};
