//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerGLSupport/GPUProgramPerformanceReportProvider-Protocol.h>

@class GPUReportEditor;

__attribute__((visibility("hidden")))
@interface GPUGLProgramPerformanceReportProvider : NSObject <GPUProgramPerformanceReportProvider>
{
    GPUReportEditor *_reportEditor;
}

- (void).cxx_destruct;
- (id)generateProgramPerformanceTree;
- (id)programPerformanceTotalItem;
- (id)initWithReportEditor:(id)arg1;

@end

