//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsServices/DYGuestApp.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface DYMobileApp : DYGuestApp
{
    NSString *_originDeviceIdentifier;
    NSString *_genre;
    NSArray *_subgenres;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *subgenres; // @synthesize subgenres=_subgenres;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *originDeviceIdentifier; // @synthesize originDeviceIdentifier=_originDeviceIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

