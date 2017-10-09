GTEST_DIR=/u/d/e1401185/4_vuosi/embedded/googletest/googletest/
my_test: test_case.c string.c string.h Gtest_main.c libgtest.a
	g++ -isystem $(GTEST_DIR)/include -pthread test_case.c string.c string.h Gtest_main.c libgtest.a -o my_test
libgtest.a:
	g++ -isystem ${GTEST_DIR}/include -I${GTEST_DIR} -pthread -c ${GTEST_DIR}/src/gtest-all.cc
	ar -rv libgtest.a gtest-all.o
clean:
	rm -f my_test *.o libgtest.a
