//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDESchemeActionTestPlanRunSummary : NSObject
{
    NSString *_name;
    NSArray *_testableSummaries;
}

+ (id)sparseTestPlanRunSummaries:(id)arg1 testIdentifiers:(id)arg2;
+ (id)sparseTestPlanRunSummary:(id)arg1 testIdentifiers:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *testableSummaries; // @synthesize testableSummaries=_testableSummaries;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 testableSummaries:(id)arg2;

@end

