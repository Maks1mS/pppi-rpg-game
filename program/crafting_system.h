/**
 * @brief Класс CraftingSystem позволяет создавать новые предметы.
 */
class CraftingSystem {
public:
    /**
     * @brief Добавляет рецепт крафтинга.
     * @param recipeParams Параметры рецепта крафтинга.
     */
    void addCraftingRecipe(/* параметры рецепта */);

    /**
     * @brief Крафтит предмет по рецепту.
     * @param recipeId Идентификатор рецепта крафтинга.
     */
    void craftItem(int recipeId);
};
