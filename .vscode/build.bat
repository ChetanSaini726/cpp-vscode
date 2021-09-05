call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\Tools\VsDevCmd.bat"
echo Building...

@echo off
IF NOT EXIST bin mkdir bin
IF NOT EXIST bin-int mkdir bin-int

pushd bin-int

cl /MP7 /I ..\include /Zi ..\source\*.cpp /EHsc  /link /out:MyProgram.exe

popd

move bin-int\MyProgram.exe bin\MyProgram.exe
REM:if EXIST vc140.pdb move vc140.pdb bin-int\vc140.pdb