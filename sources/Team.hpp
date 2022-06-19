#pragma once
#include <string>

namespace ariel
{

    class Team{
        std::string name;
        double skill;
        int wins = 0;
        int total_points = 0;
    public:
        Team(std::string name, double skill);
        double getSkill() const {return skill;}
        std::string getName() const {return name;}
        void addWin(){wins++;}
        void addPoints(int points){total_points += points;}
        int getWins() const {return wins;}
        int getPoints() const {return total_points;}
    };
    
} // namespace ariel
