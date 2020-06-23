//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <DVTUserInterfaceKit/DVTEditor-Protocol.h>
#import <DVTUserInterfaceKit/DVTInvalidation-Protocol.h>

@class DVTExtension, DVTStackBacktrace, DVTViewController, NSMapTable, NSString;
@protocol DVTReplacementViewDelegate;

@interface DVTReplacementView : DVTLayoutView_ML <DVTEditor, DVTInvalidation>
{
    Class _controllerClass;
    NSString *_controllerExtensionIdentifier;
    DVTExtension *_controllerExtension;
    DVTViewController *_installedViewController;
    id _forwardedBindingInfo;
    id <DVTReplacementViewDelegate> _delegate;
    int _horizontalContentViewResizingMode;
    int _verticalContentViewResizingMode;
    struct {
        unsigned int _needToReloadSubview:1;
        unsigned int _shouldNotifyInstalledViewControllerObservers:1;
        unsigned int _delegate_willInstallViewController:1;
        unsigned int _delegate_didInstallViewController:1;
        unsigned int _delegate_willCloseViewController:1;
        unsigned int _delegate_willDisplayInRect:1;
        unsigned int _reserved:26;
    } _DVTReplacementViewFlags;
    BOOL _isGrouped;
    NSMapTable *_subviewFrameChangeTokens;
    BOOL _usesAutoLayout;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL usesAutoLayout; // @synthesize usesAutoLayout=_usesAutoLayout;
@property BOOL isGrouped; // @synthesize isGrouped=_isGrouped;
@property(nonatomic) int verticalContentViewResizingMode; // @synthesize verticalContentViewResizingMode=_verticalContentViewResizingMode;
@property(nonatomic) int horizontalContentViewResizingMode; // @synthesize horizontalContentViewResizingMode=_horizontalContentViewResizingMode;
@property(retain, nonatomic) Class controllerClass; // @synthesize controllerClass=_controllerClass;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)updateBoundControllerExtensionIdentifier;
- (void)updateBoundControllerClass;
@property(copy) NSString *controllerExtensionIdentifier;
- (id)_clearCurrentController;
- (void)_tearDownBinding:(id)arg1;
- (void)_forwardBinding:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)_tearDownBindings;
- (void)_forwardBindings;
- (void)layoutBottomUp;
- (void)layoutTopDown;
@property(retain) DVTViewController *installedViewController;
- (id)_tearDownViewController;
- (void)_setupViewController;
- (void)_configureExtension;
- (id)infoForBinding:(id)arg1;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_forwardedBindingInfo;
- (void)_clearInfoForBinding:(id)arg1;
- (void)_recordInfoForBinding:(id)arg1 toObject:(id)arg2 keyPath:(id)arg3 options:(id)arg4;
- (void)primitiveInvalidate;
- (void)_recursiveDisplayAllDirtyWithLockFocus:(BOOL)arg1 visRect:(struct CGRect)arg2;
- (id)exposedBindings;
- (void)_invalidateLayoutBecauseOfSubviewFrameChange:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
@property(retain, nonatomic) id <DVTReplacementViewDelegate> delegate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

