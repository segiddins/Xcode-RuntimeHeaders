//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class IDEWorkspace;

@interface XCSBotLogDocumentLocation : DVTDocumentLocation
{
    id _activityLog;
    IDEWorkspace *_workspace;
}

@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly) id activityLog; // @synthesize activityLog=_activityLog;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 selectedActivityLog:(id)arg3 workspace:(id)arg4;

@end

