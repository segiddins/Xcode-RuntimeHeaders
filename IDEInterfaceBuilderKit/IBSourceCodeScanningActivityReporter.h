//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTNotificationToken, IDEActivityReport;

@interface IBSourceCodeScanningActivityReporter : IDEActivityReporter
{
    DVTNotificationToken *_didUpdateParsingToken;
    IDEActivityReport *_workspaceActivityReport;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)updateActivityReport:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

