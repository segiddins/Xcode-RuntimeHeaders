//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSOrderedSet;
@protocol IDEFlightChecking;

@protocol IDEAppIDContainerFlightCheckDelegate
- (void)flightCheckIsValidating:(id <IDEFlightChecking>)arg1;
- (NSOrderedSet *)containerIdentifiersForFlightCheck:(id <IDEFlightChecking>)arg1 error:(id *)arg2;
@end

