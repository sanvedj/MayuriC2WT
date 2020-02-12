/*
Problem Statement : 

Write a program in C to list all the files present in the directory .

*/

#include <stdio.h> 
#include <dirent.h> 
  
int main()  { 
    struct dirent *de;  // Pointer for directory entry 
  
    // opendir() returns a pointer of DIR type.  
    DIR *dr = opendir("."); 
  
    if (dr == NULL)  // opendir returns NULL if couldn't open directory 
    { 
        printf("Could not open current directory" ); 
        return 0; 
    } 
  
    while ((de = readdir(dr)) != NULL) 
            printf("%s\n", de->d_name); 
  
    closedir(dr);     
    return 0; 
}

/*
Output : 

mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ gcc Program4.c 
mayuri@mayuri-PC:~/C2WT/Chap8_Assignment$ ./a.out
.
Program1.c
Program2.c
..
file2.txt
mayuri.txt
Program3.c
file1.txt
a.out
Program4.c

*/
