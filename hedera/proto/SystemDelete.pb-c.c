/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: SystemDelete.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "SystemDelete.pb-c.h"
void   proto__system_delete_transaction_body__init
                     (Proto__SystemDeleteTransactionBody         *message)
{
  static const Proto__SystemDeleteTransactionBody init_value = PROTO__SYSTEM_DELETE_TRANSACTION_BODY__INIT;
  *message = init_value;
}
size_t proto__system_delete_transaction_body__get_packed_size
                     (const Proto__SystemDeleteTransactionBody *message)
{
  assert(message->base.descriptor == &proto__system_delete_transaction_body__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__system_delete_transaction_body__pack
                     (const Proto__SystemDeleteTransactionBody *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__system_delete_transaction_body__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__system_delete_transaction_body__pack_to_buffer
                     (const Proto__SystemDeleteTransactionBody *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__system_delete_transaction_body__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__SystemDeleteTransactionBody *
       proto__system_delete_transaction_body__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__SystemDeleteTransactionBody *)
     protobuf_c_message_unpack (&proto__system_delete_transaction_body__descriptor,
                                allocator, len, data);
}
void   proto__system_delete_transaction_body__free_unpacked
                     (Proto__SystemDeleteTransactionBody *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__system_delete_transaction_body__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor proto__system_delete_transaction_body__field_descriptors[3] =
{
  {
    "fileID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__SystemDeleteTransactionBody, id_case),
    offsetof(Proto__SystemDeleteTransactionBody, fileid),
    &proto__file_id__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "contractID",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__SystemDeleteTransactionBody, id_case),
    offsetof(Proto__SystemDeleteTransactionBody, contractid),
    &proto__contract_id__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "expirationTime",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__SystemDeleteTransactionBody, expirationtime),
    &proto__timestamp_seconds__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__system_delete_transaction_body__field_indices_by_name[] = {
  1,   /* field[1] = contractID */
  2,   /* field[2] = expirationTime */
  0,   /* field[0] = fileID */
};
static const ProtobufCIntRange proto__system_delete_transaction_body__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor proto__system_delete_transaction_body__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.SystemDeleteTransactionBody",
  "SystemDeleteTransactionBody",
  "Proto__SystemDeleteTransactionBody",
  "proto",
  sizeof(Proto__SystemDeleteTransactionBody),
  3,
  proto__system_delete_transaction_body__field_descriptors,
  proto__system_delete_transaction_body__field_indices_by_name,
  1,  proto__system_delete_transaction_body__number_ranges,
  (ProtobufCMessageInit) proto__system_delete_transaction_body__init,
  NULL,NULL,NULL    /* reserved[123] */
};
