/**
 * @brief Класс DialogueSystem позволяет игрокам взаимодействовать с NPC через диалоговые окна.
 */
class DialogueSystem {
public:
    /**
     * @brief Начинает диалог с NPC.
     * @param npcId Идентификатор NPC, с которым начинается диалог.
     */
    void startDialogue(int npcId);

    /**
     * @brief Обрабатывает выбор игрока в диалоге.
     * @param choiceId Идентификатор выбранного варианта диалога.
     */
    void processDialogueChoice(int choiceId);

    /**
     * @brief Завершает диалог.
     */
    void endDialogue();
};
