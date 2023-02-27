//spec.cpp이 사양파일
//tcframe 헤더
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int d1,d2,d3;
    int reward;
//입출력 변수와 형식
    void InputFormat() {
        LINE(d1,d2,d3);
    }

    void OutputFormat() {
        LINE(reward);
    }
//등급 구성
    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(128);
    }
//제약사항
    void Constraints() {
        CONS(1 <= d1 && d1 <= 6);
        CONS(1 <= d2 && d2 <= 6);
        CONS(1 <= d3 && d3 <= 6);
        
    }
};
//시험 사양 클래스
class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
//테스트 사레 정의
    void SampleTestCase1() {
        //무작위 테케 1개 (자동)
        Input({
            "3 3 6"
        });
        Output({
            "1300"
        });
    }


    void TestCases() {
        //랜덤 테케
        CASE(d1 = rnd.nextInt(1, 6), d2 = rnd.nextInt(1, 6), d3 = rnd.nextInt(1, 6));
        CASE(d1 = rnd.nextInt(1, 6), d2 = rnd.nextInt(1, 6), d3 = rnd.nextInt(1, 6));
        CASE(d1 = rnd.nextInt(1, 6), d2 = rnd.nextInt(1, 6), d3 = rnd.nextInt(1, 6));
        CASE(d1 = rnd.nextInt(1, 6), d2 = rnd.nextInt(1, 6), d3 = rnd.nextInt(1, 6));
    }
};