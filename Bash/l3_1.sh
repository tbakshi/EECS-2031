#!/bin/bash

while read -r name Snumber 
do 
	while read -r Snumber2 grade
do 
	if [ $Snumber == $Snumber2 ]
	then 
		echo $name $grade
fi

done <  "$2"
	done < "$1"
	