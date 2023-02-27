//spec.cpp이 사양파일
//tcframe 헤더
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int A,B,C,clock;
//입출력 변수와 형식
    void InputFormat() {
        LINE(A,B);
        LINE(C);
    }

    void OutputFormat() {
        LINE(clock);
    }
//등급 구성
    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(128);
    }
//제약사항
    void Constraints() {
        CONS(A >= 0 && A <= 23);
        CONS(B >= 0 && B <= 59);
        CONS(C >= 0 && C <= 1000);
    }
};
//시험 사양 클래스
class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
//테스트 사레 정의
    void SampleTestCase1() {
        //샘플 테스트케이스
        Input({
            "14 30","20"
        });
        Output({
            "14 50"
        });
    }


    void TestCases() {
        //랜덤 테케
        CASE(A = rnd.nextInt(0, 23), B = rnd.nextInt(0, 59), C = rnd.nextInt(0,1000));
        CASE(A = rnd.nextInt(0, 23), B = rnd.nextInt(0, 59), C = rnd.nextInt(0,1000));
        CASE(A = rnd.nextInt(0, 23), B = rnd.nextInt(0, 59), C = rnd.nextInt(0,1000));
        CASE(A = rnd.nextInt(0, 23), B = rnd.nextInt(0, 59), C = rnd.nextInt(0,1000));
              
    }
};