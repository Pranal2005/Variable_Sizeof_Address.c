#include<stdio.h>
#include<unistd.h>
#include<io.h>           //extra added because sole the probelm in some system
#include<fcntl.h>       //add beacuase showing error in linux and ios os so we added it 
//manpage for linux      

int main()
{
    int fd = 0;

    fd = creat("Demo.txt",0777);

    if(fd == -1)
    {
        printf("Unavailable to create the file");
        return -1;
    }
    else
    {
        printf("File gets create with fd: %d\n",fd);
    }

    return 0;
}

