#include <tcframe/spec.hpp>
#include <bits/stdc++.h>

using namespace tcframe;
using namespace std;

class ProblemSpec : public BaseProblemSpec {
protected:
    int N;
    vector<int> A;
    int K, ans;

    void InputFormat() {
        LINE(N);
        LINE(A % SIZE(N));
        LINE(K);
    }

    void OutputFormat() {
        LINE(ans);
    }

    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(256);
    }

    void Constraints() {
        CONS(1 <= N && N <= 100); 
        //CONS(eachElementBetween(A, -100, 100));
        CONS(-100 <= K && K <= 100);
    }
};

class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
    void SampleTestCase1() {
        Input({
            "11",
            "1 4 1 2 4 2 4 2 3 4 4",
            "2"
        });
        Output({
            "3"
        });
    }

    void TestCases() {
        srand((unsigned int)time(NULL));
        //CASE(N = 10, A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, K = 1);
        //CASE(N = 10, A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, K = 11);
        
        CASE(N = rnd.nextInt(1, 100),A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(1, 10);});
        CASE(N = rnd.nextInt(1, 100),A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(1, 10);});
        CASE(N = rnd.nextInt(1, 100),A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(1, 10);});
        CASE(N = rnd.nextInt(1, 100),A.resize(N);for (int i = 0; i < N; i++) {A[i] = rnd.nextInt(1, 10);});

        
       
        
        // CASE(N = 1, A = {-100}, K = -100);
        // CASE(N = 2, A = {100, 100}, K = 100);
    }
};
