//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class DVTBorderedView, IDEArchive, IDEArchiveStatusLogViewController;

@interface IDEArchiveStatusLogWindowController : NSWindowController
{
    IDEArchive *_archive;
    IDEArchiveStatusLogViewController *_logViewController;
    DVTBorderedView *_containerView;
}

+ (void)beginSheetWithArchive:(id)arg1 modalForWindow:(id)arg2;
- (void).cxx_destruct;
@property(retain) DVTBorderedView *containerView; // @synthesize containerView=_containerView;
@property(retain) IDEArchiveStatusLogViewController *logViewController; // @synthesize logViewController=_logViewController;
@property(readonly) IDEArchive *archive; // @synthesize archive=_archive;
- (void)help:(id)arg1;
- (void)exportApp:(id)arg1;
- (void)done:(id)arg1;
- (id)helpID;
- (void)windowDidLoad;
- (id)initWithArchive:(id)arg1;
- (void)sheetDidEnd;

@end
