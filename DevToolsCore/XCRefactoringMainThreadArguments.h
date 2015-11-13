//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, XCRefactoringParser;

@interface XCRefactoringMainThreadArguments : NSObject
{
    NSDictionary *_initialInput;
    XCRefactoringParser *_parser;
    NSDictionary *_userInput;
}

- (void)dealloc;
- (id)initWithInitialInput:(id)arg1 parser:(id)arg2;
- (void)setUserInput:(id)arg1;
- (id)userInput;
- (id)parser;
- (id)project;
- (id)selectionSymbolInfo;
- (struct _XCRefactoringLineInfo)lineInfo;
- (id)filePath;

@end

