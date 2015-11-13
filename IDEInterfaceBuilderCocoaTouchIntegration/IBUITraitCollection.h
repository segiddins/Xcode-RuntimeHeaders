//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBBinaryArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class NSString;

@interface IBUITraitCollection : NSObject <IBBinaryArchiving, NSCopying>
{
    long long _horizontalSizeClass;
    long long _verticalSizeClass;
}

+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1 verticalSizeClass:(long long)arg2;
@property(readonly, nonatomic) long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass; // @synthesize horizontalSizeClass=_horizontalSizeClass;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithHorizontalSizeClass:(long long)arg1 verticalSizeClass:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

