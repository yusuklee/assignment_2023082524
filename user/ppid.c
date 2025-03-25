#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(){

	int pid = getpid();
	int ppid = getppid();

	printf("My studuent ID is 2023082524");
	printf("My PID is %d \n", pid);
	printf("My Parent PID is %d \n", ppid);

	exit(0);
}
