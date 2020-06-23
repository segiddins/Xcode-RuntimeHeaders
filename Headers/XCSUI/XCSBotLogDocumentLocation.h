//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class IDEWorkspace;

@interface XCSBotLogDocumentLocation : DVTDocumentLocation
{
    id _activityLog;
    IDEWorkspace *_workspace;
}

- (void).cxx_destruct;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly) id activityLog; // @synthesize activityLog=_activityLog;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 selectedActivityLog:(id)arg3 workspace:(id)arg4;

@end

