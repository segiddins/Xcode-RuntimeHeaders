//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTMacroExpansionString.h>

@interface DVTMacroExpansionString_Literal : DVTMacroExpansionString
{
    unsigned long long _hashValue;
}

+ (id)newWithLiteralString:(id)arg1;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (unsigned long long)hash;
- (BOOL)dvt_isLiteral;
- (id)initWithLiteralString:(id)arg1;

@end
