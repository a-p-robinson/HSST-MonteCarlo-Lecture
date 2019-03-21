##################################################################################
# These files are the demos from the HSST lecture on Monte Carlo simulation	 #
# 										 #
# andrew.robinson@npl.co.uk							 #
# 										 #
# ---										 #
# 										 #
# MIT License									 #
# 										 #
# Copyright (c) 2018 Andrew Robinson						 #
# 										 #
# Permission is hereby granted, free of charge, to any person obtaining a copy	 #
# of this software and associated documentation files (the "Software"), to deal	 #
# in the Software without restriction, including without limitation the rights	 #
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell	 #
# copies of the Software, and to permit persons to whom the Software is		 #
# furnished to do so, subject to the following conditions:			 #
# 										 #
# The above copyright notice and this permission notice shall be included in all #
# copies or substantial portions of the Software.				 #
# 										 #
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR	 #
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,	 #
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE	 #
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER	 #
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,	 #
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE	 #
# SOFTWARE.									 #
##################################################################################

These examples are based on the SPECT example from GATE (./examples/example_SPECT).

They are intend to be run on a Linux installation of GATE and have been tested on GATE 7.1/7.2/8.0.
The examples have been tested on the vGATE 8.0 virtual machine available from,

http://www.opengatecollaboration.org/vGATE80

#####################
# 1. Source example #
#####################

This example visualise the decay of some simple radioactive sources.

To run:

cd ./example_Sources
./run1.sh
./run2.sh
./run3.sh

#######################
# 2. Detector example #
#######################

This example add a simple detector.

To run:

cd ./example_Detector
./run.sj

To analyse the output and show the detected events:

cd ./example_Detector
./analyse.sh

###########################
# 3. Simple SPECT example #
###########################

This example introduces a SPECT system with collimators.

To run:

cd ./example_SimpleSPECT
./run.sj

To analyse the output and show the detected events:

cd ./example_SimpleSPECT
./analyse.sh

###########################################
# 4. Simple SPECT + water phantom example #
###########################################

This example adds a water phantom and analyses the scatter.

To run:

cd ./example_WaterPhantom
./run.sj

To analyse the output and show the scattered events

cd ./example_WaterPhantom
./analyse.sh
./analyse2.sh

################################
# 5. Full SPECT system example #
################################

This example adds a multi-head SPECT system and bed motion.

To run:

cd ./example_SPECT
./run.sj









