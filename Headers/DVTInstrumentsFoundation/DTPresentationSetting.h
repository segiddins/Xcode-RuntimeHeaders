//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTPresentationSetting : NSObject
{
    NSString *_shortName;
    NSString *_displayName;
    NSString *_tooltip;
}

@property(readonly, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
- (void).cxx_destruct;
- (id)initWithShortName:(id)arg1 displayName:(id)arg2 tooltip:(id)arg3;

@end

