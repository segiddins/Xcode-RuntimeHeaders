//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTPlugInManager;

@interface DTExtension : NSObject
{
    id _extensionData;
    DTPlugInManager *_plugInManager;
    id _realExtension;
    unsigned int _extensionFlags;
    void *_reserved[3];
}

- (void)didAccessValueForKey:(id)arg1;
- (void)willAccessValueForKey:(id)arg1;
- (id)primitiveValueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)extensionElement;
- (id)derivedExtensions;
- (id)basedOnExtension;
- (id)extensionPoint;
- (id)plugIn;
- (BOOL)isValid;
- (id)bundle;
- (id)name;
- (id)version;
- (id)identifier;
- (id)extensionData;
- (void)dealloc;
- (id)initWithExtensionData:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)_realExtension;
- (void)_fireExtensionFault;
- (BOOL)_isExtensionFault;
- (id)_initWithExtensionDescription:(id)arg1 plugInManager:(id)arg2 isExtensionFault:(BOOL)arg3;

@end

