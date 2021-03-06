//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBreakpoint.h>

@class NSSet, NSString;

@interface IDERuntimeIssueBreakpoint : IDEBreakpoint
{
    BOOL _isRuntimeIssue;
    NSSet *_categoriesAsSet;
    unsigned long long _type;
    NSString *_categories;
}

+ (id)displayNameForType:(unsigned long long)arg1;
+ (id)supportedTypes;
+ (id)propertiesAffectingPersistenceState;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *categories; // @synthesize categories=_categories;
@property unsigned long long type; // @synthesize type=_type;
- (BOOL)isRuntimeIssue;
@property(readonly, nonatomic) NSSet *categoriesAsSet; // @synthesize categoriesAsSet=_categoriesAsSet;
- (void)setCategoriesFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
@property(readonly, nonatomic) BOOL isSanitizerBreakpoint;
- (id)accessibilityDescription;
- (id)displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_dvt_RuntimeIssueBreakpointCommonInit;
- (id)init;

@end

