//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
