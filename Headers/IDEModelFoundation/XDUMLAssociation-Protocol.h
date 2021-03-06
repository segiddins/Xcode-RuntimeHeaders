//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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

