class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        ranges::sort(asteroids);
        long currMass{mass};
        
        for (const auto& asteroid : asteroids) {
            if (asteroid > currMass) {
                return false;
            }
            currMass += asteroid;
        }
        return true;
    }
};