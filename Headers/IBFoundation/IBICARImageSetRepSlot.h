//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlot.h>

@class IBICIdiom;

@interface IBICARImageSetRepSlot : IBICSlot
{
    IBICIdiom *_idiom;
}

+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)orderedComponentClasses;
+ (id)slotWithIdiom:(id)arg1;
+ (id)slot;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)slotFilterForIdioms:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (void)captureComponents;

@end

