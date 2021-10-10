#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

#define TOTAL_CLASS 3

static void delete_unused_instances(Base** instances, const int randam_idx)
{
    for (int i = 0; i < TOTAL_CLASS; ++i) {
        if (i == randam_idx) {
            continue ;
        }
        delete instances[i];
    }
}

static void define_rand_seed()
{
    static bool is_first_time = true;
    if (is_first_time) {
        srand(time(0));
        is_first_time = false;
    }
}

Base * generate(void)
{
    define_rand_seed();
    const int randam_idx = rand() % TOTAL_CLASS;
    Base* instances[TOTAL_CLASS] = {
        new A,
        new B,
        new C
    };

    Base* instance_to_return = instances[randam_idx];
    delete_unused_instances(instances, randam_idx);
    return instance_to_return;
}
