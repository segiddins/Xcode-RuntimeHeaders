//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/XDUMLClassInterfaceCommons-Protocol.h>

@class NSArray;
@protocol XDUMLImplementation;

@protocol XDUMLInterface <XDUMLClassInterfaceCommons>
- (void)implementorRemoved:(id <XDUMLImplementation>)arg1;
- (void)implementorAdded:(id <XDUMLImplementation>)arg1;
- (NSArray *)implementors;
- (NSArray *)redefinedInterface;
- (NSArray *)nestedInterface;
- (NSArray *)ownedOperations;
- (NSArray *)ownedAttributes;
@end

