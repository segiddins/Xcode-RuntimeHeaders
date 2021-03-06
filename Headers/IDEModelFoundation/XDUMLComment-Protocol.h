//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEModelFoundation/XDUMLElement-Protocol.h>

@class NSArray, NSString;
@protocol XDUMLElement;

@protocol XDUMLComment <XDUMLElement>
- (void)removeObjectFromAnnotatedElementsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id <XDUMLElement>)arg1 inAnnotatedElementsAtIndex:(unsigned long long)arg2;
- (void)setBody:(NSString *)arg1;
- (NSArray *)annotatedElements;
- (NSString *)body;
@end

