//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface _TtC13IDEFoundation20NotarizationAuditLog : NSObject
{
    // Error parsing type: , name: logFormatVersion
    // Error parsing type: , name: jobId
    // Error parsing type: , name: status
    // Error parsing type: , name: statusSummary
    // Error parsing type: , name: statusCode
    // Error parsing type: , name: archiveFilename
    // Error parsing type: , name: uploadDate
    // Error parsing type: , name: sha256
    // Error parsing type: , name: issues
    // Error parsing type: , name: ticketContents
}

+ (id)auditLogWithFileURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic, readonly) NSArray *notices;
@property(nonatomic, readonly) NSArray *warnings;
@property(nonatomic, readonly) NSArray *errors;
@property(nonatomic, readonly) NSArray *ticketContents;
@property(nonatomic, readonly) NSArray *issues;
@property(nonatomic, readonly) NSString *sha256;
@property(nonatomic, readonly) NSDate *uploadDate;
@property(nonatomic, readonly) NSString *archiveFilename;
@property(nonatomic, readonly) long long statusCode; // @synthesize statusCode;
@property(nonatomic, readonly) NSString *statusSummary;
@property(nonatomic, readonly) NSString *status;
@property(nonatomic, readonly) NSString *jobId;
@property(nonatomic, readonly) long long logFormatVersion; // @synthesize logFormatVersion;

@end

