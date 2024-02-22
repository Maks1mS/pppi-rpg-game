/**
 * @brief Класс UISystem управляет элементами интерфейса и взаимодействием с пользователем.
 */
class UISystem {
public:
    /**
     * @brief Создает новый элемент UI.
     * @param elementParams Параметры создаваемого элемента интерфейса.
     */
    void createUIElement(/* параметры элемента */);

    /**
     * @brief Обновляет состояние UI элементов.
     * @param deltaTime Время, прошедшее с предыдущего обновления, в секундах.
     */
    void update(float deltaTime);

    /**
     * @brief Отрисовывает элементы UI.
     */
    void render();
};
