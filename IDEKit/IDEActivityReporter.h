//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTExtension, DVTStackBacktrace, IDEWorkspace, NSArray, NSImage, NSMutableArray, NSString;

@interface IDEActivityReporter : NSObject <DVTInvalidation>
{
    DVTExtension *_representedExtension;
    IDEWorkspace *_workspace;
    NSArray *_activityReports;
    NSImage *_image;
}

+ (void)initialize;
+ (id)activityReporterWithExtension:(id)arg1 workspace:(id)arg2;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) DVTExtension *representedExtension; // @synthesize representedExtension=_representedExtension;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSArray *activityReports; // @dynamic activityReports;
@property(readonly) NSImage *image;
- (id)newActivityReportWithTitle:(id)arg1 options:(int)arg2;
- (id)newActivityReportWithTitle:(id)arg1 options:(int)arg2 image:(id)arg3;
- (id)newActivityReportWithTitle:(id)arg1 options:(int)arg2 isUserVisible:(BOOL)arg3 fileIOPriority:(unsigned long long)arg4 fileIOCoordinatorBlock:(CDUnknownBlockType)arg5;
- (id)newActivityReportWithTitle:(id)arg1 options:(int)arg2 isUserVisible:(BOOL)arg3 image:(id)arg4 fileIOPriority:(unsigned long long)arg5 fileIOCoordinatorBlock:(CDUnknownBlockType)arg6;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutableActivityReports; // @dynamic mutableActivityReports;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

