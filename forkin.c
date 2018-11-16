#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>





int main() {
  int mainPid = getpid();
  int child1 = fork();
  int child2;
  if (child1) {
    child2 = fork();
  }

  if(getpid() != mainPid){
      srand(getpid());
      int randval = abs(rand()%16 + 5);
      sleep(abs(rand()%16 + 5));
      printf("%d\n" , randval );
  }
  printf("My pid is:%i\tMy parent's pid is: %i\n", getpid(), getppid() );
  printf("Child1 for all: %i\n", mainPid);

  return 0;
}
