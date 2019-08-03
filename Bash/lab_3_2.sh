#!/bin/bash
echo Whats is your name:
read Uname
vale=$( grep -G $Uname /etc/passwd)
while IFS=: read -r f1 f2 f3 f4 f5 f6 f7 <<< $vale
do 
	if [[ $Uname = $f1 ]]
	then 
		echo Good day $f5
		else
			echo No such login $f5
fi
break;
	done < /etc/passwd
	