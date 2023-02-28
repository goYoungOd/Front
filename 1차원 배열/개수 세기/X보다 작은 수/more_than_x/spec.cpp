#include <tcframe/spec.hpp>
#include <bits/stdc++.h>

using namespace tcframe;
using namespace std;

class ProblemSpec : public BaseProblemSpec {
protected:
    int N,X;
    vector<int> A;
    int MIN_X;

    void InputFormat() {
        LINE(N, X);
        LINE(A % SIZE(N));
    }

    void OutputFormat() {
        LINE(MIN_X);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(256);
    }

    void Constraints() {
        CONS(1 <= N && N <= 10000); 
        CONS(1 <= X&& X <= 10000); 
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "10 5",
            "1 10 4 9 2 3 8 5 7 6"
        });
        Output({
            "1 4 2 3"
        });
    }

    void TestCases() {
        srand((unsigned int)time(NULL));    
        CASE(N = rnd.nextInt(1, 100), X = rnd.nextInt(1, 100),A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(1, 10);});
        CASE(N = rnd.nextInt(1, 100), X = rnd.nextInt(1, 100),A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(1, 10);});
        CASE(N = rnd.nextInt(1, 100), X = rnd.nextInt(1, 100),A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(1, 10);});
        CASE(N = rnd.nextInt(1, 100), X = rnd.nextInt(1, 100),A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(1, 10);});
    }
};
