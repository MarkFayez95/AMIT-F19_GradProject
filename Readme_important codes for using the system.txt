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

