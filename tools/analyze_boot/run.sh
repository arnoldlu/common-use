#!/bin/bash
./analyze_boot.py -dmesg dmesg.txt
perl bootgraph.pl dmesg.txt > output.svg
