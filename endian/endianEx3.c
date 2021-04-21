#include <stdio.h>

//https://3001ssw.tistory.com/143


void exam2(void) {
	char tmp1[4];
	char tmp2[4];
	int a = 0x11223344;
	int b;
	
	short c = 0x1122;
	short d;
	
	b = htonl(a);	// host to newtork
	memcpy(tmp1,&a,sizeof(int));
	memcpy(tmp2,&b,sizeof(int));
	printf("%08x %08x %02x%02x%02x%02x %02x%02x%02x%02x\n\r",a,b,tmp1[0],tmp1[1],tmp1[2],tmp1[3],tmp2[0],tmp2[1],tmp2[2],tmp2[3]);
	
	
	b = ntohl(a);	// network to host
	memcpy(tmp1,&a,sizeof(int));
	memcpy(tmp2,&b,sizeof(int));	
	printf("%08x %08x %02x%02x%02x%02x %02x%02x%02x%02x\n\r",a,b,tmp1[0],tmp1[1],tmp1[2],tmp1[3],tmp2[0],tmp2[1],tmp2[2],tmp2[3]);
	
	
	d = htons(c);	// host to newtork
	memcpy(tmp1,&a,sizeof(short));
	memcpy(tmp2,&b,sizeof(short));
	printf("%04x %04x %02x%02x %02x%02x\n\r",c,d,tmp1[0],tmp1[1],tmp2[0],tmp2[1]);
	
	
	d = ntohs(c);	// network to host
	memcpy(tmp1,&a,sizeof(short));
	memcpy(tmp2,&b,sizeof(short));	
	printf("%04x %04x %02x%02x %02x%02x\n\r",c,d,tmp1[0],tmp1[1],tmp2[0],tmp2[1]);
		

}

