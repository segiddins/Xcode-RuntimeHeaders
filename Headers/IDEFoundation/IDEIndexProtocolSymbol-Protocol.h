//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEIndexContainerSymbol-Protocol.h>

@class IDEIndexCollection;

@protocol IDEIndexProtocolSymbol <IDEIndexContainerSymbol>
- (IDEIndexCollection *)implementingSymbols;
- (IDEIndexCollection *)implementingClasses;
- (IDEIndexCollection *)subProtocols;
- (IDEIndexCollection *)properties;
- (IDEIndexCollection *)instanceMethods;
- (IDEIndexCollection *)classMethods;
@end

