/*
 * Copyright (c) 2017 Snowflake Computing, Inc. All rights reserved.
 */

#ifndef PDO_SNOWFLAKE_SETUP_H
#define PDO_SNOWFLAKE_SETUP_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(_WIN32)
#define STDCALL
#else
#define STDCALL __stdcall
#endif

#include <snowflake_client.h>

void initialize_snowflake_example(sf_bool debug);
SNOWFLAKE *setup_snowflake_connection();

#ifdef __cplusplus
}
#endif

#endif //PDO_SNOWFLAKE_SETUP_H