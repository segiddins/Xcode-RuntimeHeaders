//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTCompoundFilterExpression, NSSet;

@protocol DVTFilterSession
@property(readonly) DVTCompoundFilterExpression *filterExpression;
@property long long filterProgress;
@property(readonly) BOOL isCancelled;
- (void)setMatches:(NSSet *)arg1;
@end

