//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class NSString;

@interface IBDeviceOrientation : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_displayName;
}

+ (id)orientationForIdentifier:(id)arg1;
+ (id)_orientationsByIdentifiers;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)nextOrientationForPreview;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExtension:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2;

@end

