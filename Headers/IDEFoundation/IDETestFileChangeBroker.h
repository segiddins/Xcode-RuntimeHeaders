//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDETestsInTestableObserver-Protocol.h>

@class DVTStackBacktrace, IDETestManager, NSMutableSet, NSString, NSURL;

@interface IDETestFileChangeBroker : NSObject <IDETestsInTestableObserver, DVTInvalidation>
{
    IDETestManager *_testManager;
    NSURL *_url;
    NSMutableSet *_fileObservers;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)notifyAllTestablesChanged;
- (void)_notifyObserversTestsInFileUpdated;
- (void)allTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;
- (void)updateObservation;
- (void)removeTestFileObserver:(id)arg1;
- (void)addTestFileObserver:(id)arg1;
- (BOOL)hasObservers;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initWithURL:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

