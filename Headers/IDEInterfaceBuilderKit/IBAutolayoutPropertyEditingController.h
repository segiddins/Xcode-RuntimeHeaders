//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSTextFieldDelegate-Protocol.h>

@class DVTButtonTextField, DVTStackBacktrace, IBDocument, NSArray, NSMenu, NSNumberFormatter, NSSet, NSStepper, NSString;

@interface IBAutolayoutPropertyEditingController : NSObject <DVTInvalidation, NSMenuDelegate, NSTextFieldDelegate>
{
    NSArray *_objectObservingTokens;
    long long _lastStepperValue;
    NSSet *_objects;
    DVTButtonTextField *_textField;
    NSStepper *_stepper;
    NSNumberFormatter *_formatter;
    IBDocument *_document;
    NSMenu *_menu;
    NSString *_keyPathFromEditedObjectToModelObject;
    NSString *_proxiedConfigurablePropertyKeyPath;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *proxiedConfigurablePropertyKeyPath; // @synthesize proxiedConfigurablePropertyKeyPath=_proxiedConfigurablePropertyKeyPath;
@property(copy, nonatomic) NSString *keyPathFromEditedObjectToModelObject; // @synthesize keyPathFromEditedObjectToModelObject=_keyPathFromEditedObjectToModelObject;
@property(readonly, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
@property(readonly, nonatomic) IBDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) DVTButtonTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSSet *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (void)_userDidPressStepper:(id)arg1;
- (void)decrementValue;
- (void)incrementValue;
- (void)syncModelFromUI;
- (void)syncUIFromModel;
- (void)userDidChangeValue:(id)arg1;
- (void)populateMenu:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_openMenu:(id)arg1;
- (void)_openMenu:(id)arg1 underControl:(id)arg2;
- (void)primitiveInvalidate;
- (void)populateObservingTokens:(id)arg1;
- (void)startObservingObjects;
- (void)stopObservingObjects;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (id)documentForEditedObject:(id)arg1;
- (id)modelObjectInCanvasConfigurationForEditedObject:(id)arg1;
- (void)setValue:(id)arg1 forModelKeyPath:(id)arg2 ofEditedObject:(id)arg3;
- (id)valueForModelKeyPath:(id)arg1 ofEditedObject:(id)arg2;
- (id)editedKeyPathForModelKeyPath:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

