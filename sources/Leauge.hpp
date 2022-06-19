#pragma once

#include "Game.hpp"
#include <vector>

namespace ariel{
    class Leauge
    {
    public:
        std::vector<Team> lteams;
        Leauge();
        Leauge(std::vector<Team> teams);
        ~Leauge();
        void printStats();
    };
    
   
    
}