//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEModelFoundation/XDUMLMultiplicityElement-Protocol.h>
#import <IDEModelFoundation/XDUMLNamedElement-Protocol.h>

@protocol XDUMLType;

@protocol XDUMLTypedElement <XDUMLNamedElement, XDUMLMultiplicityElement>
- (void)setType:(id <XDUMLType>)arg1;
- (id <XDUMLType>)type;
@end

