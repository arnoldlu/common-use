#define _POSIX_C_SOURCE 199309
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 256

char buffer_g_u[BUF_SIZE];
char buffer_g_i[BUF_SIZE] = "0123456789";
char buffer_g_u_unuse[BUF_SIZE];
char buffer_g_i_unuse[BUF_SIZE] = "0123456789";
static char buffer_g_s_u[BUF_SIZE];
static char buffer_g_s_i[BUF_SIZE] = "0123456789";
static char buffer_g_s_u_unuse[BUF_SIZE];
static char buffer_g_s_i_unuse[BUF_SIZE] = "0123456789";

int main(int argc, char *argv[])
{
	char buffer_l_u[BUF_SIZE];
	char buffer_l_i[BUF_SIZE] = "0123456789";
	char buffer_l_u_unuse[BUF_SIZE];
	char buffer_l_i_unuse[BUF_SIZE] = "0123456789";
	static char buffer_l_s_u[BUF_SIZE];
	static char buffer_l_s_i[BUF_SIZE] = "0123456789";
	static char buffer_l_s_u_unuse[BUF_SIZE];
	static char buffer_l_s_i_unuse[BUF_SIZE] = "0123456789";

	char buffer_local_main[BUF_SIZE];

	char *buffer_alloc, *buffer_alloc_unuse;

	buffer_g_u[0] = 1;
	buffer_g_i[0] = 1;
	buffer_g_s_u[0] = 1;
	buffer_g_s_i[0] = 1;

	buffer_l_u[0] = 1;
	buffer_l_i[0] = 1;
	buffer_l_s_u[0] = 1;
	buffer_l_s_i[0] = 1;

	buffer_alloc = malloc(BUF_SIZE);
	buffer_alloc_unuse = malloc(BUF_SIZE);
	buffer_alloc[0] = 1;

	free(buffer_alloc);
	free(buffer_alloc_unuse);
}

