//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSFileHandle, NSMapTable, NSMutableDictionary, NSString;
@protocol DNTDisplayTreeIndexDelegate, _TtP23DNTDocumentationSupport26AvailabilityIndexQueryable_;

@interface DNTDisplayTreeIndex : NSObject
{
    NSString *_path;
    NSFileHandle *_fileHandle;
    NSMutableDictionary *_indexItemToState;
    NSMapTable *_indexItemPointerToSerialID;
    NSMapTable *_serialIDToIndexItem;
    unsigned int _nextSerialID;
    struct os_unfair_lock_s _lock;
    BOOL _finishedLoading;
    id <DNTDisplayTreeIndexDelegate> _delegate;
    NSError *_loadingError;
    id <_TtP23DNTDocumentationSupport26AvailabilityIndexQueryable_> _availabilityIndex;
}

+ (BOOL)_encodeBitsForIndexItem:(id)arg1 into:(id)arg2 parentSerialIDGenerator:(CDUnknownBlockType)arg3 error:(id *)arg4;
+ (id)_readNonReferenceIndexItemBitsAtCursor:(CDStruct_5d0aafc2 *)arg1 delegate:(id)arg2 parentGenerator:(CDUnknownBlockType)arg3 error:(id *)arg4;
+ (id)indexItemFromData:(id)arg1 delegate:(id)arg2 parent:(id)arg3 error:(id *)arg4;
+ (id)dataWithDanglingParentReferenceForIndexItem:(id)arg1 error:(id *)arg2;
@property(retain) id <_TtP23DNTDocumentationSupport26AvailabilityIndexQueryable_> availabilityIndex; // @synthesize availabilityIndex=_availabilityIndex;
@property(retain) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(getter=isFinishedLoading) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property(readonly, nonatomic) id <DNTDisplayTreeIndexDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)_encodeState:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (BOOL)_encodeIndexItem:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (id)encodeIndexItem:(id)arg1 state:(id)arg2 error:(id *)arg3;
- (BOOL)_getSerialID:(unsigned int *)arg1 forIndexItem:(id)arg2;
- (id)_readStateAtCursor:(CDStruct_5d0aafc2 *)arg1 indexItem:(id)arg2 error:(id *)arg3;
- (void)_noteIndexItem:(id)arg1 state:(id)arg2;
- (id)_indexItemWithSerialID:(unsigned int)arg1 error:(id *)arg2;
- (id)_readIndexItemAtCursor:(CDStruct_5d0aafc2 *)arg1 error:(id *)arg2;
- (BOOL)_readChunkAtCursor:(CDStruct_5d0aafc2 *)arg1 error:(id *)arg2;
- (id)stateForIndexItem:(id)arg1;
- (id)indexItems;
- (void)recordState:(id)arg1 forIndexItem:(id)arg2;
- (id)_fileHandleForPath:(id)arg1;
- (BOOL)_readChunksAtCursor:(CDStruct_5d0aafc2 *)arg1 deadline:(id)arg2 error:(id *)arg3;
- (BOOL)_startLoadingData:(id)arg1 error:(id *)arg2;
- (BOOL)_load:(id *)arg1;
- (id)initWithPath:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithPath:(id)arg1 delegate:(id)arg2 availabilityIndex:(id)arg3 error:(id *)arg4;
- (BOOL)_createAtPath:(id)arg1 error:(id *)arg2;
- (id)initForCreationAtPath:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithPath:(id)arg1 delegate:(id)arg2 availabilityIndex:(id)arg3;

@end

