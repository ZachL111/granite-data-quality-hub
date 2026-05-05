#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{71, 80, 15, 24, 4};
    assert(score_signal(signal_case_1) == 29);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{60, 70, 24, 6, 13};
    assert(score_signal(signal_case_2) == 141);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{85, 96, 17, 15, 6};
    assert(score_signal(signal_case_3) == 140);
    assert(classify_signal(signal_case_3) == "review");
}
