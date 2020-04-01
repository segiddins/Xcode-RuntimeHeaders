//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class IBCocoaTouchTargetRuntime, IBUITextInputPasswordRules, NSString;

@interface IBUITextInputTraits : NSObject <IBDocumentArchiving, NSCoding, NSCopying>
{
    BOOL _enablesReturnKeyAutomatically;
    BOOL _secureTextEntry;
    BOOL _allowsPasswordRules;
    int _autocapitalizationType;
    int _autocorrectionType;
    int _spellCheckingType;
    int _keyboardAppearance;
    int _returnKeyType;
    long long _keyboardType;
    long long _smartDashesType;
    long long _smartInsertDeleteType;
    long long _smartQuotesType;
    NSString *_textContentType;
    IBUITextInputPasswordRules *_passwordRules;
    IBCocoaTouchTargetRuntime *_targetRuntime;
}

+ (id)keyPathsForValuesAffectingIbShowsPasswordRulesInspector;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(retain) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(nonatomic) BOOL allowsPasswordRules; // @synthesize allowsPasswordRules=_allowsPasswordRules;
@property(copy, nonatomic) IBUITextInputPasswordRules *passwordRules; // @synthesize passwordRules=_passwordRules;
@property(copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(nonatomic) long long smartQuotesType; // @synthesize smartQuotesType=_smartQuotesType;
@property(nonatomic) long long smartInsertDeleteType; // @synthesize smartInsertDeleteType=_smartInsertDeleteType;
@property(nonatomic) long long smartDashesType; // @synthesize smartDashesType=_smartDashesType;
@property(nonatomic) BOOL secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) BOOL enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) int returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) int keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) int spellCheckingType; // @synthesize spellCheckingType=_spellCheckingType;
@property(nonatomic) int autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) int autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
- (void).cxx_destruct;
- (BOOL)ibShowsPasswordRulesInspector;
@property(copy, nonatomic) NSString *ibInspectedPasswordRulesDescriptor;
- (void)verifyDecodedValues:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithTargetRuntime:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

