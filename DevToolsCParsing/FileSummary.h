//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPointerArray, NSString;

@interface FileSummary : NSObject
{
    NSString *_filename;
    NSPointerArray *_typedefNames;
    NSPointerArray *_objcClassNames;
    NSMutableArray *_macros;
    NSMutableArray *_includes;
    BOOL _changesThisCompile;
}

- (BOOL)changesThisCompile;
- (void)clearChangesThisCompile;
- (id)includes;
- (id)macros;
- (void)enumerateOverObjcClassNamesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateOverTypedefNamesUsingBlock:(CDUnknownBlockType)arg1;
- (void)addInclude:(id)arg1;
- (void)addMacroDef:(const char *)arg1 expansion:(id)arg2;
- (void)addObjcClassName:(const char *)arg1;
- (void)addTypedefName:(const char *)arg1;
- (void)dealloc;
- (id)initWithFilename:(id)arg1;

@end

