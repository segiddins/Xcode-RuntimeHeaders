//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSError;
@protocol DNTDisplayTreeIndexDelegate, _TtP23DNTDocumentationSupport26AvailabilityIndexQueryable_;

@interface DNTDisplayNavigatorIndex : NSObject
{
    MISSING_TYPE *navigatorIndex;
    MISSING_TYPE *path;
    MISSING_TYPE *delegate;
    MISSING_TYPE *loadingError;
    MISSING_TYPE *isFinishedLoading;
    MISSING_TYPE *availabilityIndex;
}

- (void).cxx_destruct;
- (id)init;
- (id)stateFor:(id)arg1;
- (id)initWithPath:(id)arg1 delegate:(id)arg2 availabilityIndex:(id)arg3 error:(id *)arg4;
@property(nonatomic, retain) id <_TtP23DNTDocumentationSupport26AvailabilityIndexQueryable_> availabilityIndex; // @synthesize availabilityIndex;
@property(nonatomic) BOOL isFinishedLoading; // @synthesize isFinishedLoading;
@property(nonatomic, copy) NSError *loadingError;
@property(nonatomic, retain) id <DNTDisplayTreeIndexDelegate> delegate; // @synthesize delegate;

@end
