
/*
 * Copyright (C) Yichun Zhang (agentzh)
 */


#ifndef _NGX_STREAM_LUA_CONTENT_BY_H_INCLUDED_
#define _NGX_STREAM_LUA_CONTENT_BY_H_INCLUDED_


#include "ngx_stream_lua_common.h"


ngx_int_t ngx_stream_lua_content_by_chunk(lua_State *L,
    ngx_stream_session_t *s);
void ngx_stream_lua_content_wev_handler(ngx_stream_session_t *s,
    ngx_stream_lua_ctx_t *ctx);
ngx_int_t ngx_stream_lua_content_handler_file(ngx_stream_session_t *s);
ngx_int_t ngx_stream_lua_content_handler_inline(ngx_stream_session_t *s);
void ngx_stream_lua_content_handler(ngx_stream_session_t *s);


#endif /* _NGX_STREAM_LUA_CONTENT_BY_H_INCLUDED_ */
