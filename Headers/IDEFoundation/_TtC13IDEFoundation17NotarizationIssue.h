//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSError, NSNumber, NSString, NSURL;

@interface _TtC13IDEFoundation17NotarizationIssue : NSObject
{
    MISSING_TYPE *severity;
    MISSING_TYPE *path;
    MISSING_TYPE *message;
    MISSING_TYPE *docUrl;
    MISSING_TYPE *internalCode;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSError *errorRepresentation;
@property(nonatomic, readonly) long long distributionIssueSeverity;
@property(nonatomic, readonly) NSNumber *code;
@property(nonatomic, readonly) NSURL *docUrl;
@property(nonatomic, readonly) NSString *message;
@property(nonatomic, readonly) NSString *path;
@property(nonatomic, readonly) NSString *severity;

@end

