//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceControl/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSUUID;

@protocol DVTSourceControlPlugInCallbackProtocol <NSObject>
- (void)incrementalLogStatus:(NSArray *)arg1 info:(NSDictionary *)arg2 progressIdentifier:(NSUUID *)arg3;
- (void)progressStatus:(long long)arg1 info:(NSDictionary *)arg2 progressIdentifier:(NSUUID *)arg3;
@end

