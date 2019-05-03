#! /bin/bash
sudo apt-get update
sudo apt-get upgrade y
chmod a+x ./main.c
gcc main.c -o main.out
clear
./main.out
echo '   "\\n'
echo "Application is executed successfully"
