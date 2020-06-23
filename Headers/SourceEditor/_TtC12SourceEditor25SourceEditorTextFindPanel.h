//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <SourceEditor/NSControlTextEditingDelegate-Protocol.h>

@class MISSING_TYPE, NSImageView, NSLayoutConstraint, NSSearchField, NSSegmentedControl, NSTextField, NSView, _TtC12SourceEditor18TextFindTextButton, _TtC12SourceEditor19TextFindPopUpButton;
@protocol _TtP12SourceEditor34SourceEditorTextFindPanelFieldType_;

@interface _TtC12SourceEditor25SourceEditorTextFindPanel : NSViewController <NSControlTextEditingDelegate>
{
    MISSING_TYPE *findPanel;
    MISSING_TYPE *replacePanel;
    MISSING_TYPE *findField;
    MISSING_TYPE *replaceField;
    MISSING_TYPE *nextPreviousControl;
    MISSING_TYPE *doneControl;
    MISSING_TYPE *replaceControl;
    MISSING_TYPE *panelModePopUp;
    MISSING_TYPE *panelModeSeparator;
    MISSING_TYPE *panelModeSeparatorHeightConstraint;
    MISSING_TYPE *matchesLabel;
    MISSING_TYPE *caseSensitiveSeparator;
    MISSING_TYPE *caseSensitiveSeparatorHeightConstraint;
    MISSING_TYPE *caseSensitiveButton;
    MISSING_TYPE *searchPatternSeparator;
    MISSING_TYPE *searchPatternSeparatorHeightConstraint;
    MISSING_TYPE *searchPatternPopUp;
    MISSING_TYPE *replaceIcon;
    MISSING_TYPE *replaceFieldTitle;
    MISSING_TYPE *replaceFieldTitleSeparator;
    MISSING_TYPE *replaceFieldTitleSeparatorHeightConstraint;
    MISSING_TYPE *replacePanelHeightConstraint;
    MISSING_TYPE *client;
    MISSING_TYPE *recentQueries;
    MISSING_TYPE *$__lazy_storage_$_wrapAroundMenuItem;
    MISSING_TYPE *colorTheme;
    MISSING_TYPE *controlFont;
    MISSING_TYPE *boldControlFont;
    MISSING_TYPE *miniControlFont;
    MISSING_TYPE *replacePanelExpandedHeight;
    MISSING_TYPE *mode;
    MISSING_TYPE *replaceMode;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchPatternPopUpAction:(id)arg1;
- (void)caseSensitiveButtonAction:(id)arg1;
- (void)replaceAction:(id)arg1;
- (void)doneControlAction:(id)arg1;
- (void)nextPreviousControlAction:(id)arg1;
- (void)findFieldAction:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)textFieldTextDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)popUpButtonWillDisplay:(id)arg1;
- (void)updateDisplayForColorTheme;
- (void)toggleWrapAround:(id)arg1;
- (void)clearRecentQueries;
- (void)applyRecentQueryMenuItem:(id)arg1;
- (void)toggleFindReplaceMode:(id)arg1;
- (BOOL)becomeFirstResponder;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
- (void)performTextFinderAction:(id)arg1;
- (void)viewDidLayout;
- (void)viewWillAppear;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) NSLayoutConstraint *replacePanelHeightConstraint; // @synthesize replacePanelHeightConstraint;
@property(nonatomic, retain) NSLayoutConstraint *replaceFieldTitleSeparatorHeightConstraint; // @synthesize replaceFieldTitleSeparatorHeightConstraint;
@property(nonatomic, retain) NSView *replaceFieldTitleSeparator; // @synthesize replaceFieldTitleSeparator;
@property(nonatomic, retain) NSTextField *replaceFieldTitle; // @synthesize replaceFieldTitle;
@property(nonatomic, retain) NSImageView *replaceIcon; // @synthesize replaceIcon;
@property(nonatomic, retain) _TtC12SourceEditor19TextFindPopUpButton *searchPatternPopUp; // @synthesize searchPatternPopUp;
@property(nonatomic, retain) NSLayoutConstraint *searchPatternSeparatorHeightConstraint; // @synthesize searchPatternSeparatorHeightConstraint;
@property(nonatomic, retain) NSView *searchPatternSeparator; // @synthesize searchPatternSeparator;
@property(nonatomic, retain) _TtC12SourceEditor18TextFindTextButton *caseSensitiveButton; // @synthesize caseSensitiveButton;
@property(nonatomic, retain) NSLayoutConstraint *caseSensitiveSeparatorHeightConstraint; // @synthesize caseSensitiveSeparatorHeightConstraint;
@property(nonatomic, retain) NSView *caseSensitiveSeparator; // @synthesize caseSensitiveSeparator;
@property(nonatomic, retain) NSTextField *matchesLabel; // @synthesize matchesLabel;
@property(nonatomic, retain) NSLayoutConstraint *panelModeSeparatorHeightConstraint; // @synthesize panelModeSeparatorHeightConstraint;
@property(nonatomic, retain) NSView *panelModeSeparator; // @synthesize panelModeSeparator;
@property(nonatomic, retain) _TtC12SourceEditor19TextFindPopUpButton *panelModePopUp; // @synthesize panelModePopUp;
@property(nonatomic, retain) NSSegmentedControl *replaceControl; // @synthesize replaceControl;
@property(nonatomic, retain) NSSegmentedControl *doneControl; // @synthesize doneControl;
@property(nonatomic, retain) NSSegmentedControl *nextPreviousControl; // @synthesize nextPreviousControl;
@property(nonatomic, retain) NSSearchField<_TtP12SourceEditor34SourceEditorTextFindPanelFieldType_> *replaceField; // @synthesize replaceField;
@property(nonatomic, retain) NSSearchField<_TtP12SourceEditor34SourceEditorTextFindPanelFieldType_> *findField; // @synthesize findField;
@property(nonatomic, retain) NSView *replacePanel; // @synthesize replacePanel;
@property(nonatomic, retain) NSView *findPanel; // @synthesize findPanel;

@end

