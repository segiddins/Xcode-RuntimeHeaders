//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSError;

@protocol DVTPreparableDevice
@property(readonly) NSArray *developerPrepWarnings;
@property(readonly) NSArray *developerPrepErrors;
- (unsigned long long)prepErrorsAndWarningsCount;
- (void)addPrepWarning:(NSError *)arg1;
- (void)addPrepError:(NSError *)arg1;
@end

