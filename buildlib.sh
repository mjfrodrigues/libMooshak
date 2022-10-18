#!/bin/bash

libdir=$1

if [ $# -ne "1" ]
then
  echo "usage: buildlib.sh LIBDIR"
fi

rm -f *.o

#make .o
for file in $libdir/*.h
do
  chmod a+r $file
  chown ti-pe:ti-pe $file
done

for file in $libdir/*.c
do
  chmod a+r $file
  chown ti-pe:ti-pe $file
  gcc -fPIC -g -c $file
done

for file in $libdir/*.o
do
  chown ti-pe:ti-pe $file
  objs="$objs $file"
done

gcc -shared -o libdamas.so $objs -lpthread

chown ti-pe:ti-pe libdamas.so

