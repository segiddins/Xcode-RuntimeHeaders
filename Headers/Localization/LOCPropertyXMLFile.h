//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Localization/LOCProperty.h>

@class NSArray, NSDictionary, NSString;

@interface LOCPropertyXMLFile : LOCProperty
{
    BOOL wellFormedXML;
    BOOL validPlist;
    BOOL plistConvertedFromJSON;
    BOOL treatPlistAsXML;
    BOOL treatXMLAsDoc;
    unsigned long long plistFormat;
    unsigned long long localizableFlagType;
    NSString *rootElementName;
    NSDictionary *stringDictionary;
    NSDictionary *idDictionary;
    NSArray *transUnitsWithInlineElements;
    id plistObject;
    id reserved1;
    id reserved2;
    id reserved3;
    id reserved4;
    id reserved5;
    id reserved6;
    id reserved7;
    id reserved8;
    struct _xmlDoc *xmlDocument;
}

@property(retain) id plistObject; // @synthesize plistObject;
@property struct _xmlDoc *xmlDocument; // @synthesize xmlDocument;
@property(retain) NSArray *transUnitsWithInlineElements; // @synthesize transUnitsWithInlineElements;
@property(retain) NSDictionary *idDictionary; // @synthesize idDictionary;
@property(retain) NSDictionary *stringDictionary; // @synthesize stringDictionary;
@property(retain) NSString *rootElementName; // @synthesize rootElementName;
@property unsigned long long localizableFlagType; // @synthesize localizableFlagType;
@property unsigned long long plistFormat; // @synthesize plistFormat;
@property BOOL plistConvertedFromJSON; // @synthesize plistConvertedFromJSON;
@property BOOL treatXMLAsDoc; // @synthesize treatXMLAsDoc;
@property BOOL treatPlistAsXML; // @synthesize treatPlistAsXML;
@property BOOL validPlist; // @synthesize validPlist;
@property BOOL wellFormedXML; // @synthesize wellFormedXML;
- (void).cxx_destruct;
- (id)segment:(id)arg1 WithOptions:(unsigned long long)arg2 error:(id *)arg3;
- (id)docMetaInfoDictionaryForStringsWithError:(id *)arg1;
- (id)orderStringKeysIn:(struct _xmlNode *)arg1;
- (void)writeLOCXMLNodes:(id)arg1 toXmlNodePtr:(struct _xmlNode *)arg2;
- (void)removeAttributesAddedViaITSToNode:(struct _xmlNode *)arg1;
- (void)unwrapInlineTags:(id)arg1;
- (int)wrapInlineTags:(id)arg1 startingWithId:(int)arg2;
- (void)wrapInlineTags:(id)arg1;
- (id)stringForNode:(struct _xmlNode *)arg1 withChildrenFrom:(struct _xmlNode *)arg2 upToChild:(struct _xmlNode *)arg3 wrapInline:(BOOL)arg4;
- (id)stringForNode:(struct _xmlNode *)arg1 wrapInline:(BOOL)arg2;
- (BOOL)writeAsPlistTo:(id)arg1 withTranslation:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)writeTo:(id)arg1 withTranslation:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)createInternalGlossaryRelativeTo:(id)arg1 withError:(id *)arg2;
- (id)createInternalGlossaryWithError:(id *)arg1;
- (id)constructGlotPathWithDOM:(struct _xmlDoc *)arg1 forNode:(struct _xmlNode *)arg2;
- (id)createStringKeyIdValueDictFromDOM:(struct _xmlDoc *)arg1 selectedAttributes:(id)arg2 overrideIds:(id)arg3;
- (id)createStringKeyValueDictFromDOM:(struct _xmlDoc *)arg1 selectedAttributes:(id)arg2;
- (BOOL)inheritTranslateAttributesInDOM:(struct _xmlDoc *)arg1 error:(id *)arg2 ITSNamespace:(struct _xmlNs *)arg3;
- (void)addITSWithinTextAttributeToDOM:(struct _xmlDoc *)arg1 namespaces:(id)arg2 selectors:(id)arg3 selectedAttributes:(id)arg4 ITSNamespace:(struct _xmlNs *)arg5;
- (void)addITSTranslateAttributeToDOM:(struct _xmlDoc *)arg1 namespaces:(id)arg2 selectors:(id)arg3 selectedAttributes:(id)arg4 ITSNamespace:(struct _xmlNs *)arg5;
- (struct _xmlNs *)addITSNamespaceToDOM:(struct _xmlDoc *)arg1;
- (id)resolveURIRefInDocm:(struct _xmlDoc *)arg1 atNode:(struct _xmlNode *)arg2 relativePath:(id)arg3 baseURIUsedToRetrieveTheEntity:(id)arg4;
- (void)processITSrulesNodeInDom:(struct _xmlDoc *)arg1 atNode:(struct _xmlNode *)arg2 translateRules:(id)arg3 idRules:(id)arg4 withinTextRules:(id)arg5 namespaces:(id)arg6 baseURIUsedToRetrieveTheEntity:(id)arg7 processedURLs:(id)arg8;
- (void)processFileContainingITSrulesElementInDOM:(struct _xmlDoc *)arg1 atNode:(struct _xmlNode *)arg2 translateRules:(id)arg3 idRules:(id)arg4 withinTextRules:(id)arg5 namespaces:(id)arg6 baseURIUsedToRetrieveTheEntity:(id)arg7 processedURLs:(id)arg8;
- (void)applyLocalRules:(id)arg1 toDOM:(struct _xmlDoc *)arg2 ITSNamespace:(struct _xmlNs *)arg3;
- (id)obtainLocalRulesInDOM:(struct _xmlDoc *)arg1;
- (void)createITSTestSuiteOutput:(id)arg1 inheritedDOM:(struct _xmlDoc *)arg2 localizableAttributeNodes:(id)arg3;
- (id)localizableKeywordSupportedByGlot;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1 rulesFile:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;

@end

