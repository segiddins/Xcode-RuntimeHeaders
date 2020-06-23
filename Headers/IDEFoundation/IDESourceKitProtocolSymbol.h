//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESourceKitContainerSymbol.h>

#import <IDEFoundation/IDEIndexProtocolSymbol-Protocol.h>

@class DVTDocumentLocation, DVTFilePath, DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, DVTSymbol, NSString, NSURL;

@interface IDESourceKitProtocolSymbol : IDESourceKitContainerSymbol <IDEIndexProtocolSymbol>
{
}

- (BOOL)isKindOfClass:(Class)arg1;
- (id)implementingClasses;
- (id)subProtocols;
- (id)properties;
- (id)instanceMethods;
- (id)classMethods;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTFilePath *file;
@property(readonly) BOOL hasOccurrence;
@property(readonly) unsigned long long hash;
@property(readonly) DVTSymbol *identifier;
@property(readonly) BOOL isSystem;
@property(readonly) BOOL isVirtual;
@property(readonly) DVTDocumentLocation *location;
@property(readonly) NSString *moduleName;
@property(readonly) NSURL *moduleURL;
@property(readonly) NSString *name;
@property(readonly) BOOL navigationPrefersDefinition;
@property(readonly) NSString *resolution;
@property(readonly) long long role;
@property(readonly) Class superclass;
@property(readonly) DVTSourceCodeSymbolKind *symbolKind;
@property(readonly) DVTSourceCodeLanguage *symbolLanguage;

@end

