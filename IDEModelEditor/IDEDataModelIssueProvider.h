//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEAbstractLiveIssueProvider.h>

@class DVTNotificationToken;

@interface IDEDataModelIssueProvider : IDEAbstractLiveIssueProvider
{
    DVTNotificationToken *_warningsChangedToken;
}

- (void).cxx_destruct;
- (id)documentDataTypeIdentifiers;
- (Class)documentClass;
- (id)updatedIssuesForDocument:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
- (id)_compilerFlagsForDocument:(id)arg1;

@end

