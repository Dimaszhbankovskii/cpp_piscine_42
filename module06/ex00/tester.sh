#!/bin/bash

OUT_FILE="out_file.txt"

echo "----------------------------------------------------------------------"
echo ">> Compiling program..."
echo "----------------------------------------------------------------------"
make
make clean
echo "----------------------------------------------------------------------"
echo ">> Testing program..."
echo "----------------------------------------------------------------------"

if test -f "$OUT_FILE"
then
	rm $OUT_FILE
fi

echo "--------------------------------------------------" >> $OUT_FILE
echo "----------------       Test 1      ---------------" >> $OUT_FILE
echo "--------------------------------------------------" >> $OUT_FILE

for ((i=-10;i<=10;i++))
do
	echo "./convert $i" >> $OUT_FILE
	./convert $i >> $OUT_FILE
	echo "------------------------------" >> $OUT_FILE
done

echo "--------------------------------------------------" >> $OUT_FILE
echo "----------------       Test 2      ---------------" >> $OUT_FILE
echo "--------------------------------------------------" >> $OUT_FILE

for ((i=50;i<=60;i++))
do
	echo "./convert $i" >> $OUT_FILE
	./convert $i >> $OUT_FILE
	echo "------------------------------" >> $OUT_FILE
done

echo "--------------------------------------------------" >> $OUT_FILE
echo "----------------       Test 3      ---------------" >> $OUT_FILE
echo "--------------------------------------------------" >> $OUT_FILE

for ((i=110;i<=120;i++))
do
	echo "./convert $i" >> $OUT_FILE
	./convert $i >> $OUT_FILE
	echo "------------------------------" >> $OUT_FILE
done

echo "--------------------------------------------------" >> $OUT_FILE
echo "----------------       Test 4      ---------------" >> $OUT_FILE
echo "--------------------------------------------------" >> $OUT_FILE

for ((i=240;i<=245;i++))
do
	echo "./convert $i" >> $OUT_FILE
	./convert $i >> $OUT_FILE
	echo "------------------------------" >> $OUT_FILE
done

echo "--------------------------------------------------" >> $OUT_FILE
echo "----------      Test 5 (MAX-MIN INT)     ---------" >> $OUT_FILE
echo "--------------------------------------------------" >> $OUT_FILE

MIN_INT=-2147483648
MAX_INT=2147483647
OVERFLOW_MIN_INT=-2147483649
OVERFLOW_MAX_INT=2147483648

for num in $MIN_INT $MAX_INT $OVERFLOW_MIN_INT $OVERFLOW_MAX_INT
do
	echo "./convert $num" >> $OUT_FILE
	./convert $num >> $OUT_FILE
	echo "------------------------------" >> $OUT_FILE
done

echo "--------------------------------------------------" >> $OUT_FILE
echo "----------------       Test 5      ---------------" >> $OUT_FILE
echo "--------------------------------------------------" >> $OUT_FILE

for i in -102.1352 -10.000002 0.000000321 0.1 0.0 1.120132 42.011 213546.11110
do
	echo "./convert $i" >> $OUT_FILE
	./convert $i >> $OUT_FILE
	echo "------------------------------" >> $OUT_FILE
done

echo "--------------------------------------------------" >> $OUT_FILE
echo "----------------       Test 6      ---------------" >> $OUT_FILE
echo "--------------------------------------------------" >> $OUT_FILE

for i in -102.1352f -10.000002f 0.000000321f 0.1f 0.0f 1.120132f 42.011f 213546.11110f
do
	echo "./convert $i" >> $OUT_FILE
	./convert $i >> $OUT_FILE
	echo "------------------------------" >> $OUT_FILE
done


echo "----------------------------------------------------" >> $OUT_FILE
echo "----------      Test 7 (MAX-MIN FLOAT)     ---------" >> $OUT_FILE
echo "----------------------------------------------------" >> $OUT_FILE

MIN_FLOAT=-340282346638528859811704183484516925000.0
MAX_FLOAT=340282346638528859811704183484516925000.0
OVERFLOW_MIN_FLOAT=-3402823466385288598117041834845169250000.0
OVERFLOW_MAX_FLOAT=3402823466385288598117041834845169250000.0

for num in $MIN_FLOAT $MAX_FLOAT $OVERFLOW_MIN_FLOAT $OVERFLOW_MAX_FLOAT
do
	echo "./convert $num" >> $OUT_FILE
	./convert $num >> $OUT_FILE
	echo "----------------------------------------------------" >> $OUT_FILE
done

echo "----------------------------------------------------" >> $OUT_FILE
echo "----------         Test 8 (DOUBLE)         ---------" >> $OUT_FILE
echo "----------------------------------------------------" >> $OUT_FILE

MIN_DOUBLE=-179769313486231570814527423731704357000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0
MAX_DOUBLE=179769313486231570814527423731704357000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0
OVERFLOW_MIN_DOUBLE=-1797693134862315708145274237317043570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0
OVERFLOW_MAX_DOUBLE=1797693134862315708145274237317043570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0

for num in $MIN_DOUBLE $MAX_DOUBLE $OVERFLOW_MIN_DOUBLE $OVERFLOW_MAX_DOUBLE
do
	echo "./convert $num" >> $OUT_FILE
	./convert $num >> $OUT_FILE
	echo "----------------------------------------------------" >> $OUT_FILE
done

echo "----------------------------------------------------" >> $OUT_FILE
echo "----------              Test 9             ---------" >> $OUT_FILE
echo "----------------------------------------------------" >> $OUT_FILE

ARG1="inf"
ARG2="+inf"
ARG3="-inf"
ARG4="inf"
ARG5="+inff"
ARG6="-inff"
ARG7="nan"
ARG8="nanf"

for num in $ARG1 $ARG2 $ARG3 $ARG4 $ARG5 $ARG6 $ARG7 $ARG8
do
	echo "./convert $num" >> $OUT_FILE
	./convert $num >> $OUT_FILE
	echo "----------------------------------------------------" >> $OUT_FILE
done

echo "----------------------------------------------------" >> $OUT_FILE
echo "----------              Test 10            ---------" >> $OUT_FILE
echo "----------------------------------------------------" >> $OUT_FILE

ARG1="--0"
ARG2="-.0"
ARG3="-.01"
ARG4="-str"
ARG5="-12str"
ARG6="            -12str"
ARG7=""
ARG8="     str120str"

for num in $ARG1 $ARG2 $ARG3 $ARG4 $ARG5 $ARG6 $ARG7 $ARG8
do
	echo "./convert $num" >> $OUT_FILE
	./convert $num >> $OUT_FILE
	echo "----------------------------------------------------" >> $OUT_FILE
done