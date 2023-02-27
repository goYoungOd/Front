//spec.cpp이 사양파일
//tcframe 헤더
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int year;
    int answer;
//입출력 변수와 형식
    void InputFormat() {
        LINE(year);
    }

    void OutputFormat() {
        LINE(answer);
    }
//등급 구성
    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(64);
    }
//제약사항
    void Constraints() {
        CONS(1 <= year && year <= 10000);
        
    }
};
//시험 사양 클래스
class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
//테스트 사레 정의
    void SampleTestCase1() {
        //무작위 테케 1개 (자동)
        Input({
            "2000"
        });
        Output({
            "1"
        });
    }


    void TestCases() {
        //랜덤 테케
        CASE(year = rnd.nextInt(1, 10000));
        CASE(year = rnd.nextInt(1, 10000));
        CASE(year = rnd.nextInt(1, 10000));
        CASE(year = rnd.nextInt(1, 10000));
    }
};