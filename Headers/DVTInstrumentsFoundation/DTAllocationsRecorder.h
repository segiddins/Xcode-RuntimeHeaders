//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DTAllocationsRecorder : NSObject
{
    struct DTXSharedMemory *_shmem;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_serialEventQueue;
    CDStruct_6c9135d0 *_partialEvent;
    CDStruct_6c9135d0 *_fullEvent;
    unsigned int _partialSize;
    unsigned int _partialFilled;
    int _eventTotal;
    unsigned long long _bytesTotal;
    _Atomic unsigned long long _outstandingBytes;
    unsigned int _targetTask;
    int _stopCollection;
    struct map<unsigned long long, std::__1::map<unsigned int, OAKeyFrame *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OAKeyFrame *>>>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::map<unsigned int, OAKeyFrame *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, OAKeyFrame *>>>>>> _threadToKeyFramesMap;
    BOOL _readStackLogsUponAttach;
    unsigned int _sharedMemorySize;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _bufferHandler;
}

+ (BOOL)configureLocalLaunchEnvironment:(id)arg1 recordedEventsMask:(unsigned int)arg2;
+ (long long)currentVersion;
+ (id)serviceIdentifier;
+ (unsigned int)cppClassNamesMask;
+ (unsigned int)zombieEventsMask;
+ (unsigned int)mallocReallocFreeEventsMask;
+ (unsigned int)retainReleaseAutoEventsMask;
+ (unsigned int)vmEventsMask;
+ (unsigned int)allEventsMask;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned int sharedMemorySize; // @synthesize sharedMemorySize=_sharedMemorySize;
@property(nonatomic) BOOL readStackLogsUponAttach; // @synthesize readStackLogsUponAttach=_readStackLogsUponAttach;
@property(copy, nonatomic) CDUnknownBlockType bufferHandler; // @synthesize bufferHandler=_bufferHandler;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)_processIncomingData;
@property(readonly) int eventCount;
- (void)_endAndTossResources:(BOOL)arg1;
- (void)cancel;
- (void)stop;
- (void)processBufferMessage:(id)arg1;
- (void)createFullEventFromDelta:(CDStruct_6c9135d0 *)arg1 withEvent:(CDStruct_6c9135d0 *)arg2;
- (void)addKeyFrame:(CDStruct_6c9135d0 *)arg1;
- (BOOL)_startWithError:(id *)arg1;
- (BOOL)startForProcessingBuffersWithError:(id *)arg1;
- (BOOL)startWithLaunchedTask:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)startAttachingToRunningTask:(unsigned int)arg1 recordedEventsMask:(unsigned int)arg2 error:(id *)arg3;
- (unsigned long long)_setupSharedMemoryInTask:(unsigned int)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

