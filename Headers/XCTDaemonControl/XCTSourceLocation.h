//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCTSourceLocation : NSObject
{
    NSString *_filePath;
    unsigned long long _lineNumber;
}

@property(readonly) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFilePath:(id)arg1 lineNumber:(unsigned long long)arg2;

@end

