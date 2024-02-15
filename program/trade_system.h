// Система торговли - управляет экономикой и торговлей в игре
class TradeSystem {
public:
    // Открывает торговое окно с NPC или другим игроком
    void initiateTrade(/* с кем торговать */);

    // Выполняет обмен предметами и/или валютой
    void executeTrade(/* параметры торговли */);

    // Закрывает торговое окно
    void closeTrade();
};