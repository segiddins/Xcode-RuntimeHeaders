//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13IDEFoundation21IDEConsoleOutputGroup : NSObject
{
    MISSING_TYPE *parent;
    MISSING_TYPE *title;
    MISSING_TYPE *entries;
    MISSING_TYPE *closed;
    MISSING_TYPE *stream;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)dumpWithDepth:(long long)arg1;
- (void)close;
- (void)addText:(id)arg1 addNewlineIfNeeded:(BOOL)arg2;
- (id)addNewSubgroupWithTitle:(id)arg1;
@property(nonatomic, readonly) _TtC13IDEFoundation21IDEConsoleOutputGroup *root;
- (id)initWithTitle:(id)arg1 parent:(id)arg2 stream:(struct __sFILE *)arg3;

@end

