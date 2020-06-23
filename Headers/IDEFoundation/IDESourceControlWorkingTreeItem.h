//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESourceControlTreeItem.h>

@class DVTFilePath;

@interface IDESourceControlWorkingTreeItem : IDESourceControlTreeItem
{
    DVTFilePath *_filePath;
    BOOL _edited;
}

+ (BOOL)automaticallyNotifiesObserversOfConflictStateForUpdateOrMerge;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlServerStatus;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlLocalStatus;
@property BOOL edited; // @synthesize edited=_edited;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)currentRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setConflictStateForUpdateOrMerge:(unsigned long long)arg1;
- (void)setSourceControlServerStatus:(unsigned long long)arg1;
- (void)setSourceControlLocalStatus:(unsigned long long)arg1;
- (id)ideModelObjectTypeIdentifier;
- (id)repositoryURLString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)primitiveInvalidate;
- (id)initWithFilePath:(id)arg1;

@end

