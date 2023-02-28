#include <tcframe/spec.hpp>
#include <bits/stdc++.h>

using namespace tcframe;
using namespace std;

class ProblemSpec : public BaseProblemSpec {
protected:
    
    vector<int> N;
    int max, number;

    void InputFormat() {
        
        LINE(N);
    
        
    }

    void OutputFormat() {
        LINE(max);
        LINE(number);

    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(128);
    }

    void Constraints() {
        //CONS(1 <= N[i] && N[i] <= 99); // 모든 수는 1 이상 99 이하의 자연수

    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "3",
            "29",
            "38",
            "12",
            "57",
            "74",
            "40",
            "85",
            "61"
        });
        Output({
            "85",
            "8"
        });
    }

    void TestCases() {
        srand((unsigned int)time(NULL));
        
        CASE(N.resize(9);for (int i = 0; i < 9; i++) {N[i] = rnd.nextInt(1, 99);});
        CASE(N.resize(9);for (int i = 0; i < 9; i++) {N[i] = rnd.nextInt(1, 99);});
        CASE(N.resize(9);for (int i = 0; i < 9; i++) {N[i] = rnd.nextInt(1, 99);});
        CASE(N.resize(9);for (int i = 0; i < 9; i++) {N[i] = rnd.nextInt(1, 99);});

    }
};