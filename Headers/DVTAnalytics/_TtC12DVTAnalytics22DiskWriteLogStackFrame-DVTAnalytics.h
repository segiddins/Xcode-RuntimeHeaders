//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTAnalytics/_TtC12DVTAnalytics22DiskWriteLogStackFrame.h>

#import <DVTAnalytics/DVTAnalyticsLogStackFrameProtocol-Protocol.h>

@class NSString;

@interface _TtC12DVTAnalytics22DiskWriteLogStackFrame (DVTAnalytics) <DVTAnalyticsLogStackFrameProtocol>
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) NSString *instructionPointerAddressString;
@property(nonatomic, readonly) unsigned long long stackFrameOffset;
@property(nonatomic, readonly) unsigned long long sourceLine;
@property(nonatomic, readonly) NSString *sourceFile;
@property(nonatomic, readonly) NSString *symbol;
@property(nonatomic, readonly) NSString *image;
@end
