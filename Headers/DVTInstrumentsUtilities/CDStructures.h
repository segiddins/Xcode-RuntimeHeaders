//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ActivityManager;

struct Commutator {
    struct _opaque_pthread_t *_field1;
    struct _opaque_pthread_cond_t _field2;
    struct _opaque_pthread_mutex_t _field3;
    int _field4;
    unsigned char _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    long long _field8;
    int _field9;
    struct timeval _field10;
    unsigned char _field11;
    struct vector<std::__1::shared_ptr<xray::scheduler::Ring>, std::__1::allocator<std::__1::shared_ptr<xray::scheduler::Ring>>> _field12;
    struct vector<std::__1::shared_ptr<xray::scheduler::Ring>, std::__1::allocator<std::__1::shared_ptr<xray::scheduler::Ring>>> _field13;
    struct vector<std::__1::shared_ptr<xray::scheduler::Ring>, std::__1::allocator<std::__1::shared_ptr<xray::scheduler::Ring>>> _field14;
    _Bool _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    long long _field18[30];
    long long _field19;
    long long _field20;
};

struct RangeImp<unsigned long long> {
    unsigned long long first;
    unsigned long long last;
};

struct Ring;

struct XRIndexSetImpl<unsigned long long, 4, std::__1::allocator<xray::internal::RangeImp<unsigned long long>>> {
    struct multiset<xray::internal::RangeImp<unsigned long long>, std::__1::less<xray::internal::RangeImp<unsigned long long>>, std::__1::allocator<xray::internal::RangeImp<unsigned long long>>> _ranges;
    struct array<xray::internal::RangeImp<unsigned long long>, 4> _cache;
    _Bool _cacheIsValid;
};

struct XRTimeRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _XRIndexRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __hash_node_base<std::__1::__hash_node<const void *, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<const void *, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*> *__next_;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_cond_t {
    long long __sig;
    char __opaque[40];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _xmlError {
    int _field1;
    int _field2;
    char *_field3;
    int _field4;
    char *_field5;
    int _field6;
    char *_field7;
    char *_field8;
    char *_field9;
    int _field10;
    int _field11;
    void *_field12;
    void *_field13;
};

struct array<xray::internal::RangeImp<unsigned long long>, 4> {
    struct RangeImp<unsigned long long> __elems_[4];
};

struct multiset<xray::internal::RangeImp<unsigned long long>, std::__1::less<xray::internal::RangeImp<unsigned long long>>, std::__1::allocator<xray::internal::RangeImp<unsigned long long>>> {
    struct __tree<xray::internal::RangeImp<unsigned long long>, std::__1::less<xray::internal::RangeImp<unsigned long long>>, std::__1::allocator<xray::internal::RangeImp<unsigned long long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<xray::internal::RangeImp<unsigned long long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::less<xray::internal::RangeImp<unsigned long long>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct shared_ptr<xray::scheduler::ActivityManager> {
    struct ActivityManager *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<xray::scheduler::Ring> {
    struct Ring *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct timeval {
    long long _field1;
    int _field2;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<const void *, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<xray::scheduler::Commutator, std::__1::default_delete<xray::scheduler::Commutator>> {
    struct __compressed_pair<xray::scheduler::Commutator *, std::__1::default_delete<xray::scheduler::Commutator>> {
        struct Commutator *__value_;
    } __ptr_;
};

struct unordered_map<unsigned long long, id, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, id>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, id>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, id>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::equal_to<unsigned long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<const void *, std::__1::hash<const void *>, std::__1::equal_to<const void *>, std::__1::allocator<const void *>> {
    struct __hash_table<const void *, std::__1::hash<const void *>, std::__1::equal_to<const void *>, std::__1::allocator<const void *>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>, std::__1::allocator<std::__1::__hash_node<const void *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<const void *, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<const void *>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<const void *>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<std::__1::shared_ptr<xray::scheduler::Ring>, std::__1::allocator<std::__1::shared_ptr<xray::scheduler::Ring>>> {
    shared_ptr_1de32825 *_field1;
    shared_ptr_1de32825 *_field2;
    struct __compressed_pair<std::__1::shared_ptr<xray::scheduler::Ring>*, std::__1::allocator<std::__1::shared_ptr<xray::scheduler::Ring>>> {
        shared_ptr_1de32825 *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct shared_ptr<xray::scheduler::ActivityManager> {
    struct ActivityManager *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_5180c3d3;

typedef struct shared_ptr<xray::scheduler::Ring> {
    struct Ring *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_1de32825;

