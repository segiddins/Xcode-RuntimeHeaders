//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, DVTFileDataType, IDESchemeActionsInvocationRecord, MISSING_TYPE, NSString;
@protocol IDETestReport_FailureSummary, IDETestReport_Test;

@interface _TtC6IDEKit34IDETestReportCallStackCodeRollItem : NSObject
{
    MISSING_TYPE *resultBundle;
    MISSING_TYPE *failureSummary;
    MISSING_TYPE *test;
    MISSING_TYPE *lookupUUID;
    MISSING_TYPE *group;
    MISSING_TYPE *document;
    MISSING_TYPE *documentClosedObservationToken;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
@property(nonatomic, readonly) NSString *navigableItem_name;
- (id)initWithResultBundle:(id)arg1 failureSummary:(id)arg2 test:(id)arg3 document:(id)arg4 group:(id)arg5;
- (void)dealloc;
@property(nonatomic, readonly) id <IDETestReport_Test> test; // @synthesize test;
@property(nonatomic, readonly) id <IDETestReport_FailureSummary> failureSummary; // @synthesize failureSummary;
@property(nonatomic, readonly) IDESchemeActionsInvocationRecord *resultBundle; // @synthesize resultBundle;

@end

