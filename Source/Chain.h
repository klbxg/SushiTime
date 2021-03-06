//
//  Chain.h
//  weiligame
//
//  Created by Olivia Li on 4/14/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Creature.h"

typedef NS_ENUM(NSUInteger, ChainType) {
    ChainTypeHorizontal,
    ChainTypeVertical,
    
    // Note: add any other shapes you want to detect to this list.
    //ChainTypeL,
    //ChainTypeT,
};

@interface Chain : NSObject

// The RWTCookies that are part of this chain.
@property (strong, nonatomic, readonly) NSArray *cookies;

// Whether this chain is horizontal or vertical.
@property (assign, nonatomic) ChainType chainType;

// How many points this chain is worth.
@property (assign, nonatomic) NSUInteger score;

- (void)addCookie:(Creature *)cookie;

@end
