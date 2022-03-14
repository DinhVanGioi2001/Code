#include <stdio.h>
#include <dos.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

struct BOOT
{ // for FAT16
	char jmp[3];
	char OEM[8];
	int bytes_per_sector;
	char sectors_per_cluster;
	int reserved;
	char FAT_cnt;
	int ROOT_size;
	int total_sectors;
	char media;
	int FAT_size;
	int sectors_per_track;
	int head_cnt;
	long hidden_sectors;
	long total_sectors_long;
	char unknown[3];
	long serial;
	char volume[11];
	char FAT_type[8];
	char loader[448];
	char mark[2];
};

typedef unsigned char BYTE;

/* Struct time */
typedef struct
{
	BYTE seconds : 5;
	BYTE minutes : 6;
	BYTE hours : 5;
} Time;

typedef struct
{
	BYTE day : 5;
	BYTE month : 4;
	BYTE year : 7;
} Date;

struct ROOT
{
	char name[8];
	char ext[3];
	char attr;
	char reserved[10];
	// char time[2];
	// char date[2];
	Time create_time;
	Date create_date;
	int first_cluster;
	long size;
};

void display_boot_sector(BOOT boot)
{
	printf("Reading disk parameters\n");
	printf("-------------------------\n");
	printf("Sector size: %d\n", boot.bytes_per_sector);
	printf("Sectors per cluster: %d\n", boot.sectors_per_cluster);
	printf("Total sectors: %d\n", boot.total_sectors);
	printf("Sectors per track: %d\n", boot.sectors_per_track);
	printf("Hidden sectors: %d\n", boot.hidden_sectors);
	printf("Extended sectors: %d\n", boot.total_sectors_long);

	
}
void docFat(BOOT boot, int i){
	printf("FAT type: ");

	for (i = 0; i < 8; i++)
		printf("%c", boot.FAT_type[i]);
	printf("\n");

	// Reading FAT16 table from disk
	printf("\n\n");
	printf("Reading FAT16 parameters\n");
	printf("-------------------------\n");
	printf("FAT size: %d \n", boot.FAT_size);
	printf("Reserved: %d \n", boot.reserved);
	printf("FAT count: %d \n", boot.FAT_cnt);
}

void display_first_100_cells(unsigned int *fat, int i)
{
	// printing first 100 FAT cells
	printf("Content of first 100 FAT cells: ");
	for (i = 0; i < 100; i++)
		printf("%u ", fat[i]);
}

void display_like_dir_from_ROOT(ROOT *root, int i)
{
	// Printing first 9 items of root
	printf("9 first items of root:\n");
	for (i = 0; i < 9; i++)
	{
		if (root[i].name[0] == ' ')
			continue;
		// for(int j = 0; j < 8 && root[i].name[j] != ' '; j++)
		//	printf("%c", root[i].name[j]);
		printf("%s  ", root[i].name);

		Date create_date = root[i].create_date;
		Time create_time = root[i].create_time;
		printf("%ld  ", root[i].size);
		printf("%2u-%2u-%2u  ", create_date.month, create_date.day, (create_date.year + 1980) % 100);
		printf("%2u:%2up  ", create_time.hours, create_time.minutes);
		printf("\n");
	}
}

void display_clusters_from_file(BOOT boot, ROOT *root, unsigned int *fat, unsigned int cur, int i)
{
	int k;

	char str[9];

	// Comparing

	char filename[8];
	int first_cluster = -1;
	while (1)
	{
		printf("\n Enter a file name: ");
		scanf("%s", filename);

		if (strcmp(filename, "aaa") == 0)
		{
			break;
		}
		first_cluster = -1;

		printf("\n boot.root_size %d \n", boot.ROOT_size);
		for (i = 0; i < boot.ROOT_size; i++)
		{
			// for(i = 0; i < 10; i++){
			// Copy root[i].name to str to make null-terminated string
			for (k = 0; k < 8 && root[i].name[k] != ' '; k++)
				str[k] = root[i].name[k];
			str[k] = 0;
			if (strcmp(str, filename) == 0)
			{
				printf(" File existed \n");
				first_cluster = root[i].first_cluster;
				printf("\nfirst cluster index: %d \n", root[i].first_cluster);
				break;
			}
		}

		// Printing clusters belonging to the file
		if (first_cluster >= 0)
		{
			cur = first_cluster;
			printf("clusters: ");
			while (cur < 0xFFF8)
			{
				printf("%u ", cur);
				cur = fat[cur];
			}
			printf("\n");
		}
	}
}

