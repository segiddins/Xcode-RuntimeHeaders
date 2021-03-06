//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTAnalytics/NSObject-Protocol.h>

@class NSString;

@protocol DVTAnalyticsLogStackFrameProtocol <NSObject>
@property(nonatomic, readonly) NSString *instructionPointerAddressString;
@property(nonatomic, readonly) unsigned long long sourceLine;
@property(nonatomic, readonly) NSString *sourceFile;
@property(nonatomic, readonly) unsigned long long stackFrameOffset;
@property(nonatomic, readonly) NSString *symbol;
@property(nonatomic, readonly) NSString *image;
@end

