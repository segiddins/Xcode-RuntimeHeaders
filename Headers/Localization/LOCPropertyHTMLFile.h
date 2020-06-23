//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Localization/LOCPropertyAttributedFile.h>

@interface LOCPropertyHTMLFile : LOCPropertyAttributedFile
{
    BOOL wellFormedXML;
    id reserved11;
    id reserved22;
    id reserved33;
    struct _xmlDoc *htmlDocument;
}

+ (unsigned long long)segmentOptions;
+ (BOOL)convertHTMLAtPath:(id)arg1 toRTFPath:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property BOOL wellFormedXML; // @synthesize wellFormedXML;
@property struct _xmlDoc *htmlDocument; // @synthesize htmlDocument;
- (id)attributesForElement:(id)arg1;
- (BOOL)isXPATHForTextNode:(id)arg1;
- (id)xpathForParagraphElement:(id)arg1;
- (id)stringKeyToSentenceNumberDictionary;
- (id)run_xmllint:(id)arg1;
- (BOOL)writeAfterApplyLocSpecificAttributes:(id)arg1 oldBase:(id)arg2 oldLoc:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (id)description;
- (BOOL)writeTo:(id)arg1 withTranslation:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)writeTo:(id)arg1 withTranslations:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)convertTranslationsIntoXPathToParagraphDictionary:(id)arg1;
- (BOOL)writeAsRTFTo:(id)arg1 error:(id *)arg2;
- (id)newLocContentsTextFromOldBase:(id)arg1 oldLoc:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)_orderXpaths:(id)arg1 asTheyAppearInNode:(struct _xmlNode *)arg2;
- (id)_generateNumericalStringIdsForXpaths:(id)arg1;
- (id)createInternalGlossaryRelativeTo:(id)arg1 withError:(id *)arg2;
- (id)createInternalGlossaryWithError:(id *)arg1;
- (id)createInternalGlossaryWithOptions:(unsigned long long)arg1 relativeTo:(id)arg2 error:(id *)arg3;
- (id)createInternalGlossaryWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)localizableAttributes:(id)arg1;
- (id)translationsFromContentsTextWithSegmentation:(BOOL)arg1;
- (id)translationsFromContentsTextWithSegmentation:(BOOL)arg1 translationOrder:(id *)arg2;
- (id)translationsFromContentsTextWithSegmentation:(BOOL)arg1 translationOrder:(id *)arg2 segmentedNodes:(id)arg3;
- (id)translationsForParagraphElementsHavingInlineElementsWithWrapt:(BOOL)arg1;
- (id)translationsFromAttributes;
- (id)localizableAttributesText;
- (id)contentsText;
- (id)localizedFileContentsDataWithGlossary:(id)arg1 forLocale:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithBase64String:(id)arg1 locale:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 locale:(id)arg2 error:(id *)arg3;

@end

