
// Copyright 2015-2016 Espressif Systems (Shanghai) PTE LTD
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
#ifndef _CAMERA_HTTPD_H_
#define _CAMERA_HTTPD_H_

#ifdef __cplusplus
extern "C" {
#endif
typedef signed char int8_t;
void app_httpd_main();
#if 0
int8_t e_save_face_id_to_flash(void);
int8_t e_delete_face_id_in_flash(void);
int8_t e_read_face_id_from_flash(uint8_t sv_id_num,uint8_t cf_times);
#endif
#ifdef __cplusplus
}
#endif

#endif /* _CAMERA_HTTPD_H_ */
