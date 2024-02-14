// Система физики - обрабатывает физическое поведение объектов
class PhysicsSystem {
public:
    // Инициализирует физический мир
    void initialize();

    // Обновляет состояние физического мира
    void update(float deltaTime);

    // Очищает физические объекты и мир
    void shutdown();
};
