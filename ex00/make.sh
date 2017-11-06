#!/bin/sh

#Delete all test
rm -rf test*
#Test0
mkdir test0
touch -t 201706012047 test0
chmod 715 test0
#Test1
echo -n "0000" > test1
touch -t 201706012146 test1
chmod 714 test1
#Test2
mkdir test2
touch -t 201706012245 test2
chmod 504 test2
#Test3
echo -n "0" > test3
touch -t 201706012344 test3
chmod 404 test3
#Test4
echo -n "00" > test4
touch -t 201706012343 test4
chmod 641 test4
#Test5
ln test3 test5
#Test6
ln -s test0 test6
touch -h -t 201706012220 test6
chmod 755 -h test6
