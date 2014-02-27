
opencvlibs=`pkg-config --libs opencv`
opencvcflags=`pkg-config --cflags opencv`

objects=	displayimage \
			helloworld \
			grayconverter \
			merge

.PHONY: clean

all: $(objects)

displayimage:	displayimage.cc
	g++ $^ -o $@	$(opencvcflags) $(opencvlibs)

helloworld:	helloworld.cc
	g++ $^ -o $@	$(opencvcflags) $(opencvlibs)

grayconverter:	grayconverter.cc
	g++ $^ -o $@	$(opencvcflags) $(opencvlibs)

merge:	merge.cc
	g++ $^ -o $@	$(opencvcflags) $(opencvlibs)

clean:
	rm -f $(objects)

