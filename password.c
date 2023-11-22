
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void intHandler();
void intHandler2();

int main()
{
	int num1;
	signal(SIGALRM, intHandler);
	signal(SIGINT, intHandler2);
	alarm(10);

	while(1){
		scanf("%d", &num1);
		if(num1 == 123){
			break;
		}
	}
	printf("correct\n");


}
void intHandler(int signo)
{
	printf("fire! \n");
	exit(0);

}
void intHandler2(int signo)
{
	printf("reset! \n");

	alarm(10);

}
