# zbluenet-client
zbluenet 网络库 客户端测试程序

配置注意:
```
1. 预处理器添加 ： 
_WINSOCK_DEPRECATED_NO_WARNINGS
_CRT_SECURE_NO_WARNINGS
PROTOBUF_USE_DLLS

2. VC++ 目录添加：
包含目录： zblueclient\lib
库目录： zblueclient\lib\google\protobuf\lib\Debug

3. 链接器->输入： libprotobufd.lib
```