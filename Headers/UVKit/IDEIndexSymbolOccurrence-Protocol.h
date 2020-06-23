//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UVKit/NSObject-Protocol.h>

@class DVTDocumentLocation, DVTFilePath, NSURL;
@protocol IDEIndexSymbol;

@protocol IDEIndexSymbolOccurrence <NSObject>
- (id <IDEIndexSymbol>)containingSymbol;
- (id <IDEIndexSymbol>)correspondingSymbol;
@property(nonatomic, readonly) DVTDocumentLocation *location;
@property(nonatomic, readonly) NSURL *moduleURL;
@property(nonatomic, readonly) DVTFilePath *file;
@property(nonatomic, readonly) long long role;
@end

