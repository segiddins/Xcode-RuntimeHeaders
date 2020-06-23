//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEPlaygroundCommon.h>

#import <IDEFoundation/IDECustomDataStoring-Protocol.h>

@class DVTNotificationToken, IDEDirectoryBasedCustomDataStore, IDEPlaygroundSharedContext, NSString;

@interface IDEPlayground : IDEPlaygroundCommon <IDECustomDataStoring>
{
    DVTNotificationToken *_customDataStoreWillCloseNotificationToken;
    IDEPlaygroundSharedContext *_playgroundContext;
    IDEDirectoryBasedCustomDataStore *_customDataStore;
}

+ (BOOL)isSourcesDirectorySubPath:(id)arg1;
+ (id)containerTypeDisplayName;
+ (id)containerFileDataType;
@property(retain, nonatomic) IDEDirectoryBasedCustomDataStore *customDataStore; // @synthesize customDataStore=_customDataStore;
@property(retain, nonatomic) IDEPlaygroundSharedContext *playgroundContext; // @synthesize playgroundContext=_playgroundContext;
- (void).cxx_destruct;
- (void)_removePlaygroundDirectoriesObservation;
- (void)_addPlaygroundDirectoriesObservation;
- (void)_customDataStoreContainerClosing:(id)arg1;
- (BOOL)supportsCustomDataForOwnership:(id)arg1;
- (void)moveCustomDataWithSpecifier:(id)arg1 toSpecifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeCustomDataWithSpecifier:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeCustomData:(id)arg1 withSpecifier:(id)arg2 forceOverwrite:(BOOL)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)readCustomDataWithSpecifier:(id)arg1 error:(id *)arg2;
- (id)customDataOwnershipsForGrouping:(id)arg1;
- (id)customDataSpecifiersForGrouping:(id)arg1 ownership:(id)arg2;
- (void)addSpecifier:(id)arg1 inWorkspace:(id)arg2 toSCMWithCompletionBlock:(CDUnknownBlockType)arg3;
- (void)scmStatusForSpecifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)computedChildItemSubpathsFixed;
- (id)computedChildItemSubpathsEditable;
- (id)context;
- (void)_didChangeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)_willChangeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (id)createRootGroup;
- (void)primitiveInvalidate;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 options:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

