//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/XDUMLDependency-Protocol.h>

@protocol XDUMLNamedElement;

@protocol XDUMLAbstraction <XDUMLDependency>
- (void)addClient:(id <XDUMLNamedElement>)arg1;
- (void)addSupplier:(id <XDUMLNamedElement>)arg1;
@end
