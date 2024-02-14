// Система диалогов - позволяет игрокам взаимодействовать с NPC через диалоговые окна
class DialogueSystem {
public:
    // Начинает диалог с NPC
    void startDialogue(int npcId);

    // Обрабатывает выбор игрока в диалоге
    void processDialogueChoice(int choiceId);

    // Завершает диалог
    void endDialogue();
};
