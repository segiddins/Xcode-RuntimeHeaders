//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEIndexSymbol, NSArray;

__attribute__((visibility("hidden")))
@interface IDEIndexAvailableRefactoringsResult : NSObject
{
    NSArray *_refactorings;
    IDEIndexSymbol *_symbol;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
@property(readonly, nonatomic) NSArray *refactorings; // @synthesize refactorings=_refactorings;
- (id)initWithRefactorings:(id)arg1 symbol:(id)arg2;

@end
