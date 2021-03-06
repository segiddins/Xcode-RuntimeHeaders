//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSURL;
@protocol OS_os_log;

@interface XRXMLProblemReportingContext : NSObject
{
    BOOL _passed;
    NSFileHandle *_errorFile;
    NSObject<OS_os_log> *_log;
    NSURL *_urlBeingParsed;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL passed; // @synthesize passed=_passed;
@property(copy, nonatomic) NSURL *urlBeingParsed; // @synthesize urlBeingParsed=_urlBeingParsed;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSFileHandle *errorFile; // @synthesize errorFile=_errorFile;
- (void)reportWarningWithElement:(id)arg1 failure:(id)arg2;
- (void)reportProblemWithElement:(id)arg1 failure:(id)arg2;
- (id)init;

@end

