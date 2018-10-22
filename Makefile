check-err:
  c++ intpp.h intpp.cc -o intpp 2> errors
  type errors
build:
  c++ intpp.h intpp.cc -o intpp.dll
  copy intpp.dll intpp.exe
run: build
  .\intpp
clean:
  del intpp.exe intpp.dll
