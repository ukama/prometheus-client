/**
 * Copyright 2019-2020 DigitalOcean Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "prom.h"

#ifndef PROMTEST_HISTOGRAM_H
#define PROMTEST_HISTOGRAM_H

extern prom_histogram_t *foo_histogram;

int promtest_histogram_setup(void);
int promtest_histogram_teardown(void);

void promtest_histogram(void);

#endif  // PROMTEST_HISTOGRAM_H
