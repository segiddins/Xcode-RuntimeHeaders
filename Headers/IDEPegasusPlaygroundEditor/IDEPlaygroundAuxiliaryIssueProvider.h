//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEIssueProvider.h>

@class DVTNotificationToken, DVTObservingToken, NSMutableDictionary;

@interface IDEPlaygroundAuxiliaryIssueProvider : IDEIssueProvider
{
    BOOL _openDocumentsChanged;
    DVTNotificationToken *_playgroundAuxIssueObserverToken;
    DVTObservingToken *_openDocumentsChangedToken;
    NSMutableDictionary *_issuesByFile;
}

+ (int)providerType;
@property(retain) NSMutableDictionary *issuesByFile; // @synthesize issuesByFile=_issuesByFile;
@property BOOL openDocumentsChanged; // @synthesize openDocumentsChanged=_openDocumentsChanged;
@property(retain) DVTObservingToken *openDocumentsChangedToken; // @synthesize openDocumentsChangedToken=_openDocumentsChangedToken;
@property(retain) DVTNotificationToken *playgroundAuxIssueObserverToken; // @synthesize playgroundAuxIssueObserverToken=_playgroundAuxIssueObserverToken;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)_filterIssuesByActiveScheme;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)updateIssues;
- (BOOL)isOwnerPlayground:(id)arg1;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;

@end

