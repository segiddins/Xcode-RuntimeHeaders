//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface GPUCaptureActivityReporter : IDEActivityReporter
{
    NSMapTable *_reportForTraceInferiorSessionTable;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_handleTraceInferiorSessionStateChange:(id)arg1;
- (void)_replaceActivityReportWithSession:(id)arg1 withTitle:(id)arg2 andProgressType:(long long)arg3;
- (void)_cancelActivityForTraceInferiorSession:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

@end

