//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

@interface IBICSizeClass : IBICSlotComponent
{
    long long _coreUISizeClass;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 coreUISizeClass:(long long)arg4 displayOrder:(double)arg5;
@property(readonly, nonatomic) long long coreUISizeClass; // @synthesize coreUISizeClass=_coreUISizeClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 coreUISizeClass:(long long)arg4 displayOrder:(double)arg5;

@end

