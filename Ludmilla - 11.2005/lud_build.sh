#!/bin/bash
#
# Ludmilla Build Script.
# (c) PavkaM (2005) for LudMilla project.
#

RetVal=""

#----------- Dev Dirs
MySQLDir=""
SQLiteDir=""
ZThreadDir=""
SocketsDir=""
ZLibDir=""
DotConfDir=""
SSLDir=""
PThreadDir=""
PythonDir=""
#-----------

CheckDevelDependency(){
 echo -n "  o Checking for $1 devel libs ... "
 RetVal="`find /usr/lib | grep $2\.a`"
 
 if [ "$RetVal" == "" ]; then
  RetVal="`find /usr/local/lib | grep $2\.a`"
 fi

 if [ "$RetVal" == "" ]; then
  RetVal="`find /usr/lib | grep $2\.so\.`"
 fi

 if [ "$RetVal" == "" ]; then
  RetVal="`find /usr/local/lib | grep $2\.so\.`"
 fi

 if [ "$RetVal" == "" ]; then
  RetVal="`find /usr/lib | grep $2\.so`"
 fi

 if [ "$RetVal" == "" ]; then
  RetVal="`find /usr/local/lib | grep $2\.so`"
 fi

 
 RetVal="`dirname $RetVal 2>/dev/null`"

 
 if [ "$RetVal" == "" ]; then
  echo "[NOT FOUND]"
  return 0
 else
  echo "[$RetVal]"
  return 1
 fi
}

CheckDependencies(){

 echo -n "  o Checking for SConstruct build system ... "
 Res="`scons -v 2> /dev/null`" 
 
 if [ "$Res" == "" ]; then
  echo "[NOT FOUND]"
  return 0
 else
  echo "[FOUND]"
 fi

 CheckDevelDependency "MySQL" "mysqlclient" && return 0
 MySQLDir="$RetVal"
 
 CheckDevelDependency "SQLite" "sqlite3" && return 0
 SQLiteDir="$RetVal" 
 
 CheckDevelDependency "ZThread" "ZThread" && return 0
 ZThreadDir="$RetVal" 
 
 CheckDevelDependency "Sockets" "Sockets" && return 0
 SocketsDir="$RetVal" 
 
 CheckDevelDependency "ZLib" "libz" && return 0
 ZLibDir="$RetVal" 

 CheckDevelDependency "DotConf" "dotconfpp" && return 0
 DotConfDir="$RetVal" 

 CheckDevelDependency "SSL" "ssl" && return 0
 SSLDir="$RetVal" 

 CheckDevelDependency "PThread" "pthread" && return 0
 PThreadDir="$RetVal" 

 CheckDevelDependency "Python" "libpython2\.4" && return 0
 PythonDir="$RetVal" 

 return 1
}

if [ -d "./src" -a -d "./dep" -a -d "./build" -a -d "./.svn" ]; then
 echo ""
 echo ""
else
 echo "(Error) Not Running in LudMilla Directory !!!!!!"
 exit
fi

echo "Step 1. Checking Dependencies."

CheckDependencies && { echo "Failed Dependencies"; exit; }

echo "Step 2. Performing pre-compilation stuff"

REV_N=`cat .svn/entries | grep revision= | cut -d\" -f2`
echo "  o Revision of SVN is $REV_N"

echo "//
// This file was generated by a tool.
// Don't edit this file directly.
//

#ifndef SVN_REVISION
#define SVN_REVISION $REV_N
#endif
" > src/LudMilla/Version/revision.h


echo "Step 3. Compilation"

CDR="`pwd`"

cd ./depnew/Unix_dep/CXX_build
scons -s || { echo "CXX Compilation failed !"; exit; }
mv ./libpycxx.a ../../../build/libpycxx.a

cd "$CDR"
scons -s || { echo "LudMilla Compilation faild !"; exit; }

echo " ** LudMilla Succesefully Compiled !"
echo "Step 4. Post-build actions"

NMNEW="ludmilla-`uname`-`uname -i`.bin"
cp ./build/LudMilla $NMNEW
rm $NMNEW.gz
gzip $NMNEW
