//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelEditor/NSObject-Protocol.h>

@class DVTDocumentLocation, DVTFilePath, NSURL;
@protocol IDEIndexSymbol;

@protocol IDEIndexSymbolOccurrence <NSObject>
@property(readonly) DVTDocumentLocation *location;
@property(readonly) NSURL *moduleURL;
@property(readonly) DVTFilePath *file;
@property(readonly) long long role;
- (id <IDEIndexSymbol>)containingSymbol;
- (id <IDEIndexSymbol>)correspondingSymbol;
@end

