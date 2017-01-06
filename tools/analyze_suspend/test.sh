#!/bin/bash
sudo ./analyze_suspend.py -f -rtcwake 5 -multi 10 5 -m freeze
sudo ./analyze_suspend.py -f -rtcwake 5 -multi 10 5 -m standby
sudo ./analyze_suspend.py -f -rtcwake 5 -multi 10 5 -m mem
