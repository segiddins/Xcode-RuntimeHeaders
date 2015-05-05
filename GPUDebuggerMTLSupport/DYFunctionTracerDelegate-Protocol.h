//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableString, NSString;

@protocol DYFunctionTracerDelegate <NSObject>

@optional
- (NSString *)unloadStringForURL:(NSString *)arg1;
- (NSString *)loadStringForURL:(NSString *)arg1 variableName:(NSString *)arg2 bufferType:(NSString *)arg3;
- (NSMutableArray *)constructTraceLinesWithFunction:(const struct Function *)arg1 arguments:(NSArray *)arg2;
- (NSMutableString *)constructTraceLineWithFunction:(const struct Function *)arg1 arguments:(NSArray *)arg2;
- (NSString *)rewriteVariable:(const char *)arg1 receiver:(unsigned long long)arg2;
- (NSString *)rewriteArgument:(const struct Argument *)arg1;
- (NSString *)getCastForArgument:(const struct Argument *)arg1 inFunction:(const struct Function *)arg2;
- (NSString *)createArgument:(const struct Argument *)arg1 forFunction:(const struct Function *)arg2 withValue:(NSString *)arg3;
- (NSString *)rewriteReceiver:(unsigned long long)arg1;
- (NSString *)rewriteURL:(const char *)arg1;
@end

