#!/bin/bash

read file

	if [[ $PWD = *"$file"* ]]
	then 
		echo YES
		else
			echo NO
fi
	
