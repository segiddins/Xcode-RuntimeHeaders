//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBSourceCodeParser.h>

@interface IBTaskBasedParser : IBSourceCodeParser
{
}

- (id)parseData:(id)arg1 fromFile:(id)arg2 withToolchainIdentifiers:(id)arg3 errors:(id *)arg4;
- (id)taskForParsingReturningError:(id *)arg1;
- (id)processParserOutput:(id)arg1 fromFile:(id)arg2 errors:(id *)arg3;
- (id)parserLaunchArguments;
- (id)parserLaunchPath;

@end

