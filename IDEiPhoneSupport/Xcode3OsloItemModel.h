//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEProjectItemModel.h>

@class IDEAppIDItemIdentifiersItemModelSet;

@interface Xcode3OsloItemModel : IDEProjectItemModel
{
    IDEAppIDItemIdentifiersItemModelSet *_OMCs;
}

@property(retain) IDEAppIDItemIdentifiersItemModelSet *OMCs; // @synthesize OMCs=_OMCs;
- (void).cxx_destruct;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (void)modelWasDisabled;
- (void)modelWasEnabledWithContext:(id)arg1;
- (void)targetCoordinatorChanged:(id)arg1;
- (void)readValuesFromEntitlements;
- (void)publishStateWithContext:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

