//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPerformanceStatistic : NSObject
{
    NSString *_name;
    CDUnknownBlockType _checkpointBlock;
    CDUnknownBlockType _logBlock;
}

+ (void)freezePerformanceStatisticRegistration;
+ (id)allStatistics;
+ (id)registerStatisticWithName:(id)arg1 checkpointBlock:(CDUnknownBlockType)arg2 logBlock:(CDUnknownBlockType)arg3;
+ (void)initialize;
@property(readonly, copy) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
@property(readonly, copy) CDUnknownBlockType checkpointBlock; // @synthesize checkpointBlock=_checkpointBlock;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 checkpointBlock:(CDUnknownBlockType)arg2 logBlock:(CDUnknownBlockType)arg3;

@end

