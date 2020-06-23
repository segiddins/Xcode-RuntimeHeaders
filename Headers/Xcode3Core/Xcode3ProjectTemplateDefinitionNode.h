//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface Xcode3ProjectTemplateDefinitionNode : NSObject
{
    Xcode3ProjectTemplateDefinitionNode *_wildcardNode;
    NSArray *_children;
    NSString *_name;
    NSString *_expansionString;
}

- (void).cxx_destruct;
@property(copy) NSString *expansionString; // @synthesize expansionString=_expansionString;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSArray *children; // @synthesize children=_children;
- (id)description;
- (id)outputToFilePath:(id)arg1 withDefinitions:(id)arg2 indentString:(id)arg3 rootGroup:(id)arg4 targets:(id)arg5 basedOn:(id)arg6 targetName:(id)arg7 suppressTargetGroup:(BOOL)arg8 deferredTargetAdditions:(id)arg9 error:(id *)arg10 replacementHandler:(CDUnknownBlockType)arg11;
- (id)outputInDirectory:(id)arg1 withDefinitions:(id)arg2 indentString:(id)arg3 rootGroup:(id)arg4 targets:(id)arg5 basedOn:(id)arg6 deferredTargetAdditions:(id)arg7 error:(id *)arg8 replacementHandler:(CDUnknownBlockType)arg9;
- (BOOL)doAssetGenerationForPath:(id)arg1 definition:(id)arg2 replacementFileName:(id)arg3 replacementTarget:(id)arg4 error:(id *)arg5 replacementHandler:(CDUnknownBlockType)arg6;
- (BOOL)shouldProcessPath:(id)arg1;
- (void)addToString:(id)arg1 withPrefixNames:(id)arg2 definitions:(id)arg3 indent:(long long *)arg4 indentString:(id)arg5;
- (id)definitionForNames:(id)arg1 withDefinitions:(id)arg2;
@property(readonly) NSMutableArray *mutableChildren;
- (void)addNodeWithNames:(id)arg1;
- (id)nodeWithName:(id)arg1;
- (void)addChildNodes:(id)arg1;
- (struct _NSRange)rangeOfNextSeparatorInString:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfNextParenCloserInString:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfNextMacroCloserInString:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfNextSeparatorOrOpenerInString:(id)arg1 range:(struct _NSRange)arg2 foundScanType:(long long *)arg3;
- (id)init;

@end

