Important codes for user use on Bluetooth connection:
			(Hexa)		(ASCII Character)
------------------------------------------------------------------------------------ Inputs to the system 
PIUD Byte:		0x37	==	7 

LED0_OFF:		0x31	==	1
LED0_ON:		0x32	==	2
LED0_Toggle:		0x33	==	3

LED1_OFF:		0x41	==	A
LED1_ON:		0x42	==	B
LED2_Toggle:		0x43	==	C

LED2_OFF:		0x51	== 	Q
LED2_ON:		0x52	==	R
LED2_Toggle:		0x53	==	S

Terminate request packet:	0x0D	==	CR
-------------------------------------------------------------------------------------- Outputs of the system
Request Done Response:	0x12	==	DC2
Invalid Operation Response:	0x10	==	DLE
Invalid Device Response:	0x0F	==	SI
----------------------------------------------------------------------------------------------------------------------------

Kindly note that device / Operation codes can be changed by adjusting the (DEV_CONST & OPER_CONST) macros in "Smart_Home_Sys_Config.h"
The system then shift -half byte to the left - the one half byte value (represented by macro DEV_CONST) and OR it with the masked half byte value (represented by macro OPER_CONST) to encode noth device and operation in one byte.
Inverse operation is done by the system.

Kindly also note that system support that the device and operation each be sent in in its own byte by setting the macro (COMMAND_BYTE_LENGTH) in "Smart_Home_Sys_Config.h" to 2 instead of 1 and in such case the above decoding system will be neglected.
Though this is a pre-build configuration and hence can only be set in the development phase of the system.

Latest Updates: 
kindly be informed that a small tweak has been made to system configuration to change the baud rate of the UART for the BT module.
As it has been found that this is HC-06 not HC-05 hence the data sheet acquired was not accurate and the device is not running baudrate 38400 but the normal 9600.

Kindly also note that the android mobile application I've been working on to control the system has been finished and tested and finally reached a working version.
Application was crashing as it was haulting on a wait for response from the BT module (as intended HC-05 is a send/receive module while HC-06 is receive only hence tweaked the application and removed the haulting function.)

App inventor online application used to develop this android mobile application below;
http://ai2.appinventor.mit.edu/#4525380450254848
