//
//  BNRItem.h
//  RandomItems
//
//  Created by Test Mac on 6/03/2015.
//  Copyright (c) 2015 Chris Jewell. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject

+ (instancetype)randomItem;

// Designated initializer for BNRItem
- (instancetype)initWithItemName:(NSString *)name
                  valueInDollars:(int)value
                    serialNumber:(NSString *)sNumber;

- (instancetype)initWithItemName:(NSString *)name;

- (instancetype)initWithItemName:(NSString *)name serialNumber:(NSString *)sNumber;

-(void)setContainedItem:(BNRItem *)item;
-(BNRItem *)containedItem;

-(void)setContainer:(BNRItem *)item;
-(BNRItem *)container;

@property (nonatomic, strong) BNRItem *containedItem;
@property (nonatomic, weak) BNRItem *container;

@property (nonatomic, copy) BNRItem *itemName;
@property (nonatomic, copy) BNRItem *serialNumber;
@property (nonatomic) int *valueInDollars;
@property (nonatomic, readonly, strong) BNRItem *dateCreated;

@end
