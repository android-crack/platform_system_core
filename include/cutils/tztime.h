/*
 * Copyright (C) 2006 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _CUTILS_TZTIME_H
#define _CUTILS_TZTIME_H

#ifdef __cplusplus
extern "C" {
#endif

time_t mktime_tz(struct tm * const tmp, char const * tz);
void localtime_tz(const time_t * const timep, struct tm * tmp, const char* tz);

#ifdef __cplusplus
}
#endif

#endif /* __CUTILS_TZTIME_H */ 