void display_number_of_free_clusters_from_first_100_clusters(unsigned int *fat, int i)
{
	// Counting number of free clusters from first 100 clusters
	int free_count = 0;
	for (i = 2; i < 100; i++)
	{ // first 2 clusters are not used
		if (fat[i] == 0)
			free_count++;
	}
	printf("\n");
	printf("Number of free clusters from first 100 clusters: ");
	printf("%d\n", free_count);
}

void display_clusters_of_file_from_n(unsigned int *fat, unsigned int cur, unsigned int n)
{
	printf("Clusters of a file from %u: ", n);
	while (cur < 0xFFF8)
	{
		printf("->%u", cur);
		cur = fat[cur];
	}
}

void main()
{

	int drive = 3, chon, i; // A=0, B=1, C=2, D=3 ...

	// Reading boot sector from disk D
	BOOT boot;
	unsigned int *fat = (unsigned int *)malloc(boot.FAT_size * boot.bytes_per_sector);
	int num_byte = boot.ROOT_size * 32; // sizeof(ROOT)

	ROOT *root = (ROOT *)malloc(num_byte);
	int res = absread(drive, 1, 0, &boot);
	if (res != 0)
	{
		return;
	}
	if (fat == NULL)
	{
		printf("Not enough memory\n");
		return;
	}
	while(1){
		printf("\n---Menu---");
		printf("\nCau 1.");
		printf("\nCau 2.");
		printf("\nCau 3.");
		printf("\nCau 4.");
		printf("\nCau 5.");
		printf("\n0. Thoat");
		printf("\nChon");
		scanf("%d", &chon);
		switch (chon){
		case 1:{
			display_boot_sector(boot, i);
			break;
		}
		case 2:{
			res = absread(drive, boot.FAT_size, boot.reserved, fat);
			if (res != 0)
			{
				printf("Cannot read FAT\n");
				return;
			}

			docFat(boot, i);

			display_first_100_cells(fat, i);
			break;
		}
			// Reading ROOT from disk D
			printf("\n\n");
			printf("Reading ROOT information:\n");
			printf("------------------------\n");

			if (root == NULL)
				return;

			int num_sector = num_byte / boot.bytes_per_sector;
			int root_begin = boot.reserved + boot.FAT_size * boot.FAT_cnt;

			res = absread(drive, num_sector, root_begin, (void *)root);
			if (res != 0)
			{
				printf("\n Cannot read ROOT\n");
				return;
			}

			display_like_dir_from_ROOT(root, i);
			break;
		}
		case 4:{
			unsigned int n = 5;
			unsigned int cur = n;

			// Printing clusters of a file from cluster n
			display_clusters_of_file_from_n(fat, cur, n);

			

			// Find a file with name given in char filename[]
			printf("\n");
			printf("Clusters belong to file readme: ");

			display_clusters_from_file(boot, root, fat, cur, i);

			free(root);
			free(fat);
		
			char file1[3];
			scanf("Vao str de KET THUC %s", file1);
			getchar();
			break;
		}
		case 5:{
			display_number_of_free_clusters_from_first_100_clusters(fat, i);
			break;
		}
		case 0:
			return;
		default:
			printf("\nNhap 1-4!");
			break;
		}

	}
}