#!/bin/bash
#!/bin/bash
echo What is your name? 
read firstname middlename lastname

if [ -z $lastname ] 
then 
	echo $firstname $middlename
else 
	initial="$(echo $middlename | head -c 1)"
	echo "$firstname $initial. $lastname"
fi