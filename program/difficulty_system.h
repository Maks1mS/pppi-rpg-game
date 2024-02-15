// Система уровней сложности - позволяет настраивать уровень сложности игры
class DifficultySystem {
public:
    // Устанавливает уровень сложности
    void setDifficultyLevel(/* уровень сложности */);

    // Получает текущий уровень сложности
    int getDifficultyLevel();

    // Адаптирует игровые параметры к выбранному уровню сложности
    void adjustGameplayParameters();
};
