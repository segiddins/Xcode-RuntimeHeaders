//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlOperationInfo.h>

@class NSArray;

@interface IDESourceControlCreateLocalGitRepositoriesOperationInfo : IDESourceControlOperationInfo
{
    NSArray *_repositoryRoots;
}

@property(retain) NSArray *repositoryRoots; // @synthesize repositoryRoots=_repositoryRoots;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)processInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

