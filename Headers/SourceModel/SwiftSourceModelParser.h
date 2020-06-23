//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SourceModel/SourceModelParser.h>

@interface SwiftSourceModelParser : SourceModelParser
{
    void *_lexer;
}

+ (id)createTerminalNodeForToken:(CDStruct_4d612623 *)arg1 scopeProductionRule:(id *)arg2;
+ (id)languageSpecification;
- (void)_endLexerMode:(unsigned long long)arg1;
- (void)_beginLexerMode:(unsigned long long)arg1;
- (BOOL)_getNextToken:(CDStruct_4d612623 *)arg1 temporaryFlags:(unsigned long long)arg2;
- (unsigned long long)_currentLocation;
- (void)_setCurrentLocation:(unsigned long long)arg1;
- (void)_resetLexerWithInputString:(id)arg1;
- (id)init;

@end

