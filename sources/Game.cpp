#include "Game.hpp"

namespace ariel{

    Game::Game(Team hometeam, Team outteam):home(hometeam), out(outteam){}

    void Game::play(){
        // basic score
        int out_score = rand()%50 + 50;
        int home_score = rand()%45 + 55;
        // add skill points
        out_score += static_cast<int> (out.getSkill()*10);
        home_score += static_cast<int> (home.getSkill()*10);
        //update points to teams
        out.addPoints(out_score);
        home.addPoints(home_score);
        // out team won
        if(out_score > home_score){
            out.addWin();
            return;
        }
        // home team won or draw
        home.addWin();
    }
}