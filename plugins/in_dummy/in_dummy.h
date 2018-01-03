/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2015-2018 Treasure Data Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef FLB_IN_DUMMY_H
#define FLB_IN_DUMMY_H

#define DEFAULT_DUMMY_MESSAGE "{\"message\":\"dummy\"}"
struct flb_in_dummy_config {
    char*  dummy_message;
    int    dummy_message_len;

    char* ref_msgpack;
    int   ref_msgpack_size;
};

extern struct flb_input_plugin in_dummy_plugin;

#endif
