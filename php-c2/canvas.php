#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=5;
	
	if (<?php include("contents.php"); ?>)
		printf("Nombre pair");
	else
		printf("Nombre impair");
	
    return 0;
}

