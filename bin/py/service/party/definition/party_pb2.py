# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import service
from google.protobuf import service_reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


DESCRIPTOR = descriptor.FileDescriptor(
  name='service/party/definition/party.proto',
  package='bnet.protocol.party',
  serialized_pb='\n$service/party/definition/party.proto\x12\x13\x62net.protocol.party\x1a#service/channel/channel_types.proto\x1a\x1clib/protocol/attribute.proto\x1a\x19lib/protocol/entity.proto\x1a\x1dlib/protocol/invitation.proto\x1a\x11lib/rpc/rpc.proto2\xcf\x02\n\x0cPartyService\x12j\n\rCreateChannel\x12+.bnet.protocol.channel.CreateChannelRequest\x1a,.bnet.protocol.channel.CreateChannelResponse\x12\x64\n\x0bJoinChannel\x12).bnet.protocol.channel.JoinChannelRequest\x1a*.bnet.protocol.channel.JoinChannelResponse\x12m\n\x0eGetChannelInfo\x12,.bnet.protocol.channel.GetChannelInfoRequest\x1a-.bnet.protocol.channel.GetChannelInfoResponseB\x03\x80\x01\x01')



import service.channel.channel_types_pb2
import lib.protocol.attribute_pb2
import lib.protocol.entity_pb2
import lib.protocol.invitation_pb2
import lib.rpc.rpc_pb2



_PARTYSERVICE = descriptor.ServiceDescriptor(
  name='PartyService',
  full_name='bnet.protocol.party.PartyService',
  file=DESCRIPTOR,
  index=0,
  options=None,
  serialized_start=206,
  serialized_end=541,
  methods=[
  descriptor.MethodDescriptor(
    name='CreateChannel',
    full_name='bnet.protocol.party.PartyService.CreateChannel',
    index=0,
    containing_service=None,
    input_type=service.channel.channel_types_pb2._CREATECHANNELREQUEST,
    output_type=service.channel.channel_types_pb2._CREATECHANNELRESPONSE,
    options=None,
  ),
  descriptor.MethodDescriptor(
    name='JoinChannel',
    full_name='bnet.protocol.party.PartyService.JoinChannel',
    index=1,
    containing_service=None,
    input_type=service.channel.channel_types_pb2._JOINCHANNELREQUEST,
    output_type=service.channel.channel_types_pb2._JOINCHANNELRESPONSE,
    options=None,
  ),
  descriptor.MethodDescriptor(
    name='GetChannelInfo',
    full_name='bnet.protocol.party.PartyService.GetChannelInfo',
    index=2,
    containing_service=None,
    input_type=service.channel.channel_types_pb2._GETCHANNELINFOREQUEST,
    output_type=service.channel.channel_types_pb2._GETCHANNELINFORESPONSE,
    options=None,
  ),
])

class PartyService(service.Service):
  __metaclass__ = service_reflection.GeneratedServiceType
  DESCRIPTOR = _PARTYSERVICE
class PartyService_Stub(PartyService):
  __metaclass__ = service_reflection.GeneratedServiceStubType
  DESCRIPTOR = _PARTYSERVICE

# @@protoc_insertion_point(module_scope)
