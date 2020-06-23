//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/NSCopying-Protocol.h>
#import <DVTFoundation/NSObject-Protocol.h>

@class DVTMacroExpansionScope, NSArray, NSString;
@protocol DVTMacroExpansion;

@protocol DVTMacroExpansion <NSObject, NSCopying>
- (NSString *)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (NSString<DVTMacroExpansion> *)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (NSArray *)dvt_evaluateAsStringListInScope:(DVTMacroExpansionScope *)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (NSString *)dvt_evaluateAsStringInScope:(DVTMacroExpansionScope *)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
@end

