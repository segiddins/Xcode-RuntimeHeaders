//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDESchemeActionTestNoticeSummary : NSObject
{
    NSString *_message;
    NSString *_fileName;
    long long _lineNumber;
}

- (void).cxx_destruct;
@property(readonly) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, copy) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, copy) NSString *message; // @synthesize message=_message;
- (BOOL)isEqualToTestFailureSummary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithMessage:(id)arg1 fileName:(id)arg2 lineNumber:(long long)arg3;

@end
