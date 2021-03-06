/*
 * TmTcModule.h
 *
 *  Created on: 24 Feb 2018
 *      Author: dan
 */

#ifndef TELEC_TELECMODULE_H_
#define TELEC_TELECMODULE_H_

#include "CommsModule.h"
#include "MotorModule.h"
#include "mavlink/SoteriaRover/mavlink.h"
#include "CommsInterfaceStructs.h"
#include "TelecInterfaceStructs.h"
#define MSG_BUFFER_SIZE 10

class TelecModule
{
public:
	void Start();
	void Execute(mavlink_telec_report_t& TelecReport_out,
			mavlink_telec_command_t& TelecReport_in);
	bool debugEnabled;

private:
	unsigned char buffer[2041];
	int bufferLength;
	mavlink_status_t mavlinkStatus;
	mavlink_message_t parsedMsg; //buffer containing the TC from GS
	int numParsedMsgs;

	void ParseMessages(const mavlink_telec_command_t& TelecReport_in);
	void UpdateReport(mavlink_telec_report_t& TelecReport_out);
	void EncodeMessages();

	void Debug();

};

#endif /* TELEC_TELECMODULE_H_ */
