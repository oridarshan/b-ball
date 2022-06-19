#pragma once

#include "Team.hpp"

namespace ariel{

    class Game{
        Team home;
        Team out;
    public:
        Game(Team hometeam, Team outteam);
        void play ();
    };
}