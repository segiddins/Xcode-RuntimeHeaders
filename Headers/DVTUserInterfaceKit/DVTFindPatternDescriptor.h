//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTFindRegularExpressionDescriptor.h>

#import <DVTUserInterfaceKit/DVTTextlikeFindDescriptor-Protocol.h>

@class DVTFindPatternComponents, NSString;

@interface DVTFindPatternDescriptor : DVTFindRegularExpressionDescriptor <DVTTextlikeFindDescriptor>
{
    unsigned long long _matchStyle;
    DVTFindPatternComponents *_findPatternComponents;
}

+ (id)keyPathsForValuesAffectingDisplayAttributedString;
- (void).cxx_destruct;
@property(readonly) DVTFindPatternComponents *findPatternComponents; // @synthesize findPatternComponents=_findPatternComponents;
@property(readonly) unsigned long long matchStyle; // @synthesize matchStyle=_matchStyle;
- (id)displayAttributedString;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithPatternComponents:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

