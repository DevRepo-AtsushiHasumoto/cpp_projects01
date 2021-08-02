#include <test01.h>
#include <misc01/misc01.h>


int main (int argc , char *argv[])
{
  std::cout << "Hello Emacs multiple Directories project Test01 !!" << std::endl;
  Misc01 misc;
  misc.num = 100;
  misc.str = "Misc01 class";
  std::cout << misc.num << " " << misc.str << "\n";
  
  return 0;
}
