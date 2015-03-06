/*
 * memdb_handler.h
 *
 *  Created on: Mar 5, 2015
 *      Author: pchero
 */

#ifndef SRC_MEMDB_HANDLER_H_
#define SRC_MEMDB_HANDLER_H_


#include <sqlite3.h>
#include <jansson.h>

typedef struct _memdb_res
{
    sqlite3_stmt* res;
} memdb_res;


void memdb_free(memdb_res* mem_res);
memdb_res* memdb_query(char* sql);
json_t* memdb_get_result(memdb_res* mem_res);
int memdb_exec(char* sql);
int memdb_init(void);

#endif /* SRC_MEMDB_HANDLER_H_ */
