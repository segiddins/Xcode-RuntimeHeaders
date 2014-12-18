//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "NSMenuDelegate.h"

@class DVTDisclosureView, DVTObservingToken, IBBindingAutocompletingTextField, IBBindingInfo, IBBindingsInspector, IBButtonComboBox, IBDocument, NSArray, NSBox, NSMutableArray, NSObjectController, NSOperationQueue, NSString, NSTextField;

@interface IBBindingSlice : IDEViewController <NSMenuDelegate>
{
    NSObjectController *_objectController;
    IBButtonComboBox *_valueTransformerComboBox;
    NSTextField *_placeholdersLabel;
    NSBox *_divider;
    IBBindingAutocompletingTextField *_controllerKeyField;
    IBBindingAutocompletingTextField *_modelKeyField;
    DVTObservingToken *_sliceViewDisclosedKVOToken;
    NSMutableArray *_optionSlivers;
    DVTDisclosureView *_sliceView;
    NSMutableArray *_objectEditors;
    BOOL _settingInfo;
    DVTObservingToken *_bindingInfoKVOToken;
    id _inspectedObject;
    IBDocument *_inspectedDocument;
    id <DVTCancellable> _classDescriberObservingToken;
    NSOperationQueue *_modelKeyPathValidationQueue;
    IBBindingsInspector *_inspector;
    BOOL _bound;
    BOOL _lookingUpAvailableTransformers;
    IBBindingInfo *_bindingInfo;
    NSString *_selectedControllerKey;
    NSString *_selectedModelKeyPath;
    id _selectedController;
    NSString *_selectedValueTransformerName;
    NSArray *_acceptableValueTransformerNames;
    id <IBBindingSliceDelegate> _delegate;
}

+ (id)cocoaValueTransformers;
+ (id)booleanValuedOptionsPredicate;
+ (id)placeholderOptionsPredicate;
@property __weak id <IBBindingSliceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *acceptableValueTransformerNames; // @synthesize acceptableValueTransformerNames=_acceptableValueTransformerNames;
@property(nonatomic) BOOL lookingUpAvailableTransformers; // @synthesize lookingUpAvailableTransformers=_lookingUpAvailableTransformers;
@property(retain, nonatomic) NSString *selectedValueTransformerName; // @synthesize selectedValueTransformerName=_selectedValueTransformerName;
@property(retain, nonatomic) id selectedController; // @synthesize selectedController=_selectedController;
@property(copy, nonatomic) NSString *selectedModelKeyPath; // @synthesize selectedModelKeyPath=_selectedModelKeyPath;
@property(copy, nonatomic) NSString *selectedControllerKey; // @synthesize selectedControllerKey=_selectedControllerKey;
@property(retain, nonatomic) IBBindingInfo *bindingInfo; // @synthesize bindingInfo=_bindingInfo;
@property(nonatomic) BOOL bound; // @synthesize bound=_bound;
- (void).cxx_destruct;
- (void)menuWillOpen:(id)arg1;
- (void)dismissAllCompletions;
- (void)validateBindingKeyPath;
- (void)validateControllerKey;
- (void)setValidationStatusForControllerKeyField:(long long)arg1;
- (void)validateModelKeyPath;
- (void)setValidationStatusForModelKeyField:(long long)arg1 keyPath:(id)arg2 type:(id)arg3;
- (long long)validationStatusForModelKeyTypeName:(id)arg1;
- (BOOL)isSelectedControllerAKindOf:(id)arg1;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(int *)arg5;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)textField:(id)arg1 didAcceptCompletion:(id)arg2 by:(unsigned long long)arg3;
- (void)commitSelectedModelKeyPath;
- (void)commitSelectedControllerKey;
- (void)updateBoundState;
- (BOOL)commitEditing;
- (void)discardEditing;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)binding;
- (BOOL)hasControllerKeys;
- (id)controllerKeys;
- (void)updateBindingOption:(id)arg1;
- (void)clearSelectedKeys;
- (void)createBindingInInspector;
- (BOOL)hasBindableControllers;
- (void)setupForDrawing;
- (id)optionDescriptionForName:(id)arg1;
@property BOOL expanded;
- (id)sliceView;
- (BOOL)isController:(id)arg1 AKindOf:(id)arg2;
- (id)modelKeyPathForBindingInfo:(id)arg1 givenControllerKey:(id)arg2;
- (id)controllerKeyForBindingInfo:(id)arg1;
- (void)refreshSliceViewState;
- (void)updateValueTransformerNames;
- (void)primitiveInvalidate;
- (void)_reset;
- (void)dropOptionSlivers;
- (void)stopObservingClassDescriber;
- (void)startObservingClassDescriber;
- (void)stopObservingBindingInfo;
- (void)startObservingBindingInfo;
- (void)loadView;
- (id)initWithInspector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

