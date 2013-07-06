#include <fcntl.h>      /* open */ 
#include <unistd.h>     /* exit */
#include <sys/ioctl.h>  /* ioctl */
#include <linux/ioctl.h>


#define BTHWCTL_IOC_MAGIC            0xf6
#define BTHWCTL_IOCTL_SET_POWER      _IOWR(BTHWCTL_IOC_MAGIC, 0, uint32_t)
#define BTHWCTL_IOCTL_SET_EINT       _IOWR(BTHWCTL_IOC_MAGIC, 1, uint32_t)
#define BTHWCTL_DEV_NAME             "/dev/bthwctl"

//typedef unsigned long uint32_t;

int main (int argc,char * argv [])
{
int file_desc=open(BTHWCTL_DEV_NAME, 0);
int rc;
int dato;
printf ("File aperto %d\n",file_desc);

dato=atoi(argv[1]);
rc = ioctl(file_desc, BTHWCTL_IOCTL_SET_POWER, &dato);
printf ("ioctl fatto %d\n",rc);

close (file_desc);
}
