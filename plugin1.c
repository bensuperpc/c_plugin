#include "plugin1.h"

void fn1(void) {
    fprintf(stdout, "fn1 from plugin v1\n");
}

int fn2(int a) {
    fprintf(stdout, "fn2 from plugin v1\n");

    return a + 1;
}

struct API_v1 api_table = {
    .plugin_fn1 = fn1,
    .plugin_fn2 = fn2
};
