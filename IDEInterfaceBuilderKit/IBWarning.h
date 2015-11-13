//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBDocument, IDEActivityLogMessage, NSSet, NSString;

@interface IBWarning : NSObject
{
    IBDocument *_globalWarningDocument;
    NSString *_message;
    IDEActivityLogMessage *_activityLogMessage;
    long long _warningType;
    id _source;
    NSSet *_affectedObjects;
}

+ (unsigned long long)ideActivityLogWarningSeverityForIBWarningSeverity:(long long)arg1;
+ (long long)severityForWarningType:(long long)arg1;
+ (id)severityMap;
+ (void)setSeverityMap:(id)arg1;
+ (id)warningWithSource:(id)arg1 warningType:(long long)arg2 message:(id)arg3 objectsToSubmessages:(id)arg4;
+ (id)warningWithSource:(id)arg1 warningType:(long long)arg2 message:(id)arg3 affectedObjects:(id)arg4;
+ (id)globalWarningForDocument:(id)arg1 warningType:(long long)arg2 message:(id)arg3;
+ (id)ideIssueTypeIdentifierForWarningType:(long long)arg1;
+ (id)documentLocationTimestampForDocument:(id)arg1;
+ (id)documentLocationForDocument:(id)arg1;
+ (id)documentLocationForMember:(id)arg1;
+ (id)displayNameForInvalidMacOSXVersionRange:(long long)arg1;
+ (id)categoryList;
+ (id)symbolNameForWarningType:(long long)arg1;
+ (id)displayNameForWarningType:(long long)arg1;
@property(readonly) NSSet *affectedObjects; // @synthesize affectedObjects=_affectedObjects;
@property(readonly) id source; // @synthesize source=_source;
@property(readonly) long long warningType; // @synthesize warningType=_warningType;
@property(readonly, copy) IDEActivityLogMessage *activityLogMessage; // @synthesize activityLogMessage=_activityLogMessage;
@property(readonly, copy) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (id)ideIssueRepresentationForIssueProvider:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToWarning:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) long long warningSeverity;
- (id)initWithSource:(id)arg1 document:(id)arg2 warningType:(long long)arg3 message:(id)arg4 activityLogMessage:(id)arg5 affectedObjects:(id)arg6;

@end

