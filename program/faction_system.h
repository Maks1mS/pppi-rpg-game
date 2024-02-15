// Система фракций и репутации - управляет отношениями между игроком и различными группировками
class FactionSystem {
public:
    // Изменяет репутацию игрока в фракции
    void changeReputation(int factionId, int reputationDelta);

    // Проверяет отношение фракции к игроку
    int getReputation(int factionId);
};
