//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTCustomDataStoring-Protocol.h>
#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, NSString;
@protocol DVTDirectoryBasedCustomDataStoreDelegate;

@interface DVTDirectoryBasedCustomDataStore : NSObject <DVTCustomDataStoring, DVTInvalidation>
{
    DVTFilePath *_rootDirectoryPath;
    DVTFilePath *_customDataPath;
    DVTFilePath *_sharedDataPath;
    NSString *_perUserSubfolderName;
    NSString *_sharedSubfolderName;
    id <DVTDirectoryBasedCustomDataStoreDelegate> _delegate;
    BOOL _mayCreateRootDirectoryIfNeeded;
    BOOL _supportsCurrentUserOnly;
    BOOL _delegateUnlocks;
    BOOL _delegateWrites;
    BOOL _delegateRemoves;
    BOOL _delegateMoves;
}

+ (void)initialize;
+ (id)customDataStoreWithRootDirectoryPath:(id)arg1 perUserSubfolderName:(id)arg2 sharedSubfolderName:(id)arg3 supportCurrentUserOnly:(BOOL)arg4;
@property BOOL mayCreateRootDirectoryIfNeeded; // @synthesize mayCreateRootDirectoryIfNeeded=_mayCreateRootDirectoryIfNeeded;
@property(readonly) NSString *sharedSubfolderName; // @synthesize sharedSubfolderName=_sharedSubfolderName;
@property(readonly) NSString *perUserSubfolderName; // @synthesize perUserSubfolderName=_perUserSubfolderName;
@property(readonly) BOOL supportsCurrentUserOnly; // @synthesize supportsCurrentUserOnly=_supportsCurrentUserOnly;
@property(retain) DVTFilePath *rootDirectoryPath; // @synthesize rootDirectoryPath=_rootDirectoryPath;
- (void).cxx_destruct;
@property(readonly) NSString *displayName;
- (BOOL)supportsCustomDataForOwnership:(id)arg1;
- (void)moveCustomDataWithSpecifier:(id)arg1 toSpecifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeCustomDataWithSpecifier:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeCustomData:(id)arg1 withSpecifier:(id)arg2 forceOverwrite:(BOOL)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)readCustomDataWithSpecifier:(id)arg1 error:(id *)arg2;
- (id)customDataOwnershipsForGrouping:(id)arg1;
- (id)customDataSpecifiersForGrouping:(id)arg1 ownership:(id)arg2;
- (BOOL)_specifierPathExistsAndIsValid:(id)arg1;
- (BOOL)_specifierNameIsValid:(id)arg1;
- (id)dataFilePathForSpecifier:(id)arg1;
- (id)_dataFolderPathForOwnership:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) DVTFilePath *sharedDataPath; // @synthesize sharedDataPath=_sharedDataPath;
@property(readonly) DVTFilePath *customDataPath; // @synthesize customDataPath=_customDataPath;
- (void)setUnlockingDelegate:(id)arg1;
@property(retain) id <DVTDirectoryBasedCustomDataStoreDelegate> delegate;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

