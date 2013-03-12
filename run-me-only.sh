#/bin/sh
./saturnchallenger
echo "This script will format your keys into a challene readable by cronus!"

cat out.txt; echo "---";  cat out.txt  | sed '/^0000/d' >enigma.txt


awk '/[^[:space:]]/ {print "C " $0}' enigma.txt >cronuskeys.txt

echo "now time for cronus"
./cronus-linux
