/**
 * @brief Класс CharacterSystem управляет созданием и развитием персонажей.
 */
class CharacterSystem {
public:
    /**
     * @brief Создает нового персонажа.
     * @param characterParams Параметры создаваемого персонажа.
     */
    void createCharacter(/* параметры персонажа */);

    /**
     * @brief Обновляет состояние и навыки персонажей.
     * @param deltaTime Время, прошедшее с предыдущего обновления, в секундах.
     */
    void update(float deltaTime);

    /**
     * @brief Улучшает навык или характеристику персонажа.
     * @param characterId Идентификатор персонажа, которому будет выполнено улучшение.
     * @param upgradeParams Параметры улучшения.
     */
    void upgradeCharacter(int characterId, /* параметры улучшения */);
};
