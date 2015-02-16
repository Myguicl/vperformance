#include <unistd.h>
#include <VPerformance>

void doSomething(int msec)
{
  usleep(msec * 1000);
}

int main()
{
  VPerformance pfm;
  for (int i = 0; i < 10; i++)
  {
    pfm.check(__LINE__);
    doSomething(10);
    pfm.check(__LINE__);
    doSomething(20);
    pfm.check(__LINE__);
    doSomething(30);
    pfm.check(__LINE__);
    doSomething(40);
    pfm.check(__LINE__);
    doSomething(50);
  }
  pfm.report();
}
