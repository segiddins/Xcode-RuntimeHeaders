//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface GPUSharedUIStateManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_sharedStateMapTable;
}

+ (id)sharedUIStateManager;
- (void).cxx_destruct;
- (void)invalidateSharedStateForObject:(id)arg1;
- (id)sharedStateForWorkspace:(id)arg1;
- (id)sharedStateForWorkspaceTabController:(id)arg1 allowCreate:(BOOL)arg2;
- (id)sharedStateForInferiorSession:(id)arg1;
- (id)sharedStateForObject:(id)arg1;
- (id)transferSharedStateForObject:(id)arg1 toObj:(id)arg2;
- (id)_init;
- (id)init;

@end

