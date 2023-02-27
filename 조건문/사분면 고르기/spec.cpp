//spec.cpp이 사양파일
//tcframe 헤더
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int x,y, quadrant;
//입출력 변수와 형식
    void InputFormat() {
        LINE(x);
        LINE(y);
    }

    void OutputFormat() {
        LINE(quadrant);
    }
//등급 구성
    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(64);
    }
//제약사항
    void Constraints() {
        CONS(x != 0 && x >= -1000 && x <= 1000);
        CONS(y != 0 && y >= -1000 && y <= 1000);
        
    }
};
//시험 사양 클래스
class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
//테스트 사레 정의
    void SampleTestCase1() {
        //무작위 테케 1개 (자동)
        Input({
            "12", "5"
        });
        Output({
            "1"
        });
    }


    void TestCases() {
        //랜덤 테케
        CASE(x = rnd.nextInt(-1000, 1000), y = rnd.nextInt(-1000, 1000));
        CASE(x = rnd.nextInt(-1000, 1000), y = rnd.nextInt(-1000, 1000));
        CASE(x = rnd.nextInt(-1000, 1000), y = rnd.nextInt(-1000, 1000));
        CASE(x = rnd.nextInt(-1000, 1000), y = rnd.nextInt(-1000, 1000));
    }
};