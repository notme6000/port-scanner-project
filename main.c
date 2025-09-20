#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>

struct pseudo_header {
	u_int32_t source_address;
	u_int32_t dest_address;
	u_int8_t placeholder;
	u_int8_t protocol;
	u_int16_t tcp_length;
};

typedef struct {
	char ip[60];
	char ports[30];
} IpPorts;

// function declaration

void scan();
IpPorts start();

int main() {
	IpPorts data = start();

	printf("ip = %s\n",data.ip);
	printf("ports = %s\n",data.ports);
}

IpPorts start() {
	char ip[60];
	char ports[30];

	printf("========PORT-SCANNER========\n");
	printf("enter the ip/domain : ");
	printf("");
	scanf("%s", ip);
	printf("enter the port range : ");
	printf("");
	scanf("%s", ports);
	printf("============================\n");

	IpPorts result;
	strcpy(result.ip,ip);
	strcpy(result.ports,ports);
	return result;
}

void scan() {


}
