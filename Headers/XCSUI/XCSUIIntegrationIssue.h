//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUI/DVTRadarSupport_Issue-Protocol.h>

@class NSAttributedString, NSString, XCSIntegration, XCSIntegrationIssue;

@interface XCSUIIntegrationIssue : NSObject <DVTRadarSupport_Issue>
{
    NSString *attachLabelTitle;
    unsigned long long _issueUIType;
    XCSIntegrationIssue *_issue;
    XCSIntegration *_integration;
}

+ (id)summaryStringForIssues:(id)arg1;
+ (id)colorForUIIssueType:(unsigned long long)arg1;
+ (id)issueTypeStringFromUIIssueType:(unsigned long long)arg1;
@property(readonly) XCSIntegration *integration; // @synthesize integration=_integration;
@property(readonly) XCSIntegrationIssue *issue; // @synthesize issue=_issue;
@property(readonly) unsigned long long issueUIType; // @synthesize issueUIType=_issueUIType;
@property(readonly, copy, nonatomic) NSString *attachLabelTitle; // @synthesize attachLabelTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long associatedRadarID;
@property(readonly, copy, nonatomic) NSString *stringRepresentation;
@property(readonly, copy, nonatomic) NSAttributedString *attributedStringRepresentation;
- (void)appendString:(id)arg1 withAttributes:(id)arg2 toAttributedString:(id)arg3;
- (id)issueLabelFromIntegrationIssueType:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *briefStringRepresentation;
- (id)tinyStringRepresentation;
- (id)sourceFilename;
@property(readonly, nonatomic) id underlyingIssue;
- (id)initWithIntegrationIssue:(id)arg1 type:(unsigned long long)arg2 integration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

