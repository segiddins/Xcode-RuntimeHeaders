//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEUpgradeContext.h>

@protocol IDEBlueprint;

@interface IDEUpgradeBlueprintContext : IDEUpgradeContext
{
    id <IDEBlueprint> _blueprint;
}

- (void).cxx_destruct;
@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
- (id)description;
- (id)initWithBlueprint:(id)arg1;

@end

