//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol IDETestReport_TestActivity <NSObject>
@property(readonly, nonatomic) BOOL ide_testReport_testActivity_containsFailure;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testActivity_subactivities;
@property(readonly, copy, nonatomic) id ide_testReport_testActivity_screenshot;
@property(readonly, copy, nonatomic) NSDate *ide_testReport_testActivity_finishTime;
@property(readonly, copy, nonatomic) NSDate *ide_testReport_testActivity_startTime;
@property(readonly, nonatomic) double ide_testReport_testActivity_duration;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testActivity_UUID;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testActivity_title;
@end

