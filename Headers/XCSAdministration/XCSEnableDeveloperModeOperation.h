//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@interface XCSEnableDeveloperModeOperation : XCSInitializationOperation
{
}

- (BOOL)isDeveloperModeEnabled;
- (id)enableDeveloperModeProcess;
- (id)checkDeveloperModeProcess;
- (void)run;
- (id)statusDescription;

@end

