#include "game.h"

int Suzy::game_phase()
{
    int result = Player::game_phase();
    ability();
    return result;
}
Card Suzy::give_random_card()
{
    Card c = Player::give_random_card();
    ability();
    return c;
}
Card Suzy::give_random_card_hand()
{
    Card c = Player::give_random_card_hand();
    ability();
    return c;
}

bool Suzy::play_bang()
{
    bool res = Player::play_bang();
    ability();
    return res;
}

bool Suzy::play_vedle()
{
    bool res = Player::play_vedle();
    ability();
    return res;
}

bool Suzy::resolve_slab_bang()
{
    bool res = Player::resolve_slab_bang();
    ability();
    return res;
}
void Suzy::ability()
{
    ability_used = false;
    if(0 == cards_hand.size())
    {
        cards_hand.push_back(g->draw_from_deck());
    }
}
