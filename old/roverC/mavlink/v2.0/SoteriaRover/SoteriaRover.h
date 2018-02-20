/** @file
 *  @brief MAVLink comm protocol generated from SoteriaRover.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_SOTERIAROVER_H
#define MAVLINK_SOTERIAROVER_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_SOTERIAROVER.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 5, 2, 0, 0, 0}, {1, 133, 9, 0, 0, 0}, {2, 162, 3, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_SOTERIAROVER

// ENUM DEFINITIONS


/** @brief Commands for the locomotion module */
#ifndef HAVE_ENUM_LOCOM_COMAMND_ID
#define HAVE_ENUM_LOCOM_COMAMND_ID
typedef enum LOCOM_COMAMND_ID
{
   LOCOM_COMMAND_STOP=0, /* Command the locom module to stop the rover | */
   LOCOM_COMMAND_STRAIGHT_FORWARD=1, /* Command the rover to drive straight forward | */
   LOCOM_COMMAND_STRAIGHT_BACKWARD=2, /* Command the rover to drive straight backward | */
   LOCOM_COMMAND_TURN_RIGHT=3, /* Command the rover to turn right | */
   LOCOM_COMMAND_TURN_LEFT=4, /* Command the rover to turn left | */
   LOCOM_COMAMND_ID_ENUM_END=5, /*  | */
} LOCOM_COMAMND_ID;
#endif

/** @brief Mode of each motor (i.e m1 and m2) */
#ifndef HAVE_ENUM_MOTOR_COMMAND_ID
#define HAVE_ENUM_MOTOR_COMMAND_ID
typedef enum MOTOR_COMMAND_ID
{
   MOTOR_COMMAND_STOP=0, /* Command to stop motor | */
   MOTOR_COMMAND_FORWARD=1, /* Command for motor to travel forward | */
   MOTOR_COMMAND_BACKWARD=2, /* Command for motor to go backward | */
   MOTOR_COMMAND_ID_ENUM_END=3, /*  | */
} MOTOR_COMMAND_ID;
#endif

/** @brief Commands for the locomotion module */
#ifndef HAVE_ENUM_LOCOM_MODE
#define HAVE_ENUM_LOCOM_MODE
typedef enum LOCOM_MODE
{
   LOCOM_MODE_STOP=0, /* Command the locom module to stop the rover | */
   LOCOM_MODE_STRAIGHT_FORWARD=1, /* Command the rover to drive straight forward | */
   LOCOM_MODE_STRAIGHT_BACKWARD=2, /* Command the rover to drive straight backward | */
   LOCOM_MODE_TURN_RIGHT=3, /* Command the rover to turn right | */
   LOCOM_MODE_TURN_LEFT=4, /* Command the rover to turn left | */
   LOCOM_MODE_ENUM_END=5, /*  | */
} LOCOM_MODE;
#endif

/** @brief Mode of each motor (i.e m1 and m2) */
#ifndef HAVE_ENUM_MOTOR_MODE
#define HAVE_ENUM_MOTOR_MODE
typedef enum MOTOR_MODE
{
   MOTOR_MODE_STOP=0, /* The motor is in stopped mode | */
   MOTOR_MODE_FORWARD=1, /* The motor is in forward mode | */
   MOTOR_MODE_BACKWARD=2, /* The motor is in backward mode | */
   MOTOR_MODE_ENUM_END=3, /*  | */
} MOTOR_MODE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_heartbeat.h"
#include "./mavlink_msg_locom_command.h"
#include "./mavlink_msg_rover_status.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_LOCOM_COMMAND, MAVLINK_MESSAGE_INFO_ROVER_STATUS}
# define MAVLINK_MESSAGE_NAMES {{ "HEARTBEAT", 0 }, { "LOCOM_COMMAND", 1 }, { "ROVER_STATUS", 2 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_SOTERIAROVER_H