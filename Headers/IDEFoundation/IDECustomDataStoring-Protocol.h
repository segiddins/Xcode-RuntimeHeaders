//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/DVTCustomDataStoring-Protocol.h>

@class DVTCustomDataSpecifier, IDEWorkspace;

@protocol IDECustomDataStoring <DVTCustomDataStoring>
- (void)addSpecifier:(DVTCustomDataSpecifier *)arg1 inWorkspace:(IDEWorkspace *)arg2 toSCMWithCompletionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)scmStatusForSpecifier:(DVTCustomDataSpecifier *)arg1 completionBlock:(void (^)(unsigned long long, NSError *))arg2;
@end

