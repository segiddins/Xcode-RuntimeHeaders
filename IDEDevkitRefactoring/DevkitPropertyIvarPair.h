//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DevkitDeclaration, DevkitPropertyDeclaration;

@interface DevkitPropertyIvarPair : NSObject
{
    DevkitPropertyDeclaration *_property;
    DevkitDeclaration *_ivar;
}

@property(retain) DevkitDeclaration *ivar; // @synthesize ivar=_ivar;
@property(retain) DevkitPropertyDeclaration *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)initWithProperty:(id)arg1 ivar:(id)arg2;

@end

