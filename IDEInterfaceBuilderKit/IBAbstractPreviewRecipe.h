//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBDeviceConfiguration, IBMemberConfiguration, IBTargetRuntime;

@interface IBAbstractPreviewRecipe : NSObject
{
}

@property(readonly) IBDeviceConfiguration *deviceConfiguration;
@property(readonly) IBMemberConfiguration *memberConfiguration;
@property(readonly) IBTargetRuntime *targetRuntime;
- (id)propertyListRepresentation;
- (id)initWithPropertyList:(id)arg1;

@end

