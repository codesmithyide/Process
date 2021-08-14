/*
    Copyright (c) 2020-2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/process/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_TEST_PROCESS_ENVIRONMENTVARIABLETESTS_H_
#define _ISHIKO_TEST_PROCESS_ENVIRONMENTVARIABLETESTS_H_

#include <Ishiko/Tests/Core.h>

class EnvironmentVariableTests : public Ishiko::Tests::TestSequence
{
public:
    EnvironmentVariableTests(const Ishiko::Tests::TestNumber& number,
        const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
};

#endif