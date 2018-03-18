#!/bin/bash

MAVGEN_HOME=/home/dan/Documents/mavlink
ROVER_HOME=/home/dan/git/SoteriaRover/

rm -r $ROVER_HOME/mavlink
cd $MAVGEN_HOME
python -m pymavlink.tools.mavgen --lang=C --wire-protocol=2.0
--output=$ROVER_HOME/RoverControl/mavlink $ROVER_HOME/SoteriaRover.xml
