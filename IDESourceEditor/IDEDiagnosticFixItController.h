//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTPopoverContentViewController.h"

@class DVTBorderedView, DVTSourceTextView, IDEDiagnosticActivityLogMessage, IDEDiagnosticAnnotation, IDEEditorDocument<IDEDiagnosticControllerDataSource>, NSArray, NSArrayController, NSImageView, NSObjectController, NSString, NSTableView, NSTextField;

@interface IDEDiagnosticFixItController : DVTPopoverContentViewController
{
    NSString *_previewString;
    struct _NSRange _previewRange;
    IDEEditorDocument<IDEDiagnosticControllerDataSource> *_editorDocument;
    DVTSourceTextView *_textView;
    IDEDiagnosticAnnotation *_diagnosticAnnotation;
    IDEDiagnosticActivityLogMessage *_diagnosticItem;
    BOOL _userAcceptedSession;
    BOOL _changingSelection;
    NSTextField *_typeTextField;
    NSImageView *_titleIconImageView;
    NSTextField *_titleTextField;
    DVTBorderedView *_titleBorderedView;
    NSTableView *_tableView;
    DVTBorderedView *_tableBorderedView;
    NSObjectController *_diagnosticItemController;
    NSArrayController *_fixableDiagnosticItemsController;
}

+ (id)keyPathsForValuesAffectingDiagnosticItem;
@property(retain) IDEDiagnosticAnnotation *diagnosticAnnotation; // @synthesize diagnosticAnnotation=_diagnosticAnnotation;
@property BOOL userAcceptedSession; // @synthesize userAcceptedSession=_userAcceptedSession;
@property(retain) DVTSourceTextView *textView; // @synthesize textView=_textView;
@property(retain) IDEEditorDocument<IDEDiagnosticControllerDataSource> *editorDocument; // @synthesize editorDocument=_editorDocument;
- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)_tableViewDoubleClickAction:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)sizeToFit;
- (void)_contentViewBoundsDidChange:(id)arg1;
- (void)endInlinePreviewing;
- (void)beginInlinePreviewing;
- (void)loadView;
@property(readonly) NSArray *selectedFixableDiagnosticItems;
@property(retain, nonatomic) IDEDiagnosticActivityLogMessage *diagnosticItem;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

