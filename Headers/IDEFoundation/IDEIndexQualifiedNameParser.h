//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEIndexCollection, NSString;

@interface IDEIndexQualifiedNameParser : NSObject
{
    BOOL _success;
    NSString *_containerName;
    NSString *_symbolName;
    IDEIndexCollection *_kinds;
}

- (void).cxx_destruct;
@property(readonly) BOOL success; // @synthesize success=_success;
@property(readonly, nonatomic) IDEIndexCollection *kinds; // @synthesize kinds=_kinds;
@property(readonly, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (void)parse:(id)arg1;
- (void)parseObjCMethod:(id)arg1;
- (id)parseSelector:(id)arg1;
- (id)parseIdentifier:(id)arg1;
- (id)parseString:(id)arg1 withCharSet:(id)arg2;
- (void)skipWhitespace:(id)arg1;
- (id)initWithString:(id)arg1;

@end

