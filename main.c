#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include "api.h"

int main(int argc, char** argv)
{
    void *plugin;
    
    if (argc != 2) {
        fprintf(stderr, "Usage: %s pluginX (plugin1, plugin2...)\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (strcmp(argv[1], "plugin1") == 0) {
        plugin = dlopen("./plugin1.so", RTLD_LAZY);
    } else if (strcmp(argv[1], "plugin2") == 0) {
        plugin = dlopen("./plugin2.so", RTLD_LAZY);
    } else {
        fprintf(stderr, "Error: unsupported plugin: %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    if (!plugin) {
        fprintf(stderr, "Error: %s\n", dlerror());
        return EXIT_FAILURE;
    }

    fprintf(stdout, "%s loaded successfully\n", argv[1]);

    struct API_v1 *API_table = dlsym(plugin, "api_table");

    API_table->plugin_fn1();
    int i = API_table->plugin_fn2(8);

    dlclose(plugin);

    fprintf(stdout, "%s unloaded successfully\n", argv[1]);

    return EXIT_SUCCESS;
}
