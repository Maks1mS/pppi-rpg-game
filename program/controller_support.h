/**
 * @brief Класс ControllerSupport позволяет играть с использованием различных устройств ввода.
 */
class ControllerSupport {
public:
    /**
     * @brief Инициализирует поддержку контроллеров.
     */
    void initialize();

    /**
     * @brief Проверяет подключение контроллеров и обновляет их состояние.
     */
    void update();

    /**
     * @brief Возвращает состояние указанной кнопки на контроллере.
     * @param controllerId Идентификатор контроллера.
     * @param buttonId Идентификатор кнопки на контроллере.
     * @return Состояние кнопки (нажата/не нажата).
     */
    bool getButtonState(int controllerId, int buttonId);

    /**
     * @brief Конфигурирует маппинг кнопок контроллера.
     * @param mappingParams Параметры маппинга кнопок.
     */
    void configureButtonMapping(/* параметры маппинга */);
};
