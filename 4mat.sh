#/bin/sh
./saturnchallenger
echo "This script will format your keys into a challene readable by cronus!"
awk '/[^[:space:]]/ {print "C " $0}' out.txt >cronuskeys.txt

echo "now time for cronus"
./cronus-linux
