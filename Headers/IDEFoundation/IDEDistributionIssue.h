//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface IDEDistributionIssue : NSObject
{
    long long _severity;
    NSError *_error;
}

+ (id)issuesFromErrors:(id)arg1 withSeverity:(long long)arg2;
+ (id)issuesFromITunesResponse:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long severity; // @synthesize severity=_severity;
- (id)description;
@property(readonly) NSString *humanReadableDescription;
- (id)initWithSeverity:(long long)arg1 error:(id)arg2;

@end

