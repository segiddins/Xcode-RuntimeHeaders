//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

#import <IBFoundation/IBICCoreUISlotComponent-Protocol.h>

@class NSString;

@interface IBICLocale : IBICSlotComponent <IBICCoreUISlotComponent>
{
    long long _coreUIValue;
}

+ (id)displayNameForLocaleIdentifier:(id)arg1;
+ (id)createDynamicComponentWithIdentifier:(id)arg1;
+ (BOOL)createsComponentsDynamically;
+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 displayOrder:(double)arg4;
+ (id)developmentLanguageLocale;
+ (id)displayName;
+ (id)contentsJSONKey;
+ (id)unspecifiedValuePlaceholder;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
@property(nonatomic) long long coreUIValue; // @synthesize coreUIValue=_coreUIValue;
- (long long)componentID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

