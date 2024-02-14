// Инвентарь и система предметов - управляет предметами, доступными для игрока
class ItemInventory {
public:
    // Добавляет предмет в инвентарь
    void addItem(/* параметры предмета */);

    // Удаляет предмет из инвентаря
    void removeItem(int itemId);

    // Использует предмет
    void useItem(int itemId);
};