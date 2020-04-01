//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Argument {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct Buffer {
    char *_field1;
    unsigned int _field2;
    unsigned long long _field3;
    struct __CFString *_field4;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CommandIndex {
    unsigned int _field1;
    int _field2;
};

struct CoreFunction {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    union {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
    struct Argument _field6;
    struct Argument _field7[16];
    unsigned int _field8;
    unsigned int _field9;
    void *_field10;
    void *_field11;
};

struct DYInterposeVersion {
    int version;
    char *patch;
};

struct DYPBoundBufferDataLayout;

struct Function {
    struct CoreFunction _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
    unsigned short _field5;
    unsigned short _field6;
    int _field7;
    void *_field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    struct Function *_field13;
    void *_field14;
};

struct GPUBufferViewerAdaptorGeometryParams {
    unsigned long long _field1;
    unsigned long long _field2;
    struct Buffer _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct Buffer _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    _Bool _field11;
    float _field12;
    unsigned int _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    struct Buffer _field18;
    struct Buffer _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    struct GPUBufferViewerAdaptorRegion _field25;
    unsigned long long _field26;
};

struct GPUBufferViewerAdaptorRegion {
    union {
        struct {
            unsigned long long _field1;
            unsigned long long _field2;
            unsigned long long _field3;
            unsigned long long _field4;
            unsigned long long _field5;
            unsigned long long _field6;
        } _field1;
        long long _field2[6];
    } _field1;
};

struct NSArray {
    Class _field1;
};

struct NSMutableArray {
    Class _field1;
};

struct StructNameOffset;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> *__next_;
};

struct map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>>;

struct shared_ptr<GPUTools::FD::Function> {
    struct Function *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> {
    struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<unsigned long long>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<DYPBoundBufferDataLayout, std::__1::allocator<DYPBoundBufferDataLayout>> {
    struct DYPBoundBufferDataLayout *_field1;
    struct DYPBoundBufferDataLayout *_field2;
    struct __compressed_pair<DYPBoundBufferDataLayout *, std::__1::allocator<DYPBoundBufferDataLayout>> {
        struct DYPBoundBufferDataLayout *_field1;
    } _field3;
};

struct vector<GPUDebugger::BufferViewer::AdaptorDataSource::Buffer, std::__1::allocator<GPUDebugger::BufferViewer::AdaptorDataSource::Buffer>> {
    struct Buffer *_field1;
    struct Buffer *_field2;
    struct __compressed_pair<GPUDebugger::BufferViewer::AdaptorDataSource::Buffer *, std::__1::allocator<GPUDebugger::BufferViewer::AdaptorDataSource::Buffer>> {
        struct Buffer *_field1;
    } _field3;
};

struct vector<StructNameOffset, std::__1::allocator<StructNameOffset>> {
    struct StructNameOffset *_field1;
    struct StructNameOffset *_field2;
    struct __compressed_pair<StructNameOffset *, std::__1::allocator<StructNameOffset>> {
        struct StructNameOffset *_field1;
    } _field3;
};

struct vector<std::__1::map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>>, std::__1::allocator<std::__1::map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>>>> {
    struct map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>> *_field1;
    struct map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>> *_field2;
    struct __compressed_pair<std::__1::map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>>*, std::__1::allocator<std::__1::map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>>>> {
        struct map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
} CDStruct_a06f635e;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

// Template types
typedef struct shared_ptr<GPUTools::FD::Function> {
    struct Function *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_2d3f6817;

typedef struct vector<DYPBoundBufferDataLayout, std::__1::allocator<DYPBoundBufferDataLayout>> {
    struct DYPBoundBufferDataLayout *_field1;
    struct DYPBoundBufferDataLayout *_field2;
    struct __compressed_pair<DYPBoundBufferDataLayout *, std::__1::allocator<DYPBoundBufferDataLayout>> {
        struct DYPBoundBufferDataLayout *_field1;
    } _field3;
} vector_4eb18ac8;

typedef struct vector<GPUDebugger::BufferViewer::AdaptorDataSource::Buffer, std::__1::allocator<GPUDebugger::BufferViewer::AdaptorDataSource::Buffer>> {
    struct Buffer *_field1;
    struct Buffer *_field2;
    struct __compressed_pair<GPUDebugger::BufferViewer::AdaptorDataSource::Buffer *, std::__1::allocator<GPUDebugger::BufferViewer::AdaptorDataSource::Buffer>> {
        struct Buffer *_field1;
    } _field3;
} vector_c26b6358;

typedef struct vector<StructNameOffset, std::__1::allocator<StructNameOffset>> {
    struct StructNameOffset *_field1;
    struct StructNameOffset *_field2;
    struct __compressed_pair<StructNameOffset *, std::__1::allocator<StructNameOffset>> {
        struct StructNameOffset *_field1;
    } _field3;
} vector_44d4fed2;

typedef struct vector<std::__1::map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>>, std::__1::allocator<std::__1::map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>>>> {
    struct map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>> *_field1;
    struct map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>> *_field2;
    struct __compressed_pair<std::__1::map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>>*, std::__1::allocator<std::__1::map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>>>> {
        struct map<unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::vector<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource, std::__1::allocator<GPUToolsPlatformSupport::Common::GPUDebugger::EncodedResource>>>>> *_field1;
    } _field3;
} vector_17e8e373;

#pragma mark Named Unions

union DYTextureChannelMappings {
    CDStruct_a06f635e _field1;
    unsigned char _field2[4];
    unsigned int _field3;
};

