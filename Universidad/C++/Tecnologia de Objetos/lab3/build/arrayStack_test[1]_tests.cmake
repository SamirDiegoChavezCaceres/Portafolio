add_test([=[POP.AXIOMS]=]  [==[C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/build/arrayStack_test.exe]==] [==[--gtest_filter=POP.AXIOMS]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[POP.AXIOMS]=]  PROPERTIES WORKING_DIRECTORY [==[C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[TOP.AXIOMS]=]  [==[C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/build/arrayStack_test.exe]==] [==[--gtest_filter=TOP.AXIOMS]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TOP.AXIOMS]=]  PROPERTIES WORKING_DIRECTORY [==[C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[EMPTY.AXIOMS]=]  [==[C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/build/arrayStack_test.exe]==] [==[--gtest_filter=EMPTY.AXIOMS]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[EMPTY.AXIOMS]=]  PROPERTIES WORKING_DIRECTORY [==[C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  arrayStack_test_TESTS POP.AXIOMS TOP.AXIOMS EMPTY.AXIOMS)
