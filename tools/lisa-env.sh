#!/bin/bash

# Install common build related tools
sudo apt-get install build-essential autoconf automake libtool pkg-config

# Install additional tools required for some notebooks and tests
sudo apt-get install trace-cmd sshpass kernelshark

# Install optional tools required for some notebooks and tests
sudo apt-get install nmap net-tools tree

# Install required python packages
sudo apt-get install python-matplotlib python-numpy libfreetype6-dev libpng12-dev python-nose

# Install the Python package manager
sudo apt-get install python-pip python-dev

# Install (upgrade) required Python libraries
sudo pip install --upgrade Cython trappy bart-py devlib psutil wrapt

# Remove (eventually) already installed versions
sudo apt-get remove ipython ipython-notebook
# Install most update version of the notebook
sudo pip install ipython jupyter
