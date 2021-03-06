// Generated by ProtoGen, Version=2.3.0.277, Culture=neutral, PublicKeyToken=8fd7408b07f8d2cd.  DO NOT EDIT!

using pb = global::Google.ProtocolBuffers;
using pbc = global::Google.ProtocolBuffers.Collections;
using pbd = global::Google.ProtocolBuffers.Descriptors;
using scg = global::System.Collections.Generic;
namespace D3.GameBalance {
  
  public static partial class GBHandle {
  
    #region Extension registration
    public static void RegisterAllExtensions(pb::ExtensionRegistry registry) {
    }
    #endregion
    #region Static variables
    internal static pbd::MessageDescriptor internal__static_D3_GameBalance_Handle__Descriptor;
    internal static pb::FieldAccess.FieldAccessorTable<global::D3.GameBalance.Handle, global::D3.GameBalance.Handle.Builder> internal__static_D3_GameBalance_Handle__FieldAccessorTable;
    #endregion
    #region Descriptor
    public static pbd::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbd::FileDescriptor descriptor;
    
    static GBHandle() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          "Cg5HQkhhbmRsZS5wcm90bxIORDMuR2FtZUJhbGFuY2UiMQoGSGFuZGxlEhkK" + 
          "EWdhbWVfYmFsYW5jZV90eXBlGAEgAigREgwKBGdiaWQYAiACKA8=");
      pbd::FileDescriptor.InternalDescriptorAssigner assigner = delegate(pbd::FileDescriptor root) {
        descriptor = root;
        internal__static_D3_GameBalance_Handle__Descriptor = Descriptor.MessageTypes[0];
        internal__static_D3_GameBalance_Handle__FieldAccessorTable = 
            new pb::FieldAccess.FieldAccessorTable<global::D3.GameBalance.Handle, global::D3.GameBalance.Handle.Builder>(internal__static_D3_GameBalance_Handle__Descriptor,
                new string[] { "GameBalanceType", "Gbid", });
        return null;
      };
      pbd::FileDescriptor.InternalBuildGeneratedFileFrom(descriptorData,
          new pbd::FileDescriptor[] {
          }, assigner);
    }
    #endregion
    
  }
  #region Messages
  public sealed partial class Handle : pb::GeneratedMessage<Handle, Handle.Builder> {
    private static readonly Handle defaultInstance = new Builder().BuildPartial();
    public static Handle DefaultInstance {
      get { return defaultInstance; }
    }
    
    public override Handle DefaultInstanceForType {
      get { return defaultInstance; }
    }
    
    protected override Handle ThisMessage {
      get { return this; }
    }
    
    public static pbd::MessageDescriptor Descriptor {
      get { return global::D3.GameBalance.GBHandle.internal__static_D3_GameBalance_Handle__Descriptor; }
    }
    
    protected override pb::FieldAccess.FieldAccessorTable<Handle, Handle.Builder> InternalFieldAccessors {
      get { return global::D3.GameBalance.GBHandle.internal__static_D3_GameBalance_Handle__FieldAccessorTable; }
    }
    
    public const int GameBalanceTypeFieldNumber = 1;
    private bool hasGameBalanceType;
    private int gameBalanceType_ = 0;
    public bool HasGameBalanceType {
      get { return hasGameBalanceType; }
    }
    public int GameBalanceType {
      get { return gameBalanceType_; }
    }
    
    public const int GbidFieldNumber = 2;
    private bool hasGbid;
    private int gbid_ = 0;
    public bool HasGbid {
      get { return hasGbid; }
    }
    public int Gbid {
      get { return gbid_; }
    }
    
    public override bool IsInitialized {
      get {
        if (!hasGameBalanceType) return false;
        if (!hasGbid) return false;
        return true;
      }
    }
    
    public override void WriteTo(pb::CodedOutputStream output) {
      int size = SerializedSize;
      if (HasGameBalanceType) {
        output.WriteSInt32(1, GameBalanceType);
      }
      if (HasGbid) {
        output.WriteSFixed32(2, Gbid);
      }
      UnknownFields.WriteTo(output);
    }
    
    private int memoizedSerializedSize = -1;
    public override int SerializedSize {
      get {
        int size = memoizedSerializedSize;
        if (size != -1) return size;
        
        size = 0;
        if (HasGameBalanceType) {
          size += pb::CodedOutputStream.ComputeSInt32Size(1, GameBalanceType);
        }
        if (HasGbid) {
          size += pb::CodedOutputStream.ComputeSFixed32Size(2, Gbid);
        }
        size += UnknownFields.SerializedSize;
        memoizedSerializedSize = size;
        return size;
      }
    }
    
    public static Handle ParseFrom(pb::ByteString data) {
      return ((Builder) CreateBuilder().MergeFrom(data)).BuildParsed();
    }
    public static Handle ParseFrom(pb::ByteString data, pb::ExtensionRegistry extensionRegistry) {
      return ((Builder) CreateBuilder().MergeFrom(data, extensionRegistry)).BuildParsed();
    }
    public static Handle ParseFrom(byte[] data) {
      return ((Builder) CreateBuilder().MergeFrom(data)).BuildParsed();
    }
    public static Handle ParseFrom(byte[] data, pb::ExtensionRegistry extensionRegistry) {
      return ((Builder) CreateBuilder().MergeFrom(data, extensionRegistry)).BuildParsed();
    }
    public static Handle ParseFrom(global::System.IO.Stream input) {
      return ((Builder) CreateBuilder().MergeFrom(input)).BuildParsed();
    }
    public static Handle ParseFrom(global::System.IO.Stream input, pb::ExtensionRegistry extensionRegistry) {
      return ((Builder) CreateBuilder().MergeFrom(input, extensionRegistry)).BuildParsed();
    }
    public static Handle ParseDelimitedFrom(global::System.IO.Stream input) {
      return CreateBuilder().MergeDelimitedFrom(input).BuildParsed();
    }
    public static Handle ParseDelimitedFrom(global::System.IO.Stream input, pb::ExtensionRegistry extensionRegistry) {
      return CreateBuilder().MergeDelimitedFrom(input, extensionRegistry).BuildParsed();
    }
    public static Handle ParseFrom(pb::CodedInputStream input) {
      return ((Builder) CreateBuilder().MergeFrom(input)).BuildParsed();
    }
    public static Handle ParseFrom(pb::CodedInputStream input, pb::ExtensionRegistry extensionRegistry) {
      return ((Builder) CreateBuilder().MergeFrom(input, extensionRegistry)).BuildParsed();
    }
    public static Builder CreateBuilder() { return new Builder(); }
    public override Builder ToBuilder() { return CreateBuilder(this); }
    public override Builder CreateBuilderForType() { return new Builder(); }
    public static Builder CreateBuilder(Handle prototype) {
      return (Builder) new Builder().MergeFrom(prototype);
    }
    
    public sealed partial class Builder : pb::GeneratedBuilder<Handle, Builder> {
      protected override Builder ThisBuilder {
        get { return this; }
      }
      public Builder() {}
      
      Handle result = new Handle();
      
      protected override Handle MessageBeingBuilt {
        get { return result; }
      }
      
      public override Builder Clear() {
        result = new Handle();
        return this;
      }
      
      public override Builder Clone() {
        return new Builder().MergeFrom(result);
      }
      
      public override pbd::MessageDescriptor DescriptorForType {
        get { return global::D3.GameBalance.Handle.Descriptor; }
      }
      
      public override Handle DefaultInstanceForType {
        get { return global::D3.GameBalance.Handle.DefaultInstance; }
      }
      
      public override Handle BuildPartial() {
        if (result == null) {
          throw new global::System.InvalidOperationException("build() has already been called on this Builder");
        }
        Handle returnMe = result;
        result = null;
        return returnMe;
      }
      
      public override Builder MergeFrom(pb::IMessage other) {
        if (other is Handle) {
          return MergeFrom((Handle) other);
        } else {
          base.MergeFrom(other);
          return this;
        }
      }
      
      public override Builder MergeFrom(Handle other) {
        if (other == global::D3.GameBalance.Handle.DefaultInstance) return this;
        if (other.HasGameBalanceType) {
          GameBalanceType = other.GameBalanceType;
        }
        if (other.HasGbid) {
          Gbid = other.Gbid;
        }
        this.MergeUnknownFields(other.UnknownFields);
        return this;
      }
      
      public override Builder MergeFrom(pb::CodedInputStream input) {
        return MergeFrom(input, pb::ExtensionRegistry.Empty);
      }
      
      public override Builder MergeFrom(pb::CodedInputStream input, pb::ExtensionRegistry extensionRegistry) {
        pb::UnknownFieldSet.Builder unknownFields = null;
        while (true) {
          uint tag = input.ReadTag();
          switch (tag) {
            case 0: {
              if (unknownFields != null) {
                this.UnknownFields = unknownFields.Build();
              }
              return this;
            }
            default: {
              if (pb::WireFormat.IsEndGroupTag(tag)) {
                if (unknownFields != null) {
                  this.UnknownFields = unknownFields.Build();
                }
                return this;
              }
              if (unknownFields == null) {
                unknownFields = pb::UnknownFieldSet.CreateBuilder(this.UnknownFields);
              }
              ParseUnknownField(input, unknownFields, extensionRegistry, tag);
              break;
            }
            case 8: {
              GameBalanceType = input.ReadSInt32();
              break;
            }
            case 21: {
              Gbid = input.ReadSFixed32();
              break;
            }
          }
        }
      }
      
      
      public bool HasGameBalanceType {
        get { return result.HasGameBalanceType; }
      }
      public int GameBalanceType {
        get { return result.GameBalanceType; }
        set { SetGameBalanceType(value); }
      }
      public Builder SetGameBalanceType(int value) {
        result.hasGameBalanceType = true;
        result.gameBalanceType_ = value;
        return this;
      }
      public Builder ClearGameBalanceType() {
        result.hasGameBalanceType = false;
        result.gameBalanceType_ = 0;
        return this;
      }
      
      public bool HasGbid {
        get { return result.HasGbid; }
      }
      public int Gbid {
        get { return result.Gbid; }
        set { SetGbid(value); }
      }
      public Builder SetGbid(int value) {
        result.hasGbid = true;
        result.gbid_ = value;
        return this;
      }
      public Builder ClearGbid() {
        result.hasGbid = false;
        result.gbid_ = 0;
        return this;
      }
    }
    static Handle() {
      object.ReferenceEquals(global::D3.GameBalance.GBHandle.Descriptor, null);
    }
  }
  
  #endregion
  
}
