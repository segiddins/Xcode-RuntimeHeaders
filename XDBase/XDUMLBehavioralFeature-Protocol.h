//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/XDUMLFeature-Protocol.h>
#import <XDBase/XDUMLNamespace-Protocol.h>

@class NSArray;

@protocol XDUMLBehavioralFeature <XDUMLFeature, XDUMLNamespace>
- (NSArray *)raisedExceptions;
- (NSArray *)returnResult;
- (NSArray *)formalParameters;
- (NSArray *)parameters;
@end

