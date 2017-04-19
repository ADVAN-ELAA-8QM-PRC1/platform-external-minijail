/* system.h
 * Copyright (C) 2017 The Android Open Source Project
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
 *
 * Wrappers for system functionality.
 */

#ifndef _SYSTEM_H_
#define _SYSTEM_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

int lock_securebits(void);

unsigned int get_last_valid_cap(void);

int config_net_loopback(void);

int setup_pipe_end(int fds[2], size_t index);
int setup_and_dupe_pipe_end(int fds[2], size_t index, int fd);

int write_pid_to_path(pid_t pid, const char *path);
int write_proc_file(pid_t pid, const char *content, const char *basename);

int setup_mount_destination(const char *source, const char *dest, uid_t uid,
			    uid_t gid);

#ifdef __cplusplus
}; /* extern "C" */
#endif

#endif /* _SYSTEM_H_ */
