//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class IDEAppIDItemIdentifiersItemModelSet;

@interface Xcode3ApplicationGroupsItemModel : IDEProjectItemModel
{
    IDEAppIDItemIdentifiersItemModelSet *_applicationGroups;
}

+ (id)coalescableReadOnlyKeyPaths;
@property(retain) IDEAppIDItemIdentifiersItemModelSet *applicationGroups; // @synthesize applicationGroups=_applicationGroups;
- (void).cxx_destruct;
- (id)coalescableWriteableKeyPathToDataSource;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (void)targetCoordinatorsChanged:(id)arg1;
- (void)readValuesFromEntitlements;
@property(readonly) BOOL requiresPortalIdentifiers;
- (void)primitiveInvalidate;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

