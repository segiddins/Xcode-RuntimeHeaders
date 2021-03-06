//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEDelta/IDEBlameAnnotationViewDelegate-Protocol.h>
#import <IDEDelta/IDESourceControlBlameActionMenuDelegate-Protocol.h>
#import <IDEDelta/IDESourceControlLogDetailDelegate-Protocol.h>
#import <IDEDelta/NSPopoverDelegate-Protocol.h>

@class DVTSourceControlBlameItem, DVTSourceControlWorkingCopy, IDEBlameAnnotationBorderedView, IDESourceCodeBlameController, NSButton, NSString, NSView, NSWindow, _TtC8IDEDelta15BlameActionMenu;

@interface IDEBlameAnnotationViewController : NSViewController <IDESourceControlBlameActionMenuDelegate, IDEBlameAnnotationViewDelegate, NSPopoverDelegate, IDESourceControlLogDetailDelegate>
{
    BOOL _highlighted;
    unsigned long long _mouseOver;
    _TtC8IDEDelta15BlameActionMenu *_actionMenu;
    IDEBlameAnnotationBorderedView *_borderedView;
    NSView *_primaryView;
    NSButton *_actionButton;
    IDESourceCodeBlameController *_blameController;
    DVTSourceControlWorkingCopy *_workingCopy;
}

+ (id)defaultViewNibName;
- (void).cxx_destruct;
@property(retain, nonatomic) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
@property(retain, nonatomic) IDESourceCodeBlameController *blameController; // @synthesize blameController=_blameController;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSView *primaryView; // @synthesize primaryView=_primaryView;
@property(retain, nonatomic) IDEBlameAnnotationBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void)openCodeReviewForLogItem:(id)arg1;
- (void)openAuthorsViewForLogItem:(id)arg1;
@property(readonly) NSWindow *viewWindow;
@property(readonly) BOOL detailShouldShowOpenBlameView;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMouseOver:(unsigned long long)arg1;
- (void)popoverDidClose;
- (void)popoverDidShow;
- (void)showInfoPanel;
- (id)blameAnnotationView;
- (void)updateViewContent;
- (BOOL)_uncommitted;
- (void)setRepresentedObject:(id)arg1;
- (id)nibName;
- (void)dealloc;
@property(readonly, nonatomic) DVTSourceControlBlameItem *blameItem;
- (id)appearanceManager;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

