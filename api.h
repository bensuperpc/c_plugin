#ifndef API_HEADER_H
#define API_HEADER_H

struct API_v1 {
    void (*plugin_fn1)(void);
    int (*plugin_fn2)(int);
};

#endif
