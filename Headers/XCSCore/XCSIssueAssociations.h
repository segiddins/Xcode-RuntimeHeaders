//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class XCSAssigneeIssueAssociation, XCSRadarIssueAssociation;

@interface XCSIssueAssociations : XCSObject
{
    XCSRadarIssueAssociation *_radar;
    XCSAssigneeIssueAssociation *_assignee;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) XCSAssigneeIssueAssociation *assignee; // @synthesize assignee=_assignee;
@property(readonly, nonatomic) XCSRadarIssueAssociation *radar; // @synthesize radar=_radar;
- (id)dictionaryRepresentation;
- (id)extractAssociationWithClass:(Class)arg1 fromInfo:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

@end

