add_test([=[HelloTest.BasicAssertions]=]  [==[C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build/hello_test.exe]==] [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[HelloTest.BasicAssertions]=]  PROPERTIES WORKING_DIRECTORY [==[C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  hello_test_TESTS HelloTest.BasicAssertions)
