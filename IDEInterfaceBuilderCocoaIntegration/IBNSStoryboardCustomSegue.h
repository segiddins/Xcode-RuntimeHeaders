//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSStoryboardAbstractTriggeredSegue.h>

#import <IDEInterfaceBuilderCocoaIntegration/NSCoding-Protocol.h>

@interface IBNSStoryboardCustomSegue : IBNSStoryboardAbstractTriggeredSegue <NSCoding>
{
}

+ (id)classIdentifier;
+ (BOOL)wantsDefaultCustomClassCompatibilityWarning;
- (id)instantiateSegueTemplate;
- (id)badgeImage;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

