#include <iostream>

enum {TOUCHDOWN = 6, FIELD_GOAL = 3, EXTRA_POINT = 1, SAFETY = 2};

int add(int old_score, int new_score){

    return old_score + new_score;

}

int main(){

    int team1 = 0;
    int team2 = 0;

    std::cout << "Score is " << team1 << " to " << team2 << "\n";
    team1 = add(team1, TOUCHDOWN);
    team1 = add(team1, EXTRA_POINT);
    team2 = add(team2, FIELD_GOAL);
    team2 = add(team2, SAFETY);
    std::cout << "Score is " << team1 << " to " << team2 << "\n";

    return 0;
}
