//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDETestNavigatorFilterProducer-Protocol.h>

@class IDETestManager, NSString;
@protocol IDETestNavigatorFilterConsumer;

@interface IDETestNavigatorFilterManager : NSObject <IDETestNavigatorFilterProducer>
{
    BOOL _shouldIncludeFailingTests;
    BOOL _shouldIncludeSkippedTests;
    NSString *_testNamePatternString;
    id <IDETestNavigatorFilterConsumer> _filterConsumer;
    IDETestManager *_testManager;
}

- (void).cxx_destruct;
@property(readonly) IDETestManager *testManager; // @synthesize testManager=_testManager;
@property __weak id <IDETestNavigatorFilterConsumer> filterConsumer; // @synthesize filterConsumer=_filterConsumer;
@property(retain, nonatomic) NSString *testNamePatternString; // @synthesize testNamePatternString=_testNamePatternString;
@property(nonatomic) BOOL shouldIncludeSkippedTests; // @synthesize shouldIncludeSkippedTests=_shouldIncludeSkippedTests;
@property(nonatomic) BOOL shouldIncludeFailingTests; // @synthesize shouldIncludeFailingTests=_shouldIncludeFailingTests;
- (id)representedObjectPredicate;
- (id)testStatusFilter;
- (id)initWithTestManager:(id)arg1 filterConsumer:(id)arg2;

@end

