//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface DVTSourceControlGitXPCCallbackDelegate : NSObject
{
    MISSING_TYPE *client;
}

- (void).cxx_destruct;
- (id)init;
- (void)setAuthenticationStrategy:(id)arg1 repository:(id)arg2;
- (void)progressStatus:(long long)arg1 info:(id)arg2 progressIdentifier:(id)arg3;
- (void)incrementalLogStatus:(id)arg1 info:(id)arg2 progressIdentifier:(id)arg3;

@end

