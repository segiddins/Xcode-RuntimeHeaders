//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VVTextResult : NSObject
{
    NSString *_string;
    struct _NSRange _range;
}

@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRange:(struct _NSRange)arg1 string:(id)arg2;

@end

