//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXMemberSymbol.h>

#import <DevToolsCore/PBXSignatureSymbol-Protocol.h>

@class NSArray, NSString;

@interface PBXMethodSymbol : PBXMemberSymbol <PBXSignatureSymbol>
{
    NSString *_cachedInvocation;
    NSString *_cachedUniqueName;
    NSArray *_cachedParameters;
    int _completionType;
}

+ (BOOL)canRepresentSymbolType:(int)arg1;
@property int completionType; // @synthesize completionType=_completionType;
- (id)uniqueName;
- (id)_objcInvocationStringIncludeTarget:(BOOL)arg1;
- (id)_objcDeclarationString;
- (id)_cInvocationString;
- (id)_cDeclarationString;
- (id)_javaInvocationStringIncludeTarget:(BOOL)arg1;
- (id)_javaDeclarationString;
- (id)_basicParametersStringUsingSelector:(SEL)arg1;
- (id)declarationString;
- (id)invocationStringIncludeTarget:(BOOL)arg1;
- (id)codeCompletionInvocationString;
- (id)invocationString;
- (id)helpMarkerSymbolValue;
- (id)helpMarkerSymbolType;
- (id)displayNameIncludingClassInfo:(BOOL)arg1;
- (BOOL)displayNameAllowsIndent;
- (id)_parametersStringWithFullClassNames:(BOOL)arg1;
- (id)javaParameters;
- (id)parameters;
- (BOOL)isOperator;
- (BOOL)isDestructor;
- (BOOL)isConstructor;
- (BOOL)isInstanceMember;
- (BOOL)isClassMember;
- (void)dealloc;

@end

