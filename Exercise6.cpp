#include <iostream>
#include <ctime>
#include <string>

using namespace std;

    int main() {

        srand(time(0));

        // life and simulation count
        int sim = 0, life = 100;

        // declare variables
        int picker, bowl;
        int w_count,b_count;

        // bowl 1 and its pearl count
        int bowl_1[9] = {};
        int bowl_1_index = 0;
        // bowl 2 and its pearl count
        int bowl_2[9] = {};
        int bowl_2_index = 0;

        while ( sim < 100 ) {
            sim ++;

            bowl_1_index = 0;
            bowl_2_index = 0;
            w_count = 0, b_count = 0;


            for (int pick = 0; pick < 10; pick++) {
                // 1= white, 0=black
                picker = rand() % 2;

                // 0= bowl 1, 1= bowl 2
                bowl  = rand() % 2;

                // which one we got and add count
                if (picker == 0) {
                    b_count++;
                }
                else {
                    w_count++;
                }

                // make sure it only use 5 of each pearl
                if (b_count > 5) {
                    picker = 1;
                }
                if (w_count > 5) {
                    picker = 0;
                }

                // make sure to not exceed maxinum pearl per bowl
                if (bowl_1_index == 8) {
                    bowl_2[bowl_2_index] = picker;
                    bowl_2_index++;

                }
                if (bowl_2_index == 8) {
                    bowl_1[bowl_1_index] = picker;
                    bowl_1_index++;

                }

                // add to bowl
                if (bowl == 0) {
                    bowl_1[bowl_1_index] = picker;
                    bowl_1_index++;

                }
                else {
                    bowl_2[bowl_2_index] = picker;
                    bowl_2_index++;

                }  
            }

            // pick pearl from bowl
            int hand_pick, picked;
            int bowl_picker  = rand() % 2;

            // check which we got
            if (bowl_picker == 0) {
                hand_pick = rand() % bowl_1_index;
                picked = bowl_1[hand_pick];
                
            } 
            else {
                hand_pick = rand() % bowl_2_index;
                picked = bowl_2[hand_pick];

            }
            // die, if get black pearl
            if (picked == 0) {
                // dead
                life--;
                
            }
        }

        // diplay 
        std::cout << "Simulation:\n";
        std::cout << "Death: " << (100 - life) << " Times\n";
        std::cout << "Survived: " << life << " Times\n";

        return 0;
    }