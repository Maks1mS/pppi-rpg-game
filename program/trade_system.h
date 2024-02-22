/**
 * @brief Класс TradeSystem управляет экономикой и торговлей в игре.
 */
class TradeSystem {
public:
    /**
     * @brief Открывает торговое окно с NPC или другим игроком.
     * @param tradingPartner Торговый партнер (NPC или другой игрок).
     */
    void initiateTrade(/* с кем торговать */);

    /**
     * @brief Выполняет обмен предметами и/или валютой.
     * @param tradeParams Параметры торговли, такие как предметы для обмена и сумма валюты.
     */
    void executeTrade(/* параметры торговли */);

    /**
     * @brief Закрывает торговое окно.
     */
    void closeTrade();
};
