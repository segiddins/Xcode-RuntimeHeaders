//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC18IDESourceControlUI28SourceControlWorkspaceHolder : NSObject
{
    MISSING_TYPE *workspace;
    MISSING_TYPE *sourceControlWorkspace;
    MISSING_TYPE *notificationToken;
    MISSING_TYPE *workingCopiesObservingToken;
    MISSING_TYPE *sourceControlEnabledObservingToken;
    MISSING_TYPE *loadingWorkingCopyHolders;
    MISSING_TYPE *showingManagedPlaceholder;
    MISSING_TYPE *childItems;
}

- (void).cxx_destruct;
- (id)init;
- (void)primitiveInvalidate;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, copy) NSArray *childItems;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, readonly) NSString *navigableItem_name;

@end
