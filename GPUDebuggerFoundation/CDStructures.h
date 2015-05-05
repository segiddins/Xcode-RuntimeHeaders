//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

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

struct DYShaderProfilerTiming {
    struct Statistics _field1;
    struct Statistics _field2;
    struct Statistics _field3;
};

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

struct GPUMessageTraceActivity {
    double _startTime;
    double _endTime;
    char _inProgress;
};

struct IFunctionDecoder;

struct Statistics {
    double _field1;
    double _field2;
    double _field3;
};

struct TFunctionStream<GPUTools::FD::Function, void>;

struct _Iterator<GPUTools::FD::Function> {
    struct Function _function;
    void *_encbuf;
    void *_next;
    void *_end;
    struct IFunctionDecoder *_decoder;
    _Bool _fast_size;
};

struct __shared_weak_count;

struct shared_ptr<GPUTools::FD::Function> {
    struct Function *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<GPUTools::FD::TFunctionStream<GPUTools::FD::Function, void>> {
    struct TFunctionStream<GPUTools::FD::Function, void> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct shared_ptr<GPUTools::FD::Function> {
    struct Function *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_2d3f6817;

