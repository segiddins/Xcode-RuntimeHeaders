//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLComposerKit/NSObject-Protocol.h>

@class NSError;
@protocol SNRequest, SNResult;

@protocol SNResultsObserving <NSObject>
- (void)request:(id <SNRequest>)arg1 didProduceResult:(id <SNResult>)arg2;

@optional
- (void)requestDidComplete:(id <SNRequest>)arg1;
- (void)request:(id <SNRequest>)arg1 didFailWithError:(NSError *)arg2;
@end

