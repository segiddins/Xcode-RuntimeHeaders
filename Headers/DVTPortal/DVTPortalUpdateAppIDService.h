//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTPortal/DVTPortalAppIDService.h>

@class NSDictionary;

@interface DVTPortalUpdateAppIDService : DVTPortalAppIDService
{
    NSDictionary *_featureKeyToSanitizedPlistValue;
}

+ (id)updateAppIDServiceWithTeam:(id)arg1 program:(id)arg2 portalID:(id)arg3 features:(id)arg4;
+ (id)_serviceIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *featureKeyToSanitizedPlistValue; // @synthesize featureKeyToSanitizedPlistValue=_featureKeyToSanitizedPlistValue;

@end

