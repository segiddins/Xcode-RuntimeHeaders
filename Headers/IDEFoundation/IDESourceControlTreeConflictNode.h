//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceControlTreeNode.h>

@interface IDESourceControlTreeConflictNode : IDESourceControlTreeNode
{
    unsigned long long _conflictStateForUpdateOrMerge;
}

@property(nonatomic) unsigned long long conflictStateForUpdateOrMerge; // @synthesize conflictStateForUpdateOrMerge=_conflictStateForUpdateOrMerge;
- (id)initWithFilePath:(id)arg1 basePath:(id)arg2 sourceControlLocalStatus:(unsigned long long)arg3 sourceControlServerStatus:(unsigned long long)arg4;

@end

