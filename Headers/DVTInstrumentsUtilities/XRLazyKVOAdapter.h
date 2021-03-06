//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, _XRLazyKVOBlockToken;
@protocol XRLazyKVOResponder;

@interface XRLazyKVOAdapter : NSObject
{
    NSMapTable *_keyPathsByContextByClz;
    NSMapTable *_keyPathsByContextByObj;
    struct unordered_set<const void *, std::__1::hash<const void *>, std::__1::equal_to<const void *>, std::__1::allocator<const void *>> _updatedContexts;
    struct unordered_set<const void *, std::__1::hash<const void *>, std::__1::equal_to<const void *>, std::__1::allocator<const void *>> _presentedContexts;
    id <XRLazyKVOResponder> _responder;
    BOOL _implementsWillChangeHandler;
    BOOL _suspended;
    NSArray *_runLoopModes;
    _XRLazyKVOBlockToken *_strongBlockAdapterToken;
}

+ (id)observeKeyPathArray:(id)arg1 object:(id)arg2 observer:(id)arg3 lazyUpdateBlock:(CDUnknownBlockType)arg4;
+ (id)observeKeyPath:(id)arg1 object:(id)arg2 observer:(id)arg3 lazyUpdateBlock:(CDUnknownBlockType)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) _XRLazyKVOBlockToken *strongBlockAdapterToken; // @synthesize strongBlockAdapterToken=_strongBlockAdapterToken;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(copy, nonatomic) NSArray *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_callbackHandler;
- (BOOL)hasContextChanged:(const void *)arg1;
- (void)removeObservationsForObject:(id)arg1;
- (void)observeObject:(id)arg1;
- (void)fireCallbackContext:(const void *)arg1 whenKeypaths:(id)arg2 changeOnClass:(Class)arg3;
- (void)dealloc;
- (void)clear;
- (id)initWithLazyKVOResponder:(id)arg1;
- (id)init;

@end

