//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUICommandInspectable-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class IBCocoaTouchTargetRuntime, IBKeyEquivalent, NSString;

@interface IBUICommandAlternate : NSObject <IBDocumentArchiving, NSCopying, NSCoding, IBUICommandInspectable>
{
    int _modifierFlags;
    NSString *_title;
    NSString *_actionName;
    IBCocoaTouchTargetRuntime *_targetRuntime;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(nonatomic) int modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) IBKeyEquivalent *keyEquivalent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (BOOL)ibIsCopyableGivenSelection:(id)arg1;
- (BOOL)ibInspectedIsDeveloperItem;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)populateWithPlistDict:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

