/*
 * TelemModule.h
 *
 *  Created on: 24 Mar 2018
 *      Author: root
 */

#ifndef INCLUDE_TELEMMODULE_H_
#define INCLUDE_TELEMMODULE_H_

#include "TelemInterfaceStructs.h"
#include "mavlink/SoteriaRover/mavlink.h"

class TelemModule
{
public:
	void Start();
	void Execute(const mavlink_telem_command_t& TelemCommand_in,
			mavlink_telem_report_t& TelemReport_out);
	void Stop();
	void Debug();

	bool debugEnabled;

private:
	unsigned char buffer[2041];
	int bufferLength;
	mavlink_status_t mavlinkStatus;
	mavlink_heartbeat_t mavTM;
	mavlink_message_t mavMsg;
	int msgLength;

	void EncodeTelem(const mavlink_telem_command_t& TelemCommand_in);
	void UpdateReport(mavlink_telem_report_t& TelemReport_out);
};

#endif /* INCLUDE_TELEMMODULE_H_ */
