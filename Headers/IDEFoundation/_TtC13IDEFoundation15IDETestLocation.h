//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTTextDocumentLocation, IDETestIdentifier, NSArray, NSString;

@interface _TtC13IDEFoundation15IDETestLocation : NSObject
{
    // Error parsing type: , name: testIdentifier
    // Error parsing type: , name: location
    // Error parsing type: , name: tests
    // Error parsing type: , name: compositeState
    // Error parsing type: , name: testsHaveDifferingTargets
    // Error parsing type: , name: testsHaveDifferingClasses
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) _TtC13IDEFoundation15IDETestLocation *inheritedTestLocation;
@property(nonatomic, readonly) BOOL canHaveSubtests;
- (id)initWithTestIdentifier:(id)arg1 location:(id)arg2 tests:(id)arg3 compositeState:(unsigned long long)arg4;
@property(nonatomic, readonly) BOOL testsHaveDifferingClasses; // @synthesize testsHaveDifferingClasses;
@property(nonatomic, readonly) BOOL testsHaveDifferingTargets; // @synthesize testsHaveDifferingTargets;
@property(nonatomic, readonly) unsigned long long compositeState; // @synthesize compositeState;
@property(nonatomic, readonly) NSArray *tests;
@property(nonatomic, readonly) DVTTextDocumentLocation *location; // @synthesize location;
@property(nonatomic, readonly) IDETestIdentifier *testIdentifier; // @synthesize testIdentifier;

@end

