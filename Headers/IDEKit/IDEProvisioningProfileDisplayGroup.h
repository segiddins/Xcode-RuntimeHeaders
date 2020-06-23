//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEProvisioningProfileNameDisambiguator, NSOrderedSet;

@interface IDEProvisioningProfileDisplayGroup : NSObject
{
    IDEProvisioningProfileNameDisambiguator *_disambiguator;
    NSOrderedSet *_eligibleProvisioningProfiles;
    NSOrderedSet *_ineligibleProvisioningProfiles;
}

+ (id)_unionOrderedSetWithMembersFromSourceSet:(id)arg1 otherSet:(id)arg2;
+ (id)groupFromEligibleProvisioningProfiles:(id)arg1 ineligibleProvisioningProfiles:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOrderedSet *ineligibleProvisioningProfiles; // @synthesize ineligibleProvisioningProfiles=_ineligibleProvisioningProfiles;
@property(readonly, nonatomic) NSOrderedSet *eligibleProvisioningProfiles; // @synthesize eligibleProvisioningProfiles=_eligibleProvisioningProfiles;
- (id)groupByMergingSelfWithOtherGroup:(id)arg1;
- (id)displayNameForProfile:(id)arg1;
- (id)initWithEligibleProfiles:(id)arg1 ineligibleProfiles:(id)arg2;
- (BOOL)_wantsIneligibleMenuItemHeader;
- (BOOL)_wantsEligibleMenuItemHeader;
- (id)_profileMenuItemForProfile:(id)arg1 wantsIndentation:(BOOL)arg2 wantsIcon:(BOOL)arg3;
- (id)_headerMenuItemForProfileSet:(id)arg1;
- (id)_menuItemsForProfileSet:(id)arg1 withIcons:(BOOL)arg2;
- (id)menuItemsForDisplayGroupWithIcons:(BOOL)arg1;
- (id)menuItemsForDisplayGroup;

@end

