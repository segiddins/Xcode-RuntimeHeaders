//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, NSString;

@interface DVTNotificationRecord : NSObject
{
    BOOL _wasWildcardObservee;
    id _observee;
    NSString *_name;
    DVTStackBacktrace *_backtrace;
}

@property(readonly) DVTStackBacktrace *backtrace; // @synthesize backtrace=_backtrace;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isDangling;
@property(readonly) id observee;
- (id)initWithObservee:(id)arg1 name:(id)arg2;

@end

