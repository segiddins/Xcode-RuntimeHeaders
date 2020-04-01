//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/IDEIndexSymbolOccurrence-Protocol.h>

@class DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, IDEIndexCollection, NSString, _TtC13DVTFoundation9DVTSymbol;
@protocol IDEIndexContainerSymbol, IDEIndexSymbol, IDEIndexSymbolOccurrence;

@protocol IDEIndexSymbol <IDEIndexSymbolOccurrence>
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
@property(nonatomic, readonly) BOOL navigationPrefersDefinition;
@property(nonatomic, readonly) BOOL hasOccurrence;
@property(nonatomic, readonly) BOOL isSystem;
@property(nonatomic, readonly) BOOL isVirtual;
@property(nonatomic, readonly) NSString *moduleName;
@property(nonatomic, readonly) _TtC13DVTFoundation9DVTSymbol *identifier;
@property(nonatomic, readonly) NSString *resolution;
@property(nonatomic, readonly) DVTSourceCodeLanguage *symbolLanguage;
@property(nonatomic, readonly) DVTSourceCodeSymbolKind *symbolKind;
@property(nonatomic, readonly) NSString *name;
@end

