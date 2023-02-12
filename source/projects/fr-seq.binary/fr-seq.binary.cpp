#include "c74_min.h"
#include <fr_musp/binary_sequence/binary_sequence.h>

using namespace c74::min;

class binary : public object<binary> {
public:
    MIN_DESCRIPTION{"Filter bangs according to binary sequences"};
    MIN_TAGS{"utilities"};
    MIN_AUTHOR{"Frank Krick"};

    inlet<> input{this, "(bang) outputs bang if current value is 1. Move current forward"};
    outlet<> output{this, "(anything) bang if current value is 1."};

    message<> bang{this, "bang", "Output bang if current value is 1",
                   MIN_FUNCTION {
                       return {};
                   }
    };

};

MIN_EXTERNAL(binary);
