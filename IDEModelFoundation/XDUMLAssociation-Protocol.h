//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLClassifier-Protocol.h>
#import <IDEModelFoundation/XDUMLRelationship-Protocol.h>

@class NSArray;
@protocol XDUMLProperty;

@protocol XDUMLAssociation <XDUMLClassifier, XDUMLRelationship>
- (void)addMemberEnd:(id <XDUMLProperty>)arg1;
- (NSArray *)ownedEnds;
- (NSArray *)memberEnds;
- (BOOL)isDerived;
@end

