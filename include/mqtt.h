/* Copyright (c) 2017 Unwired Devices LLC [info@unwds.com]
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

#ifndef MQTT_H
#define MQTT_H

#define UNWDS_MODULE_NOT_FOUND 255

typedef enum {
	CMD_PING = 'P',				/* Command to ping/pong with client */
	CMD_DEVLIST = 'L',			/* Command to get devices list from a gate */
	CMD_IND = 'I',				/* Individual command to the mote by address */
	CMD_HAS_PENDING = '?',		/* Individual device has N pending packets */
	CMD_INVITE = 'V',			/* Individual invite to join network for class C devices */
	CMD_BROADCAST = 'B',		/* Broadcast message */

	CMD_ADD_STATIC_DEV = 'A',	/* Sets nonce from which key will be derived for the specified network address and channel (for statically personalized devices) */
	CMD_KICK_ALL_STATIC = 'K',	/* Kicks device by specified network address via removing it from devices list */

	CMD_FLUSH = 'F',			/* Command to get all pending info */
    
    CMD_SET_REGION = 'G',
    CMD_SET_CHANNEL = 'C',
    CMD_SET_DATARATE = 'D',
    CMD_SET_JOINKEY = 'J',
    CMD_REBOOT = 'R',
    CMD_FW_UPDATE = 'U'
} gate_cmd_type_t;

typedef enum {
	REPLY_PONG = '!',		/* Reply for ping command from client */
	REPLY_LIST = 'L',		/* Reply for the device list command */
	REPLY_IND = 'I',		/* Reply from the individual mote */

	REPLY_JOIN = 'J',		/* Node is joined to the network */
	REPLY_KICK = 'K',		/* Node is kicked from the network */

	REPLY_ACK = 'A',		/* Application data acknowledged by the node */

	REPLY_PENDING_REQ = 'R', /* Gate requesting pending frames from upper layer */
} gate_reply_type_t;

typedef enum {
	LS_ED_CLASS_A = 0,
	LS_ED_CLASS_B = 1,
	LS_ED_CLASS_C = 2,
} ls_node_class_t;

#endif
