//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DebugHierarchyRuntimeInfo, NSMapTable;

@interface DebugHierarchyTargetHub : NSObject
{
    NSMapTable *_knownObjectsMap;
    DebugHierarchyRuntimeInfo *_runtimeInfo;
}

+ (id)performDebugRequest:(long long)arg1;
+ (id)sharedHub;
+ (float)debugHierarchyVersion;
- (void).cxx_destruct;
- (id)performRequest:(id)arg1 error:(id *)arg2;
- (id)performRequest:(id)arg1;
- (id)performRequestWithRequestInBase64:(id)arg1;
@property(readonly, nonatomic) DebugHierarchyRuntimeInfo *runtimeInfo; // @synthesize runtimeInfo=_runtimeInfo;
@property(readonly, nonatomic) NSMapTable *knownObjectsMap; // @synthesize knownObjectsMap=_knownObjectsMap;
- (void)clearAllRequestsAndData;
- (id)init;

@end

