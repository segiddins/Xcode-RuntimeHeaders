//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IDEIndexAvailableRefactoring : NSObject
{
    int _kind;
    struct compiler_uid_s *_identifier;
    NSString *_refactoringDescription;
}

- (void).cxx_destruct;
@property(retain) NSString *refactoringDescription; // @synthesize refactoringDescription=_refactoringDescription;
@property struct compiler_uid_s *identifier; // @synthesize identifier=_identifier;
@property(readonly) int kind; // @synthesize kind=_kind;
- (id)initWithKind:(int)arg1;

@end
