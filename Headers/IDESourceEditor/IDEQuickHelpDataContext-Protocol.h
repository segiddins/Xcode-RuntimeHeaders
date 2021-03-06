//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, NSArray, NSXMLElement;
@protocol IDEIndexSymbol;

@protocol IDEQuickHelpDataContext <NSObject>
- (void)enumerateRelatedDeclarationsUsingBlock:(void (^)(NSXMLElement *, char *))arg1;
- (void)enumerateOverriddenSymbolResolutionsUsingBlock:(void (^)(NSString *, char *))arg1;
@property(nonatomic, readonly) DVTSourceCodeLanguage *preferredLanguage;
@property(nonatomic, readonly) NSArray *usrs;
@property(nonatomic, readonly) char *documentationJSON;
@property(nonatomic, readonly) BOOL symbolKindRepresentsAModule;
@property(nonatomic, readonly) DVTSourceCodeSymbolKind *documentationSymbolKind;
@property(nonatomic, readonly) NSXMLElement *documentationMarkup;
@property(nonatomic, readonly) NSXMLElement *declarationSymbolMarkup;
@property(nonatomic, readonly) id <IDEIndexSymbol> indexSymbol;
@end

