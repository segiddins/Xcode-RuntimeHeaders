//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Argument {
    void *value;
    unsigned int core_type;
    unsigned int sem_type;
    unsigned int size;
    unsigned short length;
    unsigned short flags;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CoreFunction {
    unsigned int fenum;
    unsigned int flags;
    unsigned short padding;
    unsigned short argument_count;
    union {
        unsigned long long context_id;
        unsigned long long receiver_id;
    } ;
    struct Argument return_value;
    struct Argument arguments[16];
    unsigned int fbuf_size;
    unsigned int internal_buffer_size;
    void *fbuf;
    void *internal_buffer;
};

struct DYInterposeVersion {
    int version;
    char *patch;
};

struct DecodedFunctionStream;

struct Function {
    struct CoreFunction core;
    unsigned long long timestamp;
    unsigned long long duration;
    unsigned long long *backtrace;
    unsigned short backtrace_length;
    unsigned short gl_error;
    int events_type;
    void *events;
    unsigned int events_size;
    unsigned int queue_width;
    unsigned long long queue_id;
    unsigned long long thread_id;
    struct Function *next_associated;
    void *sm_context;
};

struct FunctionStreamEntry {
    struct unique_ptr<GPUTools::Playback::DecodedFunctionStream, std::__1::default_delete<GPUTools::Playback::DecodedFunctionStream>> _field1;
    struct _Iterator<GPUTools::FD::CoreFunction> _field2;
    struct shared_ptr<GPUTools::FD::TFunctionStream<GPUTools::FD::CoreFunction, void>> _field3;
    struct objc_ref<DYCaptureFile *> _field4;
};

struct IFunctionDecoder;

struct MemBlock;

struct MemoryManager {
    unsigned int _state;
    unsigned int _alignment;
    unsigned int _bufferSize;
    unsigned int _bufferCounter;
    void *_pBuffer;
    void *_pBufferBegin;
    void *_pBufferEnd;
    void *_pBufferPosition;
    struct MemBlock *_pMemBlockHead;
    unsigned long long _memBlockSizeTotalMax;
    unsigned int _memBlockCounter;
};

struct PlaybackEngineDecodeCache {
    struct vector<std::__1::unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>, std::__1::allocator<std::__1::unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>>> _field1;
    struct __wrap_iter<std::__1::unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>*> _field2;
    struct __wrap_iter<std::__1::unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>*> _field3;
    struct unique_ptr<GPUTools::FD::CoreFunction [], std::__1::default_delete<GPUTools::FD::CoreFunction []>> _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct VMBuffer _field8;
    struct unordered_map<unsigned long long, std::__1::tuple<void *, unsigned long>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::tuple<void *, unsigned long>>>> _field9;
};

struct RunningStatistics<unsigned long long>;

struct SequenceCache {
    unsigned int _state;
    unsigned int _streamIdx;
    unsigned int _streamNum;
    unsigned int _dataIdx;
    unsigned int _dataNum;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _dataList;
    struct vector<std::__1::vector<std::__1::pair<unsigned int, unsigned int>, std::__1::allocator<std::__1::pair<unsigned int, unsigned int>>>, std::__1::allocator<std::__1::vector<std::__1::pair<unsigned int, unsigned int>, std::__1::allocator<std::__1::pair<unsigned int, unsigned int>>>>> _compressedDataList;
};

struct TFunctionStream<GPUTools::FD::CoreFunction, void>;

struct TFunctionStream<GPUTools::FD::Function, void>;

struct VMBuffer {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
};

struct _Iterator<GPUTools::FD::CoreFunction> {
    struct CoreFunction _field1;
    void *_field2;
    void *_field3;
    void *_field4;
    struct IFunctionDecoder *_field5;
    _Bool _field6;
};

struct _Iterator<GPUTools::FD::Function> {
    struct Function _function;
    void *_encbuf;
    void *_next;
    void *_end;
    struct IFunctionDecoder *_decoder;
    _Bool _fast_size;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*> *__next_;
};

struct __shared_weak_count;

struct __wrap_iter<std::__1::unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>*> {
    struct unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>> *__i;
};

