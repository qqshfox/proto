// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ItemCrafting.proto

package D3.ItemCrafting;

public final class ItemCrafting {
  private ItemCrafting() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
  }
  public static final class CrafterData extends
      com.google.protobuf.GeneratedMessage {
    // Use CrafterData.newBuilder() to construct.
    private CrafterData() {
      initFields();
    }
    private CrafterData(boolean noInit) {}
    
    private static final CrafterData defaultInstance;
    public static CrafterData getDefaultInstance() {
      return defaultInstance;
    }
    
    public CrafterData getDefaultInstanceForType() {
      return defaultInstance;
    }
    
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return D3.ItemCrafting.ItemCrafting.internal_static_D3_ItemCrafting_CrafterData_descriptor;
    }
    
    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return D3.ItemCrafting.ItemCrafting.internal_static_D3_ItemCrafting_CrafterData_fieldAccessorTable;
    }
    
    // repeated sfixed32 recipes = 1;
    public static final int RECIPES_FIELD_NUMBER = 1;
    private java.util.List<java.lang.Integer> recipes_ =
      java.util.Collections.emptyList();
    public java.util.List<java.lang.Integer> getRecipesList() {
      return recipes_;
    }
    public int getRecipesCount() { return recipes_.size(); }
    public int getRecipes(int index) {
      return recipes_.get(index);
    }
    
    // repeated sfixed32 available_enchants = 2;
    public static final int AVAILABLE_ENCHANTS_FIELD_NUMBER = 2;
    private java.util.List<java.lang.Integer> availableEnchants_ =
      java.util.Collections.emptyList();
    public java.util.List<java.lang.Integer> getAvailableEnchantsList() {
      return availableEnchants_;
    }
    public int getAvailableEnchantsCount() { return availableEnchants_.size(); }
    public int getAvailableEnchants(int index) {
      return availableEnchants_.get(index);
    }
    
    // required int32 level = 3;
    public static final int LEVEL_FIELD_NUMBER = 3;
    private boolean hasLevel;
    private int level_ = 0;
    public boolean hasLevel() { return hasLevel; }
    public int getLevel() { return level_; }
    
    // required sfixed64 cooldown_end = 4;
    public static final int COOLDOWN_END_FIELD_NUMBER = 4;
    private boolean hasCooldownEnd;
    private long cooldownEnd_ = 0L;
    public boolean hasCooldownEnd() { return hasCooldownEnd; }
    public long getCooldownEnd() { return cooldownEnd_; }
    
    private void initFields() {
    }
    public final boolean isInitialized() {
      if (!hasLevel) return false;
      if (!hasCooldownEnd) return false;
      return true;
    }
    
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      for (int element : getRecipesList()) {
        output.writeSFixed32(1, element);
      }
      for (int element : getAvailableEnchantsList()) {
        output.writeSFixed32(2, element);
      }
      if (hasLevel()) {
        output.writeInt32(3, getLevel());
      }
      if (hasCooldownEnd()) {
        output.writeSFixed64(4, getCooldownEnd());
      }
      getUnknownFields().writeTo(output);
    }
    
    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;
    
      size = 0;
      {
        int dataSize = 0;
        dataSize = 4 * getRecipesList().size();
        size += dataSize;
        size += 1 * getRecipesList().size();
      }
      {
        int dataSize = 0;
        dataSize = 4 * getAvailableEnchantsList().size();
        size += dataSize;
        size += 1 * getAvailableEnchantsList().size();
      }
      if (hasLevel()) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(3, getLevel());
      }
      if (hasCooldownEnd()) {
        size += com.google.protobuf.CodedOutputStream
          .computeSFixed64Size(4, getCooldownEnd());
      }
      size += getUnknownFields().getSerializedSize();
      memoizedSerializedSize = size;
      return size;
    }
    
    public static D3.ItemCrafting.ItemCrafting.CrafterData parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterData parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterData parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterData parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterData parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterData parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterData parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterData parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input, extensionRegistry)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterData parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterData parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    
    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(D3.ItemCrafting.ItemCrafting.CrafterData prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }
    
    public static final class Builder extends
        com.google.protobuf.GeneratedMessage.Builder<Builder> {
      private D3.ItemCrafting.ItemCrafting.CrafterData result;
      
      // Construct using D3.ItemCrafting.ItemCrafting.CrafterData.newBuilder()
      private Builder() {}
      
      private static Builder create() {
        Builder builder = new Builder();
        builder.result = new D3.ItemCrafting.ItemCrafting.CrafterData();
        return builder;
      }
      
      protected D3.ItemCrafting.ItemCrafting.CrafterData internalGetResult() {
        return result;
      }
      
      public Builder clear() {
        if (result == null) {
          throw new IllegalStateException(
            "Cannot call clear() after build().");
        }
        result = new D3.ItemCrafting.ItemCrafting.CrafterData();
        return this;
      }
      
      public Builder clone() {
        return create().mergeFrom(result);
      }
      
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return D3.ItemCrafting.ItemCrafting.CrafterData.getDescriptor();
      }
      
      public D3.ItemCrafting.ItemCrafting.CrafterData getDefaultInstanceForType() {
        return D3.ItemCrafting.ItemCrafting.CrafterData.getDefaultInstance();
      }
      
      public boolean isInitialized() {
        return result.isInitialized();
      }
      public D3.ItemCrafting.ItemCrafting.CrafterData build() {
        if (result != null && !isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return buildPartial();
      }
      
      private D3.ItemCrafting.ItemCrafting.CrafterData buildParsed()
          throws com.google.protobuf.InvalidProtocolBufferException {
        if (!isInitialized()) {
          throw newUninitializedMessageException(
            result).asInvalidProtocolBufferException();
        }
        return buildPartial();
      }
      
      public D3.ItemCrafting.ItemCrafting.CrafterData buildPartial() {
        if (result == null) {
          throw new IllegalStateException(
            "build() has already been called on this Builder.");
        }
        if (result.recipes_ != java.util.Collections.EMPTY_LIST) {
          result.recipes_ =
            java.util.Collections.unmodifiableList(result.recipes_);
        }
        if (result.availableEnchants_ != java.util.Collections.EMPTY_LIST) {
          result.availableEnchants_ =
            java.util.Collections.unmodifiableList(result.availableEnchants_);
        }
        D3.ItemCrafting.ItemCrafting.CrafterData returnMe = result;
        result = null;
        return returnMe;
      }
      
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof D3.ItemCrafting.ItemCrafting.CrafterData) {
          return mergeFrom((D3.ItemCrafting.ItemCrafting.CrafterData)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }
      
      public Builder mergeFrom(D3.ItemCrafting.ItemCrafting.CrafterData other) {
        if (other == D3.ItemCrafting.ItemCrafting.CrafterData.getDefaultInstance()) return this;
        if (!other.recipes_.isEmpty()) {
          if (result.recipes_.isEmpty()) {
            result.recipes_ = new java.util.ArrayList<java.lang.Integer>();
          }
          result.recipes_.addAll(other.recipes_);
        }
        if (!other.availableEnchants_.isEmpty()) {
          if (result.availableEnchants_.isEmpty()) {
            result.availableEnchants_ = new java.util.ArrayList<java.lang.Integer>();
          }
          result.availableEnchants_.addAll(other.availableEnchants_);
        }
        if (other.hasLevel()) {
          setLevel(other.getLevel());
        }
        if (other.hasCooldownEnd()) {
          setCooldownEnd(other.getCooldownEnd());
        }
        this.mergeUnknownFields(other.getUnknownFields());
        return this;
      }
      
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder(
            this.getUnknownFields());
        while (true) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              this.setUnknownFields(unknownFields.build());
              return this;
            default: {
              if (!parseUnknownField(input, unknownFields,
                                     extensionRegistry, tag)) {
                this.setUnknownFields(unknownFields.build());
                return this;
              }
              break;
            }
            case 13: {
              addRecipes(input.readSFixed32());
              break;
            }
            case 10: {
              int length = input.readRawVarint32();
              int limit = input.pushLimit(length);
              while (input.getBytesUntilLimit() > 0) {
                addRecipes(input.readSFixed32());
              }
              input.popLimit(limit);
              break;
            }
            case 21: {
              addAvailableEnchants(input.readSFixed32());
              break;
            }
            case 18: {
              int length = input.readRawVarint32();
              int limit = input.pushLimit(length);
              while (input.getBytesUntilLimit() > 0) {
                addAvailableEnchants(input.readSFixed32());
              }
              input.popLimit(limit);
              break;
            }
            case 24: {
              setLevel(input.readInt32());
              break;
            }
            case 33: {
              setCooldownEnd(input.readSFixed64());
              break;
            }
          }
        }
      }
      
      
      // repeated sfixed32 recipes = 1;
      public java.util.List<java.lang.Integer> getRecipesList() {
        return java.util.Collections.unmodifiableList(result.recipes_);
      }
      public int getRecipesCount() {
        return result.getRecipesCount();
      }
      public int getRecipes(int index) {
        return result.getRecipes(index);
      }
      public Builder setRecipes(int index, int value) {
        result.recipes_.set(index, value);
        return this;
      }
      public Builder addRecipes(int value) {
        if (result.recipes_.isEmpty()) {
          result.recipes_ = new java.util.ArrayList<java.lang.Integer>();
        }
        result.recipes_.add(value);
        return this;
      }
      public Builder addAllRecipes(
          java.lang.Iterable<? extends java.lang.Integer> values) {
        if (result.recipes_.isEmpty()) {
          result.recipes_ = new java.util.ArrayList<java.lang.Integer>();
        }
        super.addAll(values, result.recipes_);
        return this;
      }
      public Builder clearRecipes() {
        result.recipes_ = java.util.Collections.emptyList();
        return this;
      }
      
      // repeated sfixed32 available_enchants = 2;
      public java.util.List<java.lang.Integer> getAvailableEnchantsList() {
        return java.util.Collections.unmodifiableList(result.availableEnchants_);
      }
      public int getAvailableEnchantsCount() {
        return result.getAvailableEnchantsCount();
      }
      public int getAvailableEnchants(int index) {
        return result.getAvailableEnchants(index);
      }
      public Builder setAvailableEnchants(int index, int value) {
        result.availableEnchants_.set(index, value);
        return this;
      }
      public Builder addAvailableEnchants(int value) {
        if (result.availableEnchants_.isEmpty()) {
          result.availableEnchants_ = new java.util.ArrayList<java.lang.Integer>();
        }
        result.availableEnchants_.add(value);
        return this;
      }
      public Builder addAllAvailableEnchants(
          java.lang.Iterable<? extends java.lang.Integer> values) {
        if (result.availableEnchants_.isEmpty()) {
          result.availableEnchants_ = new java.util.ArrayList<java.lang.Integer>();
        }
        super.addAll(values, result.availableEnchants_);
        return this;
      }
      public Builder clearAvailableEnchants() {
        result.availableEnchants_ = java.util.Collections.emptyList();
        return this;
      }
      
      // required int32 level = 3;
      public boolean hasLevel() {
        return result.hasLevel();
      }
      public int getLevel() {
        return result.getLevel();
      }
      public Builder setLevel(int value) {
        result.hasLevel = true;
        result.level_ = value;
        return this;
      }
      public Builder clearLevel() {
        result.hasLevel = false;
        result.level_ = 0;
        return this;
      }
      
      // required sfixed64 cooldown_end = 4;
      public boolean hasCooldownEnd() {
        return result.hasCooldownEnd();
      }
      public long getCooldownEnd() {
        return result.getCooldownEnd();
      }
      public Builder setCooldownEnd(long value) {
        result.hasCooldownEnd = true;
        result.cooldownEnd_ = value;
        return this;
      }
      public Builder clearCooldownEnd() {
        result.hasCooldownEnd = false;
        result.cooldownEnd_ = 0L;
        return this;
      }
      
      // @@protoc_insertion_point(builder_scope:D3.ItemCrafting.CrafterData)
    }
    
    static {
      defaultInstance = new CrafterData(true);
      D3.ItemCrafting.ItemCrafting.internalForceInit();
      defaultInstance.initFields();
    }
    
    // @@protoc_insertion_point(class_scope:D3.ItemCrafting.CrafterData)
  }
  
  public static final class CrafterSavedData extends
      com.google.protobuf.GeneratedMessage {
    // Use CrafterSavedData.newBuilder() to construct.
    private CrafterSavedData() {
      initFields();
    }
    private CrafterSavedData(boolean noInit) {}
    
    private static final CrafterSavedData defaultInstance;
    public static CrafterSavedData getDefaultInstance() {
      return defaultInstance;
    }
    
    public CrafterSavedData getDefaultInstanceForType() {
      return defaultInstance;
    }
    
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return D3.ItemCrafting.ItemCrafting.internal_static_D3_ItemCrafting_CrafterSavedData_descriptor;
    }
    
    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return D3.ItemCrafting.ItemCrafting.internal_static_D3_ItemCrafting_CrafterSavedData_fieldAccessorTable;
    }
    
    // repeated .D3.ItemCrafting.CrafterData crafter_data = 1;
    public static final int CRAFTER_DATA_FIELD_NUMBER = 1;
    private java.util.List<D3.ItemCrafting.ItemCrafting.CrafterData> crafterData_ =
      java.util.Collections.emptyList();
    public java.util.List<D3.ItemCrafting.ItemCrafting.CrafterData> getCrafterDataList() {
      return crafterData_;
    }
    public int getCrafterDataCount() { return crafterData_.size(); }
    public D3.ItemCrafting.ItemCrafting.CrafterData getCrafterData(int index) {
      return crafterData_.get(index);
    }
    
    private void initFields() {
    }
    public final boolean isInitialized() {
      for (D3.ItemCrafting.ItemCrafting.CrafterData element : getCrafterDataList()) {
        if (!element.isInitialized()) return false;
      }
      return true;
    }
    
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      for (D3.ItemCrafting.ItemCrafting.CrafterData element : getCrafterDataList()) {
        output.writeMessage(1, element);
      }
      getUnknownFields().writeTo(output);
    }
    
    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;
    
      size = 0;
      for (D3.ItemCrafting.ItemCrafting.CrafterData element : getCrafterDataList()) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, element);
      }
      size += getUnknownFields().getSerializedSize();
      memoizedSerializedSize = size;
      return size;
    }
    
    public static D3.ItemCrafting.ItemCrafting.CrafterSavedData parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterSavedData parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterSavedData parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterSavedData parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterSavedData parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterSavedData parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterSavedData parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterSavedData parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input, extensionRegistry)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterSavedData parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static D3.ItemCrafting.ItemCrafting.CrafterSavedData parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    
    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(D3.ItemCrafting.ItemCrafting.CrafterSavedData prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }
    
    public static final class Builder extends
        com.google.protobuf.GeneratedMessage.Builder<Builder> {
      private D3.ItemCrafting.ItemCrafting.CrafterSavedData result;
      
      // Construct using D3.ItemCrafting.ItemCrafting.CrafterSavedData.newBuilder()
      private Builder() {}
      
      private static Builder create() {
        Builder builder = new Builder();
        builder.result = new D3.ItemCrafting.ItemCrafting.CrafterSavedData();
        return builder;
      }
      
      protected D3.ItemCrafting.ItemCrafting.CrafterSavedData internalGetResult() {
        return result;
      }
      
      public Builder clear() {
        if (result == null) {
          throw new IllegalStateException(
            "Cannot call clear() after build().");
        }
        result = new D3.ItemCrafting.ItemCrafting.CrafterSavedData();
        return this;
      }
      
      public Builder clone() {
        return create().mergeFrom(result);
      }
      
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return D3.ItemCrafting.ItemCrafting.CrafterSavedData.getDescriptor();
      }
      
      public D3.ItemCrafting.ItemCrafting.CrafterSavedData getDefaultInstanceForType() {
        return D3.ItemCrafting.ItemCrafting.CrafterSavedData.getDefaultInstance();
      }
      
      public boolean isInitialized() {
        return result.isInitialized();
      }
      public D3.ItemCrafting.ItemCrafting.CrafterSavedData build() {
        if (result != null && !isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return buildPartial();
      }
      
      private D3.ItemCrafting.ItemCrafting.CrafterSavedData buildParsed()
          throws com.google.protobuf.InvalidProtocolBufferException {
        if (!isInitialized()) {
          throw newUninitializedMessageException(
            result).asInvalidProtocolBufferException();
        }
        return buildPartial();
      }
      
      public D3.ItemCrafting.ItemCrafting.CrafterSavedData buildPartial() {
        if (result == null) {
          throw new IllegalStateException(
            "build() has already been called on this Builder.");
        }
        if (result.crafterData_ != java.util.Collections.EMPTY_LIST) {
          result.crafterData_ =
            java.util.Collections.unmodifiableList(result.crafterData_);
        }
        D3.ItemCrafting.ItemCrafting.CrafterSavedData returnMe = result;
        result = null;
        return returnMe;
      }
      
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof D3.ItemCrafting.ItemCrafting.CrafterSavedData) {
          return mergeFrom((D3.ItemCrafting.ItemCrafting.CrafterSavedData)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }
      
      public Builder mergeFrom(D3.ItemCrafting.ItemCrafting.CrafterSavedData other) {
        if (other == D3.ItemCrafting.ItemCrafting.CrafterSavedData.getDefaultInstance()) return this;
        if (!other.crafterData_.isEmpty()) {
          if (result.crafterData_.isEmpty()) {
            result.crafterData_ = new java.util.ArrayList<D3.ItemCrafting.ItemCrafting.CrafterData>();
          }
          result.crafterData_.addAll(other.crafterData_);
        }
        this.mergeUnknownFields(other.getUnknownFields());
        return this;
      }
      
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder(
            this.getUnknownFields());
        while (true) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              this.setUnknownFields(unknownFields.build());
              return this;
            default: {
              if (!parseUnknownField(input, unknownFields,
                                     extensionRegistry, tag)) {
                this.setUnknownFields(unknownFields.build());
                return this;
              }
              break;
            }
            case 10: {
              D3.ItemCrafting.ItemCrafting.CrafterData.Builder subBuilder = D3.ItemCrafting.ItemCrafting.CrafterData.newBuilder();
              input.readMessage(subBuilder, extensionRegistry);
              addCrafterData(subBuilder.buildPartial());
              break;
            }
          }
        }
      }
      
      
      // repeated .D3.ItemCrafting.CrafterData crafter_data = 1;
      public java.util.List<D3.ItemCrafting.ItemCrafting.CrafterData> getCrafterDataList() {
        return java.util.Collections.unmodifiableList(result.crafterData_);
      }
      public int getCrafterDataCount() {
        return result.getCrafterDataCount();
      }
      public D3.ItemCrafting.ItemCrafting.CrafterData getCrafterData(int index) {
        return result.getCrafterData(index);
      }
      public Builder setCrafterData(int index, D3.ItemCrafting.ItemCrafting.CrafterData value) {
        if (value == null) {
          throw new NullPointerException();
        }
        result.crafterData_.set(index, value);
        return this;
      }
      public Builder setCrafterData(int index, D3.ItemCrafting.ItemCrafting.CrafterData.Builder builderForValue) {
        result.crafterData_.set(index, builderForValue.build());
        return this;
      }
      public Builder addCrafterData(D3.ItemCrafting.ItemCrafting.CrafterData value) {
        if (value == null) {
          throw new NullPointerException();
        }
        if (result.crafterData_.isEmpty()) {
          result.crafterData_ = new java.util.ArrayList<D3.ItemCrafting.ItemCrafting.CrafterData>();
        }
        result.crafterData_.add(value);
        return this;
      }
      public Builder addCrafterData(D3.ItemCrafting.ItemCrafting.CrafterData.Builder builderForValue) {
        if (result.crafterData_.isEmpty()) {
          result.crafterData_ = new java.util.ArrayList<D3.ItemCrafting.ItemCrafting.CrafterData>();
        }
        result.crafterData_.add(builderForValue.build());
        return this;
      }
      public Builder addAllCrafterData(
          java.lang.Iterable<? extends D3.ItemCrafting.ItemCrafting.CrafterData> values) {
        if (result.crafterData_.isEmpty()) {
          result.crafterData_ = new java.util.ArrayList<D3.ItemCrafting.ItemCrafting.CrafterData>();
        }
        super.addAll(values, result.crafterData_);
        return this;
      }
      public Builder clearCrafterData() {
        result.crafterData_ = java.util.Collections.emptyList();
        return this;
      }
      
      // @@protoc_insertion_point(builder_scope:D3.ItemCrafting.CrafterSavedData)
    }
    
    static {
      defaultInstance = new CrafterSavedData(true);
      D3.ItemCrafting.ItemCrafting.internalForceInit();
      defaultInstance.initFields();
    }
    
    // @@protoc_insertion_point(class_scope:D3.ItemCrafting.CrafterSavedData)
  }
  
  private static com.google.protobuf.Descriptors.Descriptor
    internal_static_D3_ItemCrafting_CrafterData_descriptor;
  private static
    com.google.protobuf.GeneratedMessage.FieldAccessorTable
      internal_static_D3_ItemCrafting_CrafterData_fieldAccessorTable;
  private static com.google.protobuf.Descriptors.Descriptor
    internal_static_D3_ItemCrafting_CrafterSavedData_descriptor;
  private static
    com.google.protobuf.GeneratedMessage.FieldAccessorTable
      internal_static_D3_ItemCrafting_CrafterSavedData_fieldAccessorTable;
  
  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\022ItemCrafting.proto\022\017D3.ItemCrafting\"_\n" +
      "\013CrafterData\022\017\n\007recipes\030\001 \003(\017\022\032\n\022availab" +
      "le_enchants\030\002 \003(\017\022\r\n\005level\030\003 \002(\005\022\024\n\014cool" +
      "down_end\030\004 \002(\020\"F\n\020CrafterSavedData\0222\n\014cr" +
      "after_data\030\001 \003(\0132\034.D3.ItemCrafting.Craft" +
      "erData"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
      new com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner() {
        public com.google.protobuf.ExtensionRegistry assignDescriptors(
            com.google.protobuf.Descriptors.FileDescriptor root) {
          descriptor = root;
          internal_static_D3_ItemCrafting_CrafterData_descriptor =
            getDescriptor().getMessageTypes().get(0);
          internal_static_D3_ItemCrafting_CrafterData_fieldAccessorTable = new
            com.google.protobuf.GeneratedMessage.FieldAccessorTable(
              internal_static_D3_ItemCrafting_CrafterData_descriptor,
              new java.lang.String[] { "Recipes", "AvailableEnchants", "Level", "CooldownEnd", },
              D3.ItemCrafting.ItemCrafting.CrafterData.class,
              D3.ItemCrafting.ItemCrafting.CrafterData.Builder.class);
          internal_static_D3_ItemCrafting_CrafterSavedData_descriptor =
            getDescriptor().getMessageTypes().get(1);
          internal_static_D3_ItemCrafting_CrafterSavedData_fieldAccessorTable = new
            com.google.protobuf.GeneratedMessage.FieldAccessorTable(
              internal_static_D3_ItemCrafting_CrafterSavedData_descriptor,
              new java.lang.String[] { "CrafterData", },
              D3.ItemCrafting.ItemCrafting.CrafterSavedData.class,
              D3.ItemCrafting.ItemCrafting.CrafterSavedData.Builder.class);
          return null;
        }
      };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        }, assigner);
  }
  
  public static void internalForceInit() {}
  
  // @@protoc_insertion_point(outer_class_scope)
}
