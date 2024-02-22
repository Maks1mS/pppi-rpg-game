/**
 * @brief Класс ItemInventory управляет предметами, доступными для игрока.
 */
class ItemInventory {
public:
    /**
     * @brief Добавляет предмет в инвентарь.
     * @param itemParams Параметры добавляемого предмета.
     */
    void addItem(/* параметры предмета */);

    /**
     * @brief Удаляет предмет из инвентаря.
     * @param itemId Идентификатор предмета для удаления.
     */
    void removeItem(int itemId);

    /**
     * @brief Использует предмет.
     * @param itemId Идентификатор предмета для использования.
     */
    void useItem(int itemId);
};
