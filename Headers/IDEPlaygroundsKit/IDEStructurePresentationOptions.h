//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEStructurePresentationOptions : NSObject
{
    BOOL _showsNames;
    BOOL _pushOptionsToChildStructures;
    NSString *_leftContainerSymbol;
    NSString *_rightContainerSymbol;
    NSString *_separatorString;
}

- (void).cxx_destruct;
@property BOOL pushOptionsToChildStructures; // @synthesize pushOptionsToChildStructures=_pushOptionsToChildStructures;
@property(readonly) BOOL showsNames; // @synthesize showsNames=_showsNames;
@property(readonly) NSString *separatorString; // @synthesize separatorString=_separatorString;
@property(readonly) NSString *rightContainerSymbol; // @synthesize rightContainerSymbol=_rightContainerSymbol;
@property(readonly) NSString *leftContainerSymbol; // @synthesize leftContainerSymbol=_leftContainerSymbol;
- (id)initWithLeftContainerSymbol:(id)arg1 rightContainerSymbol:(id)arg2 separatorString:(id)arg3 showsNames:(BOOL)arg4;

@end

