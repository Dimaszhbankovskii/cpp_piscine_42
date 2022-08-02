#!/bin/bash

echo "----------------------------------------------------------------------------------"
echo "---------------           Testing MODULE 01 EXERCISE 00            ---------------"
echo "----------------------------------------------------------------------------------"

echo " >> MODULE 01 EXERCISE 00 ==> Compiling program..."

directory="./../module01/ex00"

compile=$(make -C $directory)

program="zombie"

compile_program=$(ls $directory | grep $program)

echo "----------------------------------------------------------------------------------"

if [[ "$program" == "$compile_program" ]];
then
    echo " >> Program '$program' succesfully compiled"
else
    echo " >> Program '$program' didn't compile"
fi

echo "----------------------------------------------------------------------------------"

true_result="----------------------------------------------------------------------
Creating the first Zombie John through the class Constructor
John: BraiiiiiiinnnzzzZ...
----------------------------------------------------------------------
----------------------------------------------------------------------
Creating the second Zombie Gribabas through function newZombie()
Gribabas: BraiiiiiiinnnzzzZ...
Zombie Gribabas is dying!!!
----------------------------------------------------------------------
----------------------------------------------------------------------
Creating the third Zombie Klucker through function randomChump()
Klucker: BraiiiiiiinnnzzzZ...
Zombie Klucker is dying!!!
----------------------------------------------------------------------
Zombie John is dying!!!"

result=$($directory/zombie)

if [[ "$result" == "$true_result" ]];
then
	echo " >> MODULE 01 EXERCISE 00 ==> ✓✓✓✓✓"
else
	echo " >> MODULE 01 EXERCISE 00 ==> ✘✘✘✘✘"
fi

echo "----------------------------------------------------------------------------------"

compile=$(make fclean -C $directory)