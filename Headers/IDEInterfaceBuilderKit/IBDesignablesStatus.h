//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class IBDesignablesStatusAction, NSDate, NSString;

@interface IBDesignablesStatus : NSObject <NSCopying>
{
    long long _statusValue;
    NSString *_primaryStatusText;
    NSString *_secondaryStatusText;
    NSDate *_lastUpdateDate;
    IBDesignablesStatusAction *_action;
}

+ (id)statusWithValue:(long long)arg1 primaryStatusText:(id)arg2 secondaryStatusText:(id)arg3 lastUpdateDate:(id)arg4 action:(id)arg5;
+ (id)upToDateStatusWithLastUpdateDate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IBDesignablesStatusAction *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly, copy, nonatomic) NSString *secondaryStatusText; // @synthesize secondaryStatusText=_secondaryStatusText;
@property(readonly, copy, nonatomic) NSString *primaryStatusText; // @synthesize primaryStatusText=_primaryStatusText;
@property(readonly, nonatomic) long long statusValue; // @synthesize statusValue=_statusValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStatusValue:(long long)arg1 primaryStatusText:(id)arg2 secondaryStatusText:(id)arg3 lastUpdateDate:(id)arg4 action:(id)arg5;

@end

