//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLBehavioredClassifier-Protocol.h>

@class NSArray;
@protocol XDUMLClass;

@protocol XDUMLClass <XDUMLBehavioredClassifier>
- (void)setParentClass:(id <XDUMLClass>)arg1;
- (id <XDUMLClass>)parentClass;
- (NSArray *)superClasses;
- (NSArray *)ownedOperations;
- (NSArray *)ownedAttributes;
@end

