//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class NSString;

@interface IBDeviceAppearance : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_archivingName;
    NSString *_displayName;
    NSString *_imageName;
}

+ (id)appearanceWithIdentifier:(id)arg1 archivingName:(id)arg2 displayName:(id)arg3 imageName:(id)arg4;
+ (id)defaultAppearance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *archivingName; // @synthesize archivingName=_archivingName;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 archivingName:(id)arg2 displayName:(id)arg3 imageName:(id)arg4;

@end
