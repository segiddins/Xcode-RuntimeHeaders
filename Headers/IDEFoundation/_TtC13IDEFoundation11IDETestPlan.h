//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDETestPlanOptions, NSArray;

@interface _TtC13IDEFoundation11IDETestPlan : NSObject
{
    // Error parsing type: , name: version
    // Error parsing type: , name: testableReferences
    // Error parsing type: , name: defaultOptions
    // Error parsing type: , name: configurations
    // Error parsing type: , name: isDerivedFromScheme
    // Error parsing type: , name: jsonMerger
}

+ (id)modifiedNotificationTestPlanCopierKey;
+ (id)modifiedNotificationFilePathKey;
+ (id)modifiedNotification;
- (void).cxx_destruct;
- (BOOL)isTestingEnabledForTestContainer:(id)arg1;
@property(nonatomic, readonly) NSArray *enabledTestingSpecifierGroups;
- (id)addConfigurationWithName:(id)arg1;
- (id)addTestableReferenceWithTestable:(id)arg1 inScheme:(id)arg2;
- (void)addTestableReference:(id)arg1;
- (void)configureDefaultOptionsUsingTestSchemeAction:(id)arg1;
- (id)init;
@property(nonatomic) BOOL isDerivedFromScheme; // @synthesize isDerivedFromScheme;
@property(nonatomic, copy) NSArray *configurations;
@property(nonatomic, readonly) IDETestPlanOptions *defaultOptions; // @synthesize defaultOptions;
@property(nonatomic, copy) NSArray *testableReferences;

@end

