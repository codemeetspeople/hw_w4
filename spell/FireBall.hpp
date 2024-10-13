#ifndef FIRE_BALL_HPP
#define FIRE_BALL_HPP

#include "Spell.hpp"

class FireBall : public Spell {
    public:
        FireBall(int cost, int actionPoints);
        virtual ~FireBall();
        virtual void action(Unit* target) const;
};

#endif
