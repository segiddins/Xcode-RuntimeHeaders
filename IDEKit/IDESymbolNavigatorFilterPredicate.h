//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSPredicate.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSSet;

@interface IDESymbolNavigatorFilterPredicate : NSPredicate <NSCopying>
{
    NSSet *_symbolIDs;
}

- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSymbolIdentifers:(id)arg1;

@end

