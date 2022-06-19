#include "Leauge.hpp"
#include <iostream>

namespace ariel{
     Leauge::Leauge(std::vector<Team> teams)
    {
        if (teams.size() > 20) {throw "too much teams";}
        int count = 0;
        for(const Team& t : teams){
            lteams.push_back(t);
            count++;
        }
        //add random teams until 20
        for (; count < 20; count++)
        {
            Team t{std::to_string(count), static_cast<double>((rand()%11)/10)};
            teams.push_back(t);
        }
    }

     Leauge::Leauge()
    {
        for (size_t i = 0; i < 20; i++)
        {
            Team t{std::to_string(i), static_cast<double>((rand()%11)/10)};
            lteams.push_back(t);
        }
        
    }
    
    Leauge::~Leauge()
    {
    }

    void Leauge::printStats(){
        for (size_t i = 0; i < 20; i++)
        {
            std::cout << "Team " << lteams[i].getName() << ". Total Wins: "<< 
            lteams[i].getWins() << ". Toatl points: " << lteams[i].getPoints() << std::endl;
        }
        
    }
}