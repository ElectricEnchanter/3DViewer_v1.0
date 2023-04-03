CC = gcc
CFLAGS =-Wall -Wextra -Werror -std=c11
CFLAGS_GCOV =-fprofile-arcs --coverage

OS=$(shell uname)
ifeq ($(OS), Linux)
  LIBS=-lcheck -lsubunit -lpthread -lrt -lm -g
  CHECK_LEAKS=CK_FORK=no valgrind --leak-check=full -s --log-file=log.txt
  OPEN_GCOV=chrome.exe coverage/src/index.html
  OPEN_DVI=chrome.exe DVI.html
else
  LIBS=-lcheck
  CHECK_LEAKS=no leaks -atExit --
  OPEN_GCOV=open coverage/index.html
  OPEN_DVI=open DVI.html
endif

all: gcov_report dvi dist install

install:
	rm -rf build
	mkdir build
	cd build && qmake6 ../frontend/viwer.pro && make > /dev/null 2>&1

uninstall:
	rm -rf build
	rm -rf build-viwer-Desktop_x86_darwin_generic_mach_o_64bit-Debug

dvi:
	$(OPEN_DVI)

dist:
	cd .. && tar -zcvf ne_smart_biber3D.tar.gz src

test:
	checkmk clean_mode=1 parser_tests.check > parser_tests.c
	gcc $(CFLAGS_GCOV) *.c $(LIBS)
	./a.out

style:
	cp ../materials/linters/.clang-format .
	clang-format -n *.c *.h
	clang-format -i *.c *.h frontend/*.cpp frontend/*.h
	rm .clang-format

gcov_report: test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info

another_report: test
	gcovr --html-details coverage.html

rebuild: clean all

clean:
	rm -rf ./lcov_report ./report
	rm -f app *.o *.a *.gcno *.gcda index*.html *.css *.out *.gch *.cfg coverage *.out *.txt s21_3dviewer_1_test.c test.info
