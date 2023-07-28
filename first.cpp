#include <elm/io.h>
#include <otawa/otawa.h>

using namespace elm;
using namespace otawa;

int main(int argc, char **argv) {
  try {
    PropList props;

    WorkSpace *ws = MANAGER.load(argv[1], props);
    Address addr = ws->process()->findLabel("main");
    cout << "main found at " << addr << io::endl;
    return 0;
  }
  catch(otawa::Exception& e) {
    cerr << "ERROR: " << e.message() << io::endl;
    return 1;
  }
}