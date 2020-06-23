//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTCocoaAdditionsKit/DVTDealloc2Main_TokenField.h>

#import <DVTUserInterfaceKit/DVTTextFieldFocusable-Protocol.h>
#import <DVTUserInterfaceKit/NSTableViewDataSource-Protocol.h>
#import <DVTUserInterfaceKit/NSTableViewDelegate-Protocol.h>

@class DVTFilterTokenCompletionTableView, DVTFilterTokenCompletionWindow, DVTFilterTokenIconView, DVTGradientImageButton, NSArray, NSColor, NSMutableArray, NSProgressIndicator, NSString;
@protocol DVTFilterTokenFieldCompletionDelegate, DVTFilterTokenFieldDelegate;

@interface DVTFilterTokenField : DVTDealloc2Main_TokenField <NSTableViewDelegate, NSTableViewDataSource, DVTTextFieldFocusable>
{
    long long _progress;
    DVTFilterTokenCompletionTableView *_tableView;
    DVTFilterTokenCompletionWindow *_completionWindow;
    NSArray *_sectionsToRows;
    NSMutableArray *_filterButtonStateObservers;
    BOOL _needsIconMenu;
    BOOL _popUpPullsUp;
    BOOL _hidesProgress;
    BOOL _isBecomingFirstResponder;
    int _globalOperatorType;
    id <DVTFilterTokenFieldCompletionDelegate> _completionDelegate;
    double _completionWindowMinWidth;
    double _completionWindowMaxWidth;
    NSArray *_filterMatchStrings;
    NSProgressIndicator *_progressIndicator;
    NSMutableArray *_filterButtons;
    DVTGradientImageButton *_cancelButton;
    DVTFilterTokenIconView *_iconView;
}

+ (id)keyPathsForValuesAffectingHasText;
+ (Class)cellClass;
@property(retain) DVTFilterTokenIconView *iconView; // @synthesize iconView=_iconView;
@property(retain) DVTGradientImageButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly) NSMutableArray *filterButtons; // @synthesize filterButtons=_filterButtons;
@property BOOL isBecomingFirstResponder; // @synthesize isBecomingFirstResponder=_isBecomingFirstResponder;
@property(nonatomic) BOOL hidesProgress; // @synthesize hidesProgress=_hidesProgress;
@property(readonly) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(copy, nonatomic) NSArray *filterMatchStrings; // @synthesize filterMatchStrings=_filterMatchStrings;
@property(nonatomic) BOOL popUpPullsUp; // @synthesize popUpPullsUp=_popUpPullsUp;
@property(nonatomic) BOOL needsIconMenu; // @synthesize needsIconMenu=_needsIconMenu;
@property(nonatomic) double completionWindowMaxWidth; // @synthesize completionWindowMaxWidth=_completionWindowMaxWidth;
@property(nonatomic) double completionWindowMinWidth; // @synthesize completionWindowMinWidth=_completionWindowMinWidth;
@property(nonatomic) int globalOperatorType; // @synthesize globalOperatorType=_globalOperatorType;
@property id <DVTFilterTokenFieldCompletionDelegate> completionDelegate; // @synthesize completionDelegate=_completionDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)completionTableView:(id)arg1 rowIsSeparator:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)completionTableView:(id)arg1 mouseUpInRow:(long long)arg2 event:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)_sectionAndTypeForRow:(long long)arg1 section:(long long *)arg2 rowType:(unsigned long long *)arg3;
- (void)_sectionAndTypeForRow:(long long)arg1 section:(long long *)arg2 rowType:(unsigned long long *)arg3 rowWithinSection:(long long *)arg4;
- (void)updateCompletions;
- (void)_notifyDidSelectRow:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)_completionWindowIsVisibleWithContent;
- (void)closeCompletionWindow;
- (void)_handleWindowNotifications:(id)arg1;
- (void)_updateCompletionWindow;
- (void)_reloadTableViewData;
- (void)_updateCompletionWindowFrame;
@property(nonatomic) long long progress;
- (void)_updateStateForProgress:(long long)arg1;
- (void)updateBoundProgress;
- (void)refreshDisplayTokens;
- (BOOL)untokenizeTokenAttachment:(id)arg1 at:(unsigned long long)arg2;
- (void)clearTokens;
@property(readonly) BOOL hasActiveFilter;
@property(readonly) BOOL hasKeyboardFocus;
- (BOOL)becomeFirstResponder;
- (id)fontSmoothingBackgroundColor;
- (BOOL)allowsVibrancy;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initCommon;
- (void)_cancelButtonClicked:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)_updateButtonPositions;
- (void)resetCursorRects;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)addFilterButtonWithImage:(id)arg1 alternateImage:(id)arg2 toolTip:(id)arg3 accessibilityDescription:(id)arg4;
- (void)removeAllFilterButtons;
@property BOOL hasText; // @dynamic hasText;
- (void)_addOrRemoveCancelButton;
- (void)_updateSearchButton;
- (void)_updateRightSideControlsFrames;
- (void)_objectValueDidChange:(id)arg1;
- (id)_cell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property id <DVTFilterTokenFieldDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) NSColor *explicitBackgroundColor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

