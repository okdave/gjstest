// Copyright 2010 Google Inc. All Rights Reserved.
// Author: jacobsa@google.com (Aaron Jacobs)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Utility function for driving the whole test runner process.

#ifndef GJSTEST_INTERNAL_CPP_RUN_TESTS_H_
#define GJSTEST_INTERNAL_CPP_RUN_TESTS_H_

#include "base/stl_decl.h"

namespace gjstest {

class NamedScripts;

// Given a set of test scripts and their dependencies, run the tests registered
// by the scripts, returning true iff they all pass and setting *output and *xml
// to human-readable output and XML respectively.
//
// If test_filter is non-empty, it is interpreted to be a regular expression
// specifying which test names should be run. Others will be excluded.
//
// This function is not safe to be called multiple times concurrently.
bool RunTests(
    const NamedScripts& scripts,
    const string& test_filter,
    string* output,
    string* xml);

}  // namespace gjstest

#endif  // GJSTEST_INTERNAL_CPP_RUN_TESTS_H_
