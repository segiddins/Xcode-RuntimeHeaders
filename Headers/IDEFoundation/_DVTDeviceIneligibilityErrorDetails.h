//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _DVTDeviceIneligibilityErrorDetails : NSObject
{
    NSString *_token;
    NSString *_errorDescription;
    NSString *_suggestion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;

@end
