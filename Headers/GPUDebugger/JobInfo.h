//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DYContinuation, NSString;

__attribute__((visibility("hidden")))
@interface JobInfo : NSObject
{
    NSString *_jobId;
    DYContinuation *_job;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DYContinuation *job; // @synthesize job=_job;
@property(readonly, nonatomic) NSString *jobId; // @synthesize jobId=_jobId;
- (id)initWithId:(id)arg1 job:(id)arg2;
- (id)init;

@end
