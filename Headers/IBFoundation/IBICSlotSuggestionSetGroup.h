//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBICSlotSuggestionSetGroup : NSObject
{
    Class _slotClass;
    long long _mode;
    NSString *_sectionIdentifier;
    NSString *_title;
    NSString *_identifier;
    double _displayOrder;
}

- (void).cxx_destruct;
@property(readonly) double displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly) long long mode; // @synthesize mode=_mode;
@property(readonly) Class slotClass; // @synthesize slotClass=_slotClass;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (long long)compareDisplayOrder:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 mode:(long long)arg2 slotClass:(Class)arg3 sectionID:(id)arg4 title:(id)arg5 displayOrder:(double)arg6;

@end

