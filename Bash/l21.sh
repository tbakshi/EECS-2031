#!/bin/bash
for file in ./*
do
if [ -d$file ] 
then
	echo $file is a directory
elif [ -x$file ] 
then 
	echo $file is excutable
else 
	echo $file is not excutable
fi
done
