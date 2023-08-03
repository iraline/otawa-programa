#include <elm/io.h>
#include <otawa/otawa.h>
#include <otawa/app/Application.h>
#include <otawa/cfg/features.h>
#include <otawa/cfg/CFG.h> //CFGMaker
#include <otawa/ipet.h>

using namespace elm;
using namespace otawa;

int main(int argc, char **argv) {
  try {
    PropList props;
    cout << "AAAAAAAAAAAAAAAA "; 

    //Dessa forma ele carrega o programa passado como parametro
    WorkSpace *ws = MANAGER.load(argv[1], props);
    cout << "bAAAAAAAAAAAAAAAA ";    
    ipet::WCETComputation comp;
        cout << "cAAAAAAAAAAAAAAAA ";
    comp.processWorkSpace(ws);
        cout << "dAAAAAAAAAAAAAAAA ";
    cout << "the wcet is " << ipet::WCET(ws) << io::endl;
  }
  catch(elm::Exception& e) {
    cout << "eAAAAAAAAAAAAAAAA ";
    cout << "ERROR: " << e.message() << '\n';
  }
}