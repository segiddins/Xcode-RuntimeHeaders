//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class NSString;

@interface IBDeviceRenderMode : NSObject <NSCopying>
{
    BOOL _isUnspecified;
    NSString *_identifier;
    NSString *_archivingName;
    NSString *_displayName;
    NSString *_resourceIdiomVariant;
}

+ (id)_renderModeWithExtension:(id)arg1;
+ (id)renderModeForIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *resourceIdiomVariant; // @synthesize resourceIdiomVariant=_resourceIdiomVariant;
@property(readonly, nonatomic) BOOL isUnspecified; // @synthesize isUnspecified=_isUnspecified;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *archivingName; // @synthesize archivingName=_archivingName;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)populateEnvironment:(id)arg1 launchContext:(id)arg2;
- (BOOL)isValidForBuildSettings:(id)arg1 error:(id *)arg2;
- (id)initWithExtension:(id)arg1;

@end

