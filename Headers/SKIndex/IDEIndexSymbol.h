//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SKIndex/IDEIndexSymbolOccurrence.h>

@class DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, IDEIndexContainerSymbol, NSObject, NSString;
@protocol IDEIndexGlobalQueryProvider;

@interface IDEIndexSymbol : IDEIndexSymbolOccurrence
{
    NSString *_name;
    NSString *_displayName;
    NSString *_qualifiedDisplayName;
    DVTSourceCodeSymbolKind *_symbolKind;
    DVTSourceCodeLanguage *_symbolLanguage;
    NSString *_resolution;
    BOOL _haveModelOccurrence;
    BOOL _lookedForContainerSymbol;
    BOOL _isVirtual;
    BOOL _isSystem;
    NSString *_moduleName;
    IDEIndexContainerSymbol *_containerSymbol;
}

+ (id)newSymbolOfKind:(id)arg1 language:(id)arg2 name:(id)arg3 moduleName:(id)arg4 resolution:(id)arg5 isVirtual:(BOOL)arg6 role:(long long)arg7 isImplicit:(BOOL)arg8 isSystemLocation:(BOOL)arg9 location:(id)arg10 symbolProviderKind:(int)arg11 forQueryProvider:(id)arg12;
+ (id)newSymbolOfKind:(id)arg1 language:(id)arg2 name:(id)arg3 resolution:(id)arg4 isVirtual:(BOOL)arg5 role:(long long)arg6 isImplicit:(BOOL)arg7 isSystemLocation:(BOOL)arg8 location:(id)arg9 forQueryProvider:(id)arg10;
+ (id)newSymbolOfKind:(id)arg1 language:(id)arg2 name:(id)arg3 resolution:(id)arg4 forQueryProvider:(id)arg5;
+ (Class)classForSymbolKind:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) BOOL isSystem; // @synthesize isSystem=_isSystem;
@property(nonatomic) BOOL isVirtual; // @synthesize isVirtual=_isVirtual;
@property(readonly, nonatomic) DVTSourceCodeLanguage *symbolLanguage; // @synthesize symbolLanguage=_symbolLanguage;
@property(readonly, nonatomic) DVTSourceCodeSymbolKind *symbolKind; // @synthesize symbolKind=_symbolKind;
@property(readonly, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)qualifiedDisplayName;
- (id)displayName;
- (id)references;
- (id)referencingFiles;
- (id)propertyForIVar;
- (id)specializations;
- (id)specializesSymbols;
- (id)overridingSymbolOccurrencesBySymbol:(id)arg1;
- (id)overridingSymbols;
- (id)overriddenSymbols;
- (id)containerSymbol;
- (id)containerSymbols;
- (id)definitions;
- (id)declarations;
- (id)occurrences;
- (id)correspondingSymbol;
- (id)location;
- (id)file;
- (long long)column;
- (long long)lineNumber;
- (BOOL)isImplicit;
- (long long)role;
- (id)occurrence;
- (void)setContainerSymbol:(id)arg1;
@property(readonly, nonatomic) BOOL hasOccurrence;
- (void)setModelOccurrenceRole:(long long)arg1 isImplicit:(BOOL)arg2 isSystem:(BOOL)arg3 location:(id)arg4;
- (void)setModelOccurrence:(id)arg1;
- (id)modelOccurrence;
- (BOOL)isInProject;
@property(readonly, nonatomic) BOOL navigationPrefersDefinition;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)setKind:(id)arg1 language:(id)arg2 name:(id)arg3 resolution:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSObject<IDEIndexGlobalQueryProvider> *queryProvider; // @dynamic queryProvider;

@end

