//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IDEIndexSymbolOccurrence-Protocol.h>

@class DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, DVTSymbol, IDEIndexCollection, NSString;
@protocol IDEIndexContainerSymbol, IDEIndexSymbol, IDEIndexSymbolOccurrence;

@protocol IDEIndexSymbol <IDEIndexSymbolOccurrence>
@property(readonly) BOOL navigationPrefersDefinition;
@property(readonly) BOOL hasOccurrence;
@property(readonly) BOOL isSystem;
@property(readonly) BOOL isVirtual;
@property(readonly) NSString *moduleName;
@property(readonly) DVTSymbol *identifier;
@property(readonly) NSString *resolution;
@property(readonly) DVTSourceCodeLanguage *symbolLanguage;
@property(readonly) DVTSourceCodeSymbolKind *symbolKind;
@property(readonly) NSString *name;
- (NSString *)completionString;
- (NSString *)qualifiedDisplayName;
- (NSString *)displayName;
- (id <IDEIndexSymbol>)ibRelationClass;
- (IDEIndexCollection *)references;
- (IDEIndexCollection *)referencingFiles;
- (id <IDEIndexContainerSymbol>)containerSymbol;
- (IDEIndexCollection *)containerSymbols;
- (IDEIndexCollection *)definitions;
- (IDEIndexCollection *)declarations;
- (IDEIndexCollection *)occurrences;
- (id <IDEIndexSymbolOccurrence>)occurrence;
- (id <IDEIndexSymbolOccurrence>)modelOccurrence;
- (BOOL)isInProject;
@end

