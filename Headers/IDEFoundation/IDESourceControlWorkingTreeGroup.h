//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESourceControlTreeGroup.h>

@class DVTFilePath;

@interface IDESourceControlWorkingTreeGroup : IDESourceControlTreeGroup
{
    DVTFilePath *_filePath;
    BOOL _edited;
}

+ (BOOL)automaticallyNotifiesObserversOfConflictStateForUpdateOrMerge;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlServerStatus;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlLocalStatus;
- (void).cxx_destruct;
@property BOOL edited; // @synthesize edited=_edited;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (unsigned long long)aggregateSourceControlServerStatus;
- (unsigned long long)aggregateSourceControlLocalStatus;
- (void)setConflictStateForUpdateOrMerge:(unsigned long long)arg1;
- (void)setSourceControlServerStatus:(unsigned long long)arg1;
- (void)setSourceControlLocalStatus:(unsigned long long)arg1;
- (id)currentRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)ideModelObjectTypeIdentifier;
- (void)repositoryURLStringAtBranch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)repositoryURLString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)primitiveInvalidate;
- (id)initWithFilePath:(id)arg1;

@end

