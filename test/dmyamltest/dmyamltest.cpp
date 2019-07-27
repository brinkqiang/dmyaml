
#include "dmyaml.h"

int main( int argc, char* argv[] ) {

    Idmyaml* module = dmyamlGetModule();
    if (module)
    {
        module->Test();
        module->Release();
    }
    return 0;
}
