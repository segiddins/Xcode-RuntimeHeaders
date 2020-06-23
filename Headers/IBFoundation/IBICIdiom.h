//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

#import <IBFoundation/IBICCoreUISlotComponent-Protocol.h>

@class NSString;

@interface IBICIdiom : IBICSlotComponent <IBICCoreUISlotComponent>
{
    BOOL _isMarketingIdiom;
    NSString *_platform;
    long long _rawCoreUIIdiom;
    NSString *_infoPlistSuffix;
}

+ (id)identifierFromFileName:(id)arg1 inRange:(struct _NSRange *)arg2;
+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 isMarketingIdiom:(BOOL)arg5 coreUIIdiom:(long long)arg6 infoPlistSuffix:(id)arg7 displayOrder:(double)arg8;
+ (id)displayName;
+ (id)contentsJSONKey;
+ (id)unspecifiedValuePlaceholder;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
- (void).cxx_destruct;
@property(readonly) BOOL isMarketingIdiom; // @synthesize isMarketingIdiom=_isMarketingIdiom;
@property(readonly) NSString *infoPlistSuffix; // @synthesize infoPlistSuffix=_infoPlistSuffix;
@property(readonly) long long rawCoreUIIdiom; // @synthesize rawCoreUIIdiom=_rawCoreUIIdiom;
@property(readonly) NSString *platform; // @synthesize platform=_platform;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long coreUIValue;
- (BOOL)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 isMarketingIdiom:(BOOL)arg5 coreUIIdiom:(long long)arg6 infoPlistSuffix:(id)arg7 displayOrder:(double)arg8;
- (long long)componentID;
- (long long)coreUIIdiomForCompilerOptions:(id)arg1 isIcon:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

