//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestableDataSourceToken-Protocol.h>

@class DVTStackBacktrace, IDETestableDataSource, NSString;

@interface IDETestableDataSourceToken : NSObject <IDETestableDataSourceToken>
{
    IDETestableDataSource *_dataSource;
    NSString *_indexableIdentifier;
    CDUnknownBlockType _callbackBlock;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)search;
- (void)primitiveInvalidate;
- (void)_clearDataSource;
- (void)_setTestIdentifiersToTests:(id)arg1;
- (id)initWithDataSource:(id)arg1 indexableIdentifier:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
