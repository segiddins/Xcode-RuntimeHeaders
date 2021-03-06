//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>
#import <IDEFoundation/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface IDEBreakpointAction : NSObject <DVTXMLUnarchiving, NSCopying>
{
    NSArray *_expressions;
    BOOL _displayable;
    NSString *_displayName;
    NSString *_filterableText;
}

+ (id)_expressionsInString:(id)arg1;
+ (id)propertiesAffectingPersistenceState;
+ (id)_replace:(id)arg1 with:(id)arg2 inString:(id)arg3;
+ (id)_expandMacrosInString:(id)arg1 usingBreakpoint:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy) NSString *filterableText; // @synthesize filterableText=_filterableText;
@property(getter=isDisplayable) BOOL displayable; // @synthesize displayable=_displayable;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)_expandExpressionsInString:(id)arg1;
- (void)extractAndSetExpressionsFromString:(id)arg1;
- (void)extractAndAddExpressionsFromString:(id)arg1;
- (void)clearExpressions;
- (id)expandExpressionsAndMacrosInString:(id)arg1 usingBreakpoint:(id)arg2;
- (BOOL)haveExpressionsBeenEvaluated;
- (void)resetExpressionResults;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_breakpointActionCommonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSArray *expressions; // @dynamic expressions;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableExpressions; // @dynamic mutableExpressions;
@property(readonly) Class superclass;

@end

