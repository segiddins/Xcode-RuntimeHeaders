//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class DVTExtension, DVTLanguageSpecification, NSArray, NSString;

@interface DVTSourceCodeLanguage : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_languageName;
    NSString *_languageSpecificationIdentifier;
    DVTLanguageSpecification *_languageSpecification;
    NSString *_documentationAbbreviation;
    NSArray *_fileDataTypeIdentifiers;
    NSArray *_fileDataTypes;
    NSArray *_conformedToLanguageIdentifiers;
    NSArray *_conformedToLanguages;
    Class _nativeSourceModelParserClass;
    BOOL _supportsIndentation;
    NSArray *_commentSyntaxes;
    NSArray *_lineCommentPrefixes;
    NSArray *_blockCommentCircumfixes;
    DVTExtension *_extension;
    BOOL _isHidden;
    BOOL _usesColorLiteral;
    BOOL _usesFileLiteral;
    BOOL _usesImageLiteral;
}

+ (id)sourceCodeLanguageForFileDataType:(id)arg1;
+ (id)sourceCodeLanguageForLanguageSpecificationIdentifier:(id)arg1;
+ (id)sourceCodeLanguageWithIdentifier:(id)arg1;
+ (id)sourceCodeLanguages;
+ (id)_sourceCodeLanguageForExtension:(id)arg1;
+ (id)objectiveCPlusPlusSourceCodeLanguage;
+ (id)cPlusPlusSourceCodeLanguage;
+ (id)objectiveCSourceCodeLanguage;
+ (id)cSourceCodeLanguage;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) BOOL usesImageLiteral; // @synthesize usesImageLiteral=_usesImageLiteral;
@property(readonly) BOOL usesFileLiteral; // @synthesize usesFileLiteral=_usesFileLiteral;
@property(readonly) BOOL usesColorLiteral; // @synthesize usesColorLiteral=_usesColorLiteral;
@property(readonly) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(readonly) BOOL supportsIndentation; // @synthesize supportsIndentation=_supportsIndentation;
@property(readonly, copy) NSString *documentationAbbreviation; // @synthesize documentationAbbreviation=_documentationAbbreviation;
@property(readonly, copy) NSString *languageName; // @synthesize languageName=_languageName;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)blockCommentCircumfixes;
- (id)lineCommentPrefixes;
- (BOOL)conformsToLanguage:(id)arg1;
@property(readonly, copy) NSArray *conformedToLanguages;
@property(readonly, copy) NSArray *fileDataTypes;
@property(readonly) DVTLanguageSpecification *languageSpecification;
@property(readonly) Class nativeSourceModelParserClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithSourceCodeLanguageExtension:(id)arg1;

@end

