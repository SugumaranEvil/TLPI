/***********************************************************/
/*  Author       : Sugumaran_A                             */
/*  File_Name    : rcv_shm.c                               */         
/*  Description  : System V Shared memory [ receiving]     */
/*  Date         : 19-05-2020                              */
/***********************************************************/

#include "sys_v_shm.h"

int main()
{
	char string[100];
	int shmid;
	char *data;

	shmid = shmget(1000, 100, 0);
	perror("shmget ");

	data = shmat(shmid, NULL, 0);
	perror("shmat");

	strcpy(string, data);
	perror("strcpy");

	printf("Data ==> %s\n",string);

	shmdt(data);
	perror("shmat");

}
