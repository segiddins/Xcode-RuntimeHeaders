//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol DVTMacroExpansion;

@interface XCCommandLineFragmentGenerator : NSObject
{
    NSDictionary *_commandLineTemplatesByLiteralValue;
    NSArray<DVTMacroExpansion> *_defaultCommandLineTemplate;
}

- (void).cxx_destruct;
@property(readonly) NSArray<DVTMacroExpansion> *defaultCommandLineTemplate; // @synthesize defaultCommandLineTemplate=_defaultCommandLineTemplate;
@property(readonly) NSDictionary *commandLineTemplatesByLiteralValue; // @synthesize commandLineTemplatesByLiteralValue=_commandLineTemplatesByLiteralValue;
- (id)generatedCommandLineFragmentForLiteralStringValue:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)init;
- (id)initFromPropertyListTemplate:(id)arg1 error:(id *)arg2;

@end

