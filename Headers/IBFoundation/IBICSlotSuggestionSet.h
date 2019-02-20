//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

@interface IBICSlotSuggestionSet : NSObject
{
    NSMutableDictionary *_userInfo;
    Class _slotClass;
    NSString *_section;
    NSString *_group;
    NSString *_title;
    NSString *_identifier;
    NSSet *_assetRepSlots;
    double _displayOrder;
    long long _counterpartCompositingMode;
}

+ (id)suggestionSetWithIdentifier:(id)arg1 slots:(id)arg2 section:(id)arg3 group:(id)arg4 title:(id)arg5 displayOrder:(double)arg6 expander:(id)arg7;
+ (id)suggestionSetWithIdentifier:(id)arg1 slots:(id)arg2 title:(id)arg3 displayOrder:(double)arg4 expander:(id)arg5;
@property(readonly) long long counterpartCompositingMode; // @synthesize counterpartCompositingMode=_counterpartCompositingMode;
@property(readonly) double displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly) NSSet *assetRepSlots; // @synthesize assetRepSlots=_assetRepSlots;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *group; // @synthesize group=_group;
@property(readonly) NSString *section; // @synthesize section=_section;
@property(readonly) Class slotClass; // @synthesize slotClass=_slotClass;
- (void).cxx_destruct;
- (id)uniqueValuesForSlotComponentClass:(Class)arg1;
- (void)ibic_generateSubNodes:(CDUnknownBlockType)arg1;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (BOOL)canRepresentSlots:(id)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (id)description;
@property(readonly, copy) NSSet *counterpartSuggestionSets;
- (void)setCounterpartCompositingMode:(long long)arg1;
@property(readonly) NSMutableDictionary *userInfo;
- (id)initWithIdentifier:(id)arg1 slots:(id)arg2 section:(id)arg3 group:(id)arg4 title:(id)arg5 displayOrder:(double)arg6 expander:(id)arg7;

@end
