//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Localization/LOCJSParsedLine.h>

@interface LOCJSColonSeparatedKeyValueLine : LOCJSParsedLine
{
}

- (id)composeLine;
- (id)stringDictValue;
- (id)legacyStringDictKey;
- (id)stringDictKey;
- (void)addStringKeyValuePairToDict:(id)arg1;
- (void)parse;
- (BOOL)hasStringEntry;
- (id)initWithLine:(id)arg1 autoEscapeUnescape:(BOOL)arg2;

@end

