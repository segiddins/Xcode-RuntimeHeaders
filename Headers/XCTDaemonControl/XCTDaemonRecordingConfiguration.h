//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface XCTDaemonRecordingConfiguration : NSObject
{
    NSArray *_applicationSnapshotAttributes;
    NSDictionary *_applicationSnapshotParameters;
    NSArray *_elementSnapshotAttributes;
    NSDictionary *_elementSnapshotParameters;
    NSArray *_simpleTargetGestureNames;
}

@property(readonly) NSArray *simpleTargetGestureNames; // @synthesize simpleTargetGestureNames=_simpleTargetGestureNames;
@property(readonly) NSDictionary *elementSnapshotParameters; // @synthesize elementSnapshotParameters=_elementSnapshotParameters;
@property(readonly) NSArray *elementSnapshotAttributes; // @synthesize elementSnapshotAttributes=_elementSnapshotAttributes;
@property(readonly) NSDictionary *applicationSnapshotParameters; // @synthesize applicationSnapshotParameters=_applicationSnapshotParameters;
@property(readonly) NSArray *applicationSnapshotAttributes; // @synthesize applicationSnapshotAttributes=_applicationSnapshotAttributes;
- (void).cxx_destruct;
- (id)initWithApplicationSnapshotAttributes:(id)arg1 applicationSnapshotParameters:(id)arg2 elementSnapshotAttributes:(id)arg3 elementSnapshotParameters:(id)arg4 simpleTargetGestureNames:(id)arg5;

@end

