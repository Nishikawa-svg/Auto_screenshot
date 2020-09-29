#!/bin/bash
if [ -d ./mypic ]; then
	echo 'Directory "mypic" already exists.'
	echo "Screenshots will be added to this directory, are you sure?"
	read -p "yes/no > " isok
	case "$isok" in
		"yes" | "Yes" | "YES" | "y" | "Y")
			;;
		*)
			echo "aborted"
			exit 1
		;;
	esac
else 
	mkdir ./mypic
	echo 'directory "./mypic" was created'
fi

if [ -f ./screenshot ]; then 
	./screenshot
else 
	echo '"screenshot" does not exist'
	exit 1
fi

echo "all commands completed"
