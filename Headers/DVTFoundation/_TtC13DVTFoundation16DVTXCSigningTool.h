//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC13DVTFoundation16DVTXCSigningTool : NSObject
{
    // Error parsing type: , name: toolname
    // Error parsing type: , name: logAspect
    // Error parsing type: , name: defaultArguments
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)pkgSignWithPkgPath:(id)arg1 certificate:(id)arg2 error:(id *)arg3;
- (BOOL)codesignWithMode:(long long)arg1 path:(id)arg2 certificate:(id)arg3 entitlementsFile:(id)arg4 signingIdentifier:(id)arg5 error:(id *)arg6;
- (id)initWithLogAspect:(id)arg1;

@end

