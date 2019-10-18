/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: FileGetContents.proto */

#ifndef PROTOBUF_C_FileGetContents_2eproto__INCLUDED
#define PROTOBUF_C_FileGetContents_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "BasicTypes.pb-c.h"
#include "QueryHeader.pb-c.h"
#include "ResponseHeader.pb-c.h"

typedef struct _Proto__FileGetContentsQuery Proto__FileGetContentsQuery;
typedef struct _Proto__FileGetContentsResponse Proto__FileGetContentsResponse;
typedef struct _Proto__FileGetContentsResponse__FileContents Proto__FileGetContentsResponse__FileContents;


/* --- enums --- */


/* --- messages --- */

/*
 * Get the contents of a file. The content field is empty (no bytes) if the file is empty. 
 */
struct  _Proto__FileGetContentsQuery
{
  ProtobufCMessage base;
  /*
   * Standard info sent from client to node, including the signed payment, and what kind of response is requested (cost, state proof, both, or neither).
   */
  Proto__QueryHeader *header;
  /*
   * The file ID of the file whose contents are requested
   */
  Proto__FileID *fileid;
};
#define PROTO__FILE_GET_CONTENTS_QUERY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__file_get_contents_query__descriptor) \
    , NULL, NULL }


struct  _Proto__FileGetContentsResponse__FileContents
{
  ProtobufCMessage base;
  /*
   * The file ID of the file whose contents are being returned
   */
  Proto__FileID *fileid;
  /*
   * The bytes contained in the file
   */
  ProtobufCBinaryData contents;
};
#define PROTO__FILE_GET_CONTENTS_RESPONSE__FILE_CONTENTS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__file_get_contents_response__file_contents__descriptor) \
    , NULL, {0,NULL} }


/*
 * Response when the client sends the node FileGetContentsQuery 
 */
struct  _Proto__FileGetContentsResponse
{
  ProtobufCMessage base;
  /*
   *Standard response from node to client, including the requested fields: cost, or state proof, or both, or neither
   */
  Proto__ResponseHeader *header;
  /*
   * the file ID and contents (a state proof can be generated for this)
   */
  Proto__FileGetContentsResponse__FileContents *filecontents;
};
#define PROTO__FILE_GET_CONTENTS_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__file_get_contents_response__descriptor) \
    , NULL, NULL }


/* Proto__FileGetContentsQuery methods */
void   proto__file_get_contents_query__init
                     (Proto__FileGetContentsQuery         *message);
size_t proto__file_get_contents_query__get_packed_size
                     (const Proto__FileGetContentsQuery   *message);
size_t proto__file_get_contents_query__pack
                     (const Proto__FileGetContentsQuery   *message,
                      uint8_t             *out);
size_t proto__file_get_contents_query__pack_to_buffer
                     (const Proto__FileGetContentsQuery   *message,
                      ProtobufCBuffer     *buffer);
Proto__FileGetContentsQuery *
       proto__file_get_contents_query__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__file_get_contents_query__free_unpacked
                     (Proto__FileGetContentsQuery *message,
                      ProtobufCAllocator *allocator);
/* Proto__FileGetContentsResponse__FileContents methods */
void   proto__file_get_contents_response__file_contents__init
                     (Proto__FileGetContentsResponse__FileContents         *message);
/* Proto__FileGetContentsResponse methods */
void   proto__file_get_contents_response__init
                     (Proto__FileGetContentsResponse         *message);
size_t proto__file_get_contents_response__get_packed_size
                     (const Proto__FileGetContentsResponse   *message);
size_t proto__file_get_contents_response__pack
                     (const Proto__FileGetContentsResponse   *message,
                      uint8_t             *out);
size_t proto__file_get_contents_response__pack_to_buffer
                     (const Proto__FileGetContentsResponse   *message,
                      ProtobufCBuffer     *buffer);
Proto__FileGetContentsResponse *
       proto__file_get_contents_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__file_get_contents_response__free_unpacked
                     (Proto__FileGetContentsResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Proto__FileGetContentsQuery_Closure)
                 (const Proto__FileGetContentsQuery *message,
                  void *closure_data);
typedef void (*Proto__FileGetContentsResponse__FileContents_Closure)
                 (const Proto__FileGetContentsResponse__FileContents *message,
                  void *closure_data);
typedef void (*Proto__FileGetContentsResponse_Closure)
                 (const Proto__FileGetContentsResponse *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor proto__file_get_contents_query__descriptor;
extern const ProtobufCMessageDescriptor proto__file_get_contents_response__descriptor;
extern const ProtobufCMessageDescriptor proto__file_get_contents_response__file_contents__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_FileGetContents_2eproto__INCLUDED */
