//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@class NSImage;

@interface DVTFileIconCreatorImageRep : NSImageRep
{
    BOOL _isDirty;
    BOOL _isMissing;
    NSImage *_badgeIcon;
    NSImage *_baseIcon;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isMissing; // @synthesize isMissing=_isMissing;
@property(nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
@property(retain, nonatomic) NSImage *baseIcon; // @synthesize baseIcon=_baseIcon;
@property(retain, nonatomic) NSImage *badgeIcon; // @synthesize badgeIcon=_badgeIcon;
- (BOOL)draw;
- (void)setbadgeIcon:(id)arg1;

@end

