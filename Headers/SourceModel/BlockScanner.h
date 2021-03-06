//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SourceModel/SourceScanner.h>

@class NSMutableArray, NSString;

@interface BlockScanner : SourceScanner
{
    NSString *startString;
    long long startToken;
    unsigned short startChar;
    unsigned short escapeChar;
    unsigned int recursive:1;
    unsigned int parseEndBeforeIncludedRules:1;
    unsigned int caseSensitive:1;
    unsigned int isVolatile:1;
    NSMutableArray *endRules;
    NSMutableArray *altEndRules;
    long long altToken;
}

- (void).cxx_destruct;
- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;
- (id)parseRecursive:(id)arg1 withContext:(id)arg2 depth:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;
- (int)actionForEndToken:(id)arg1 inContext:(id)arg2 inputStream:(id)arg3;
- (id)matchingRule:(long long)arg1 isAltRule:(char *)arg2;
- (long long)nextToken:(id)arg1 withItem:(id)arg2 inTree:(id)arg3 withContext:(id)arg4 initialToken:(long long)arg5 insideBlock:(BOOL)arg6 range:(struct _NSRange)arg7 dirtyRange:(struct _NSRange *)arg8 reusedToken:(char *)arg9;
- (long long)tokenForRule:(id)arg1 initialToken:(long long)arg2 inputStream:(id)arg3 newLocation:(unsigned long long)arg4;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (void)parseRule:(id)arg1 into:(id)arg2 acceptEndToken:(BOOL)arg3;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

