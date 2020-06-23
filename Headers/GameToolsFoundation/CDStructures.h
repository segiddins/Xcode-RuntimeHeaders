//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FSEventStreamContext {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
};

struct MappingPair {
    id from;
    id to;
};

struct NSMutableDictionary {
    Class _field1;
};

struct SCNVector4 {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct deque<NSMutableArray *, std::__1::allocator<NSMutableArray *>> {
    struct __split_buffer<NSMutableArray *__strong *, std::__1::allocator<NSMutableArray *__strong *>> {
        id **__first_;
        id **__begin_;
        id **__end_;
        struct __compressed_pair<NSMutableArray *__strong **, std::__1::allocator<NSMutableArray *__strong *>> {
            id **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<NSMutableArray *>> {
        unsigned long long __value_;
    } __size_;
};

struct map<int, NSMutableArray *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, NSMutableArray *>>> {
    struct __tree<std::__1::__value_type<int, NSMutableArray *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSMutableArray *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSMutableArray *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, NSMutableArray *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSMutableArray *>, std::__1::less<int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct stack<NSMutableArray *, std::__1::deque<NSMutableArray *, std::__1::allocator<NSMutableArray *>>> {
    struct deque<NSMutableArray *, std::__1::allocator<NSMutableArray *>> c;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

