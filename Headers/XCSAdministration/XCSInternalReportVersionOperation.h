//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@interface XCSInternalReportVersionOperation : XCSInitializationOperation
{
}

- (void)cancel;
- (void)run;
- (void)_reportSuccess:(BOOL)arg1;
- (id)_sendVersions:(id)arg1 success:(BOOL)arg2;
- (id)_collectVersions;
- (id)xcode;
- (BOOL)failSilently;
- (id)statusDescription;

@end

