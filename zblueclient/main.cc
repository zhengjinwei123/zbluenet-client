//socket ¿Í»§¶Ë
#include <stdio.h>
#include <string.h>
#include <WINSOCK2.H>
#include "dynamic_buffer.h"
#include "c2s_message.h"

#pragma comment(lib,"ws2_32.lib")

#define INT_SERVER_PORT 9091
//#define STR_SERVER_IP "127.0.0.1"
#define STR_SERVER_IP "10.235.200.249"
#define INT_DATABUFFER_SIZE 1024
#define STR_EXIT "exit"
#define  WINSOCK_VERSION MAKEWORD(2,0)
typedef struct sockaddr_in sockaddr_in;
typedef struct WSAData WSAData;
typedef struct sockaddr sockaddr;

void main(void)
{
	WSAData wsaData;
	WSAStartup(WINSOCK_VERSION, &wsaData);

	SOCKET sockClient = socket(AF_INET, SOCK_STREAM, 0);
	if (INVALID_SOCKET == sockClient)
	{
		printf("Failed to create client!\r\n");
		WSACleanup();
	}

	sockaddr_in addrClient;
	addrClient.sin_addr.S_un.S_addr = inet_addr(STR_SERVER_IP);
	addrClient.sin_family = AF_INET;
	addrClient.sin_port = htons(INT_SERVER_PORT);


	int iResult;
	iResult = connect(sockClient, (sockaddr *)&addrClient, sizeof(sockaddr_in));
	if (SOCKET_ERROR == iResult)
	{
		printf("Failed to connect server!\r\n");
		WSACleanup();
		return;
	}

	if (0 != iResult)
	{
		int iErrorCode;
		iErrorCode = WSAGetLastError();
		printf("Failed to connect server,error:%d.\r\n", iErrorCode);
		WSACleanup();
		return;
	}
	
	char szDataBuffer[INT_DATABUFFER_SIZE];

	int age = 1;
	while (1)
	{
		/*memset(szDataBuffer, 0, INT_DATABUFFER_SIZE);
		scanf("%s", szDataBuffer);*/

		
		C2SLoginRequest login;

		login.data.set_account("lvbu");
		login.data.set_age(age++);
		login.data.add_friends(age);
		login.data.add_friends(age+1);

		login.encode(szDataBuffer, sizeof(login.data));

		zbluenet::DynamicBuffer buffer;
		buffer.writeInt16(1001);
		buffer.writeInt16(sizeof(login.data));
		buffer.writeBytes(szDataBuffer, sizeof(login.data));

		if (0 == strcmp(szDataBuffer, STR_EXIT))
		{
			printf("The client has stopped!\r\n");
			break;
		}
		else
		{
			if (1 > send(sockClient, buffer.readBegin(), buffer.readableBytes(), 0))
			{
				printf("Failed to send data!\r\n");
			}

			char buffer[1024];
			memset(buffer, 0, sizeof(buffer));
			int recvN = recv(sockClient, buffer, sizeof(buffer), 0);
			if (recvN > 0) {
				zbluenet::DynamicBuffer buffer2;
				buffer2.writeBytes(buffer, recvN);

				uint16_t message_id = 0;
				buffer2.readInt16(message_id);
				uint16_t message_length = 0;
				buffer2.readInt16(message_length);
				char data[1024];
				memset(data, 0, sizeof(buffer));

				buffer2.readBytes(data, message_length);

				C2SLoginRequest login2;
				login2.decode(data, message_length);

				printf("recv message %s \n", login2.dump().c_str());
			}
		}
		//Sleep(100);
	}
	closesocket(sockClient);
	WSACleanup();

}