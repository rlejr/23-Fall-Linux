
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
void intHandler();
int child_id;
int i = 1;
int main( )
{
	int pid;
	signal(SIGINT, intHandler);
	if((pid = fork()) ==0)
	{
		for(i = 1; i<= 20;i++){
			for(int i2 = 1; i2 <= 9; i2++){
				printf("%d\n",i*i2);
				sleep(1);
			}
		}
		if(i>= 10){
			signal(	
					
		}

	}else{
		signal(SIGINT, intHandler);
	}


}
void intHandler(int signo)
{
	if(i >= 10){
		kill(child_id,SIGINT);
}
