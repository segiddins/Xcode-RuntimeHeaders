//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/DVTCustomDataStoring-Protocol.h>

@class DVTCustomDataSpecifier, IDEWorkspace;

@protocol IDECustomDataStoring <DVTCustomDataStoring>
- (void)addSpecifier:(DVTCustomDataSpecifier *)arg1 inWorkspace:(IDEWorkspace *)arg2 toSCMWithCompletionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)scmStatusForSpecifier:(DVTCustomDataSpecifier *)arg1 completionBlock:(void (^)(int, NSError *))arg2;
@end

