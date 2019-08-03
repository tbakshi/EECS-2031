#!/bin/bash
echo What is your name? 
read firstname middlename lastname

if [ -z $lastname ] 
then 
	echo $firstname $middlename
else 
	echo $firstname $lastname
fi
