#include <stdio.h>

int main() 
{
	//read in the filenames
	FILE *read_file;
	FILE *write_file;
	read_file = fopen("f1.txt", "r");
	write_file = fopen("f2.txt", "w");
	if (!read_file) {
		return 1;
	}
	if (!write_file) {
		return 1;
	}

	char buf[1000], rest[20];
	int increment;
	while (fgets(buf,1000, read_file)!=NULL) {
		printf("%s",buf);
		sscanf(buf, "%d %s",&increment, rest);
		printf("Increment: %d Rest: %s\n", increment, rest);
		increment = increment + 1;
		fprintf(write_file, "%d %s\n", increment, rest);
	}

	//close all open files
	fclose(read_file);
	fclose(write_file);
	return 0;
}


/*
#include <stdio.h>

int main()
{
	FILE *ptr_file;
	int i;

	ptr_file =fopen("output.txt","w");
	if (!ptr_file)
      		return 1;

	i = 1;
	do{
	  fprintf(ptr_file, "%d %d\n", i, i*i);
	} while (i++ < 10); 

  
       	fclose(ptr_file);
        return 0;
	}

#include<stdio.h>

int main()
{
	FILE *ptr_file;
	char buf[1000], first_name[20], last_name[20];
	int mid, final;

	ptr_file =fopen("input.txt","r");
	if (!ptr_file)
      		return 1;

       	while (fgets(buf,1000, ptr_file)!=NULL)
	  {
 		printf("%s",buf);
		sscanf(buf, "%s %s %d %d",first_name, last_name, &mid, &final);
		printf("Name: %s %s Mid: %d Final: %d\n",first_name, last_name, mid, final);
	  }

       	fclose(ptr_file);
        return 0;
	}
	*/