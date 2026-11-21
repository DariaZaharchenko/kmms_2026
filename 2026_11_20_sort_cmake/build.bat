@echo off

set BUILD_TYPE=Ninja
set BUILD_SUFFIX=ninja

chcp 65001

set BUILD_FOLDER=build_%BUILD_SUFFIX%
set SOURCE_FOLDER=.

set MINGW_BIN=C:\IT\install\winlibs-x86_64-posix-seh-gcc-16.2.0-llvm-23.1.3-mingw-w64ucrt-14.0.0-r3\mingw64\bin

if not exist %BUILD_FOLDER% mkdir %BUILD_FOLDER%

cd %BUILD_FOLDER%

cmake -G %BUILD_TYPE% ^
-DCMAKE_C_COMPILER="%MINGW_BIN%\gcc.exe" ^
-DCMAKE_CXX_COMPILER="%MINGW_BIN%\g++.exe" ^
..\%SOURCE_FOLDER%

cmake --build .

pause