//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXSourceScanner.h>

@interface PBXJavaSourceScanner : PBXSourceScanner
{
    long long _class;
    long long _interface;
    long long _native;
    long long _abstract;
    long long _package;
    long long _import;
    long long _new;
}

- (id)parse;
- (void)initInterestingSymbols;

@end

