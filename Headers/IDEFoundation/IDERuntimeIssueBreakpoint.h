//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBreakpoint.h>

@interface IDERuntimeIssueBreakpoint : IDEBreakpoint
{
    unsigned long long _type;
}

+ (id)displayNameForType:(unsigned long long)arg1;
+ (id)supportedTypes;
+ (id)propertiesAffectingPersistenceState;
+ (void)initialize;
@property unsigned long long type; // @synthesize type=_type;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
@property(readonly, nonatomic) BOOL isSanitizerBreakpoint;
- (id)accessibilityDescription;
- (id)displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

