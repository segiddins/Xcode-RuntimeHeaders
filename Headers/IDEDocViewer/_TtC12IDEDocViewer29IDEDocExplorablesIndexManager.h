//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s23DNTDocumentationSupport23DisplayTreeIndexManagerCN.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12IDEDocViewer29IDEDocExplorablesIndexManager : _$s23DNTDocumentationSupport23DisplayTreeIndexManagerCN
{
    MISSING_TYPE *state;
    MISSING_TYPE *$__lazy_storage_$_relinquishmentDelayedInvocation;
    MISSING_TYPE *owners;
    MISSING_TYPE *$__lazy_storage_$_userStoragePath;
}

+ (void)setShared:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (void)indexFailedLoadingWithError:(id)arg1;
- (void)indexDidFinishLoading;
- (void)removeOwner:(id)arg1;
- (void)addOwner:(id)arg1;

@end

