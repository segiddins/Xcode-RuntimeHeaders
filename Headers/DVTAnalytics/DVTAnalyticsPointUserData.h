//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalytics/DVTAnalyticsPointUserDataProtocol-Protocol.h>
#import <DVTAnalytics/DVTServicesJSONSerialization-Protocol.h>

@class NSString;

@interface DVTAnalyticsPointUserData : NSObject <DVTServicesJSONSerialization, DVTAnalyticsPointUserDataProtocol>
{
    BOOL _resolved;
    NSString *_name;
    NSString *_comments;
    NSString *_analyticsPointDefaultName;
    NSString *_locallySymbolicatedAnalyticsPointDefaultName;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)userDataWithName:(id)arg1 analyticsPointDefaultName:(id)arg2;
+ (id)userDataWithName:(id)arg1 comments:(id)arg2 resolved:(BOOL)arg3 analyticsPointDefaultName:(id)arg4;
@property(copy) NSString *locallySymbolicatedAnalyticsPointDefaultName; // @synthesize locallySymbolicatedAnalyticsPointDefaultName=_locallySymbolicatedAnalyticsPointDefaultName;
@property(copy) NSString *analyticsPointDefaultName; // @synthesize analyticsPointDefaultName=_analyticsPointDefaultName;
@property BOOL resolved; // @synthesize resolved=_resolved;
@property(copy) NSString *comments; // @synthesize comments=_comments;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)JSONRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

