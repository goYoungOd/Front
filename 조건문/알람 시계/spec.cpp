//spec.cpp이 사양파일
//tcframe 헤더
#include <tcframe/spec.hpp>
using namespace tcframe;

class ProblemSpec : public BaseProblemSpec {
protected:
    int H,M;
//입출력 변수와 형식
    void InputFormat() {
        LINE(H,M);
        
    }

    void OutputFormat() {
        LINE(H,M);
    }
//등급 구성
    void GradingConfig() {
        TimeLimit(1);
        MemoryLimit(128);
    }
//제약사항
    void Constraints() {
        CONS(H >= 0 && H <= 23);
        CONS(M >= 0 && M <= 59);
        
    }
};
//시험 사양 클래스
class TestSpec : public BaseTestSpec<ProblemSpec> {
protected:
//테스트 사레 정의
    void SampleTestCase1() {
        //샘플 테스트케이스
        Input({
            "10 10"
        });
        Output({
            "0 30"
        });
    }


    void TestCases() {
        //랜덤 테케
        CASE(H = rnd.nextInt(0, 23), M = rnd.nextInt(0, 59));
        CASE(H = rnd.nextInt(0, 23), M = rnd.nextInt(0, 59));
        CASE(H = rnd.nextInt(0, 23), M = rnd.nextInt(0, 59));
        CASE(H = rnd.nextInt(0, 23), M = rnd.nextInt(0, 59));       
    }
};