#include <tcframe/spec.hpp>
#include <bits/stdc++.h>

using namespace tcframe;
using namespace std;

class ProblemSpec : public BaseProblemSpec {
protected:
    int N;
    vector<int> A;
    int MIN,MAX;

    void InputFormat() {
        LINE(N);
        LINE(A % SIZE(N));
    }

    void OutputFormat() {
        LINE(MIN);
        LINE(MAX);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(256);
    }

    void Constraints() {
        CONS(1 <= N && N <= 1000000); 
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "5",
            "20 10 35 30 7"
        });
        Output({
            "7 35"
        });
    }

    void TestCases() {
        srand((unsigned int)time(NULL)); 
        CASE(N = rnd.nextInt(1, 1000000), A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(-1000000, 1000000);});
        CASE(N = rnd.nextInt(1, 1000000), A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(-1000000, 1000000);});
        CASE(N = rnd.nextInt(1, 1000000), A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(-1000000, 1000000);});
        CASE(N = rnd.nextInt(1, 1000000), A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(-1000000, 1000000);});
    }
};
