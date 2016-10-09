program.exe: program.cc
	g++ -DUNICODE -Wall -std=c++11 -s -O3 -o program.exe program.cc `pkg-config gtkmm-3.0 --cflags --libs` -mwindows
#	g++ -DUNICODE -Wl,rpath="C:/MinGW_GET/msys/1.0/gtk3/bin" -Wl,rpath="C:/MinGW_GET/msys/1.0/gtkmm3/bin" -Wall -std=c++11 -s -O3 -o program.exe program.cc `pkg-config gtkmm-3.0 --cflags --libs` -mwindows
