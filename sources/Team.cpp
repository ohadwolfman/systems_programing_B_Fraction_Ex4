#include "Team.hpp"
using namespace std;

namespace ariel{
    Team::Team (Character* leader){

    }
    void Team::add(Character* warrior){
        if(this->warriors_count < 10){
            (this->warriors).push_back(warrior);

        }

    }
    void Team::attack (Team*){

    }
    int Team::stillAlive () const{

    }
    virtual void Team::print () const{

    }
    static Character* Team::getClosest(Team*, Character*){

    }
    void Team::setLeader (Character*){

    }
}