struct atomic<unsigned long> {
    struct __cxx_atomic_impl<unsigned long, std::__1::__cxx_atomic_base_impl<unsigned long>> {
        _Atomic unsigned long long __a_value;
    } __a_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct dispatch_semaphore_s;

struct objc_ref<DYCaptureArchive *>;

struct objc_ref<DYCaptureFile *> {
    id _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct pair<std::__1::basic_string<char>, bool>;

struct shared_ptr<GPUTools::FD::TFunctionStream<GPUTools::FD::CoreFunction, void>> {
    struct TFunctionStream<GPUTools::FD::CoreFunction, void> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<GPUTools::FD::TFunctionStream<GPUTools::FD::Function, void>> {
    struct TFunctionStream<GPUTools::FD::Function, void> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<GPUTools::FD::CoreFunction [], std::__1::default_delete<GPUTools::FD::CoreFunction []>> {
    struct __compressed_pair<GPUTools::FD::CoreFunction *, std::__1::default_delete<GPUTools::FD::CoreFunction []>> {
        struct CoreFunction *_field1;
    } _field1;
};

struct unique_ptr<GPUTools::Playback::DecodedFunctionStream, std::__1::default_delete<GPUTools::Playback::DecodedFunctionStream>> {
    struct __compressed_pair<GPUTools::Playback::DecodedFunctionStream *, std::__1::default_delete<GPUTools::Playback::DecodedFunctionStream>> {
        struct DecodedFunctionStream *_field1;
    } _field1;
};

struct unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>;

struct unique_ptr<GPUTools::RunningStatistics<unsigned long long>, std::__1::default_delete<GPUTools::RunningStatistics<unsigned long long>>> {
    struct __compressed_pair<GPUTools::RunningStatistics<unsigned long long>*, std::__1::default_delete<GPUTools::RunningStatistics<unsigned long long>>> {
        struct RunningStatistics<unsigned long long> *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<const char *, OpaqueJSString *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, OpaqueJSString *>>> {
    struct __hash_table<std::__1::__hash_value_type<const char *, OpaqueJSString *>, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, OpaqueJSString *>, std::__1::hash<const char *>, true>, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, OpaqueJSString *>, std::__1::equal_to<const char *>, true>, std::__1::allocator<std::__1::__hash_value_type<const char *, OpaqueJSString *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSString *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, OpaqueJSString *>, std::__1::hash<const char *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, OpaqueJSString *>, std::__1::equal_to<const char *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<const char *, OpaqueJSValue *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, OpaqueJSValue *>>> {
    struct __hash_table<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, OpaqueJSValue *>, std::__1::hash<const char *>, true>, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, OpaqueJSValue *>, std::__1::equal_to<const char *>, true>, std::__1::allocator<std::__1::__hash_value_type<const char *, OpaqueJSValue *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, OpaqueJSValue *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, OpaqueJSValue *>, std::__1::hash<const char *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, OpaqueJSValue *>, std::__1::equal_to<const char *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, std::__1::tuple<void *, unsigned long>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::tuple<void *, unsigned long>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::tuple<void *, unsigned long>>, std::__1::equal_to<unsigned long long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<void *, unsigned long, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<std::__1::pair<void *const, unsigned long>>> {
    struct __hash_table<std::__1::__hash_value_type<void *, unsigned long>, std::__1::__unordered_map_hasher<void *, std::__1::__hash_value_type<void *, unsigned long>, std::__1::hash<void *>, true>, std::__1::__unordered_map_equal<void *, std::__1::__hash_value_type<void *, unsigned long>, std::__1::equal_to<void *>, true>, std::__1::allocator<std::__1::__hash_value_type<void *, unsigned long>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<void *, std::__1::__hash_value_type<void *, unsigned long>, std::__1::hash<void *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<void *, std::__1::__hash_value_type<void *, unsigned long>, std::__1::equal_to<void *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<DYCaptureArchiveCacheEntry, std::__1::allocator<DYCaptureArchiveCacheEntry>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<DYCaptureArchiveCacheEntry *, std::__1::allocator<DYCaptureArchiveCacheEntry>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<GPUTools::objc_ref<DYCaptureArchive *>, std::__1::allocator<GPUTools::objc_ref<DYCaptureArchive *>>> {
    struct objc_ref<DYCaptureArchive *> *__begin_;
    struct objc_ref<DYCaptureArchive *> *__end_;
    struct __compressed_pair<GPUTools::objc_ref<DYCaptureArchive *>*, std::__1::allocator<GPUTools::objc_ref<DYCaptureArchive *>>> {
        struct objc_ref<DYCaptureArchive *> *__value_;
    } __end_cap_;
};

struct vector<std::__1::pair<std::__1::basic_string<char>, bool>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, bool>>> {
    struct pair<std::__1::basic_string<char>, bool> *__begin_;
    struct pair<std::__1::basic_string<char>, bool> *__end_;
    struct __compressed_pair<std::__1::pair<std::__1::basic_string<char>, bool>*, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, bool>>> {
        struct pair<std::__1::basic_string<char>, bool> *__value_;
    } __end_cap_;
};

struct vector<std::__1::pair<unsigned int, unsigned int>, std::__1::allocator<std::__1::pair<unsigned int, unsigned int>>>;

struct vector<std::__1::unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>, std::__1::allocator<std::__1::unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>>> {
    struct unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>> *_field1;
    struct unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>*, std::__1::allocator<std::__1::unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>>> {
        struct unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<std::__1::pair<unsigned int, unsigned int>, std::__1::allocator<std::__1::pair<unsigned int, unsigned int>>>, std::__1::allocator<std::__1::vector<std::__1::pair<unsigned int, unsigned int>, std::__1::allocator<std::__1::pair<unsigned int, unsigned int>>>>> {
    struct vector<std::__1::pair<unsigned int, unsigned int>, std::__1::allocator<std::__1::pair<unsigned int, unsigned int>>> *__begin_;
    struct vector<std::__1::pair<unsigned int, unsigned int>, std::__1::allocator<std::__1::pair<unsigned int, unsigned int>>> *__end_;
    struct __compressed_pair<std::__1::vector<std::__1::pair<unsigned int, unsigned int>, std::__1::allocator<std::__1::pair<unsigned int, unsigned int>>>*, std::__1::allocator<std::__1::vector<std::__1::pair<unsigned int, unsigned int>, std::__1::allocator<std::__1::pair<unsigned int, unsigned int>>>>> {
        struct vector<std::__1::pair<unsigned int, unsigned int>, std::__1::allocator<std::__1::pair<unsigned int, unsigned int>>> *__value_;
    } __end_cap_;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *__value_;
    } __end_cap_;
};

struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int fourcc;
    unsigned int version;
    unsigned int hash_table_length;
    unsigned int file_table_length;
    unsigned int name_table_length;
} CDStruct_ac07b3a8;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
} CDStruct_32a7f38a;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
} CDStruct_61ea625d;

typedef struct {
    unsigned short _field1;
} CDStruct_f6a177db;

typedef struct {
    double orientation;
    unsigned int width;
    unsigned int height;
    unsigned int scale;
    unsigned int type;
} CDStruct_e4c1f684;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned int _field1;
    union {
        unsigned int _field1;
        unsigned int _field2;
    } _field2;
    long long _field3;
    unsigned int _field4;
    unsigned int _field5;
} CDStruct_fa775e3a;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    int _field3;
    struct dispatch_semaphore_s *_field4;
} CDStruct_05590e52;

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_a1f69cfb;

typedef struct unordered_map<void *, unsigned long, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<std::__1::pair<void *const, unsigned long>>> {
    struct __hash_table<std::__1::__hash_value_type<void *, unsigned long>, std::__1::__unordered_map_hasher<void *, std::__1::__hash_value_type<void *, unsigned long>, std::__1::hash<void *>, true>, std::__1::__unordered_map_equal<void *, std::__1::__hash_value_type<void *, unsigned long>, std::__1::equal_to<void *>, true>, std::__1::allocator<std::__1::__hash_value_type<void *, unsigned long>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<void *, unsigned long>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<void *, std::__1::__hash_value_type<void *, unsigned long>, std::__1::hash<void *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<void *, std::__1::__hash_value_type<void *, unsigned long>, std::__1::equal_to<void *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
} unordered_map_8e11cf9d;

typedef struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__value_;
    } __end_cap_;
} vector_7984f87c;

