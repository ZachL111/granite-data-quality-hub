#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{74, 43, 16, 87};
    assert(domain_review_score(item) == 230);
    assert(domain_review_lane(item) == "ship");
}
