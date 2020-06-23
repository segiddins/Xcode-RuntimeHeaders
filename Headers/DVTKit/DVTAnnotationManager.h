//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMutableArray, NSString;
@protocol DVTAnnotationManagerDelegate;

@interface DVTAnnotationManager : NSObject <DVTInvalidation>
{
    id <DVTAnnotationManagerDelegate> _delegate;
    NSMutableArray *_annotationProviders;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(retain) id <DVTAnnotationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSArray *annotationProviders; // @synthesize annotationProviders=_annotationProviders;
- (void).cxx_destruct;
- (void)_removeAllAnnotationProviders;
- (void)setupAnnotationProvidersWithContext:(id)arg1;
- (id)_installObservationBlockForAnnotationProvider:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

