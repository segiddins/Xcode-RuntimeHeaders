//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DYPRemark;

__attribute__((visibility("hidden")))
@interface GPUTracePipelineStatisticsRemarkLocation : NSObject
{
    BOOL _isTarget;
    id <DYPRemark> _remark;
    long long _child;
}

@property(nonatomic) BOOL isTarget; // @synthesize isTarget=_isTarget;
@property(nonatomic) long long child; // @synthesize child=_child;
@property(retain, nonatomic) id <DYPRemark> remark; // @synthesize remark=_remark;
- (void).cxx_destruct;

@end

