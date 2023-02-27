//spec.cpp이 사양파일
//tcframe 헤더
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int A, score;
//입출력 변수와 형식
    void InputFormat() {
        LINE(A);
    }

    void OutputFormat() {
        LINE(score);
    }
//등급 구성
    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(64);
    }
//제약사항
    void Constraints() {
        CONS(1 <= A && A <= 100);
        
    }
};
//시험 사양 클래스
class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
//테스트 사레 정의
    void SampleTestCase1() {
        //무작위 테케 1개 (자동)
        Input({
            "100"
        });
        Output({
            "A"
        });
    }


    void TestCases() {
        //랜덤 테케
        CASE(A = rnd.nextInt(1, 100));
        CASE(A = rnd.nextInt(1, 100));
        CASE(A = rnd.nextInt(1, 100));
        CASE(A = rnd.nextInt(1, 100));
    }
};