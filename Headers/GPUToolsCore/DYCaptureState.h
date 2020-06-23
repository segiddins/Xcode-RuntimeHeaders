//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYCaptureState : NSObject
{
    unsigned long long _capturedFrames;
    BOOL _allDataReceivedAck;
    unordered_map_6fbc8a65 _dispatchQueueLabelMap;
    unordered_map_683df94f _threadLabelMap;
}

@property(readonly, nonatomic) unordered_map_683df94f threadLabelMap; // @synthesize threadLabelMap=_threadLabelMap;
@property(readonly, nonatomic) unordered_map_6fbc8a65 dispatchQueueLabelMap; // @synthesize dispatchQueueLabelMap=_dispatchQueueLabelMap;
@property(nonatomic) BOOL allDataReceivedAck; // @synthesize allDataReceivedAck=_allDataReceivedAck;
@property(nonatomic) unsigned long long capturedFrames; // @synthesize capturedFrames=_capturedFrames;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

