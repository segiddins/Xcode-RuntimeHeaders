//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEQuickHelp/IDEIndexSymbol-Protocol.h>

@class IDEIndexCollection;
@protocol IDEIndexPropertySymbol;

@protocol IDEIndexCallableSymbol <IDEIndexSymbol>
@property(readonly, nonatomic) id <IDEIndexPropertySymbol> property;
@property(readonly, nonatomic) IDEIndexCollection *overriddenSymbols;
@end
