//
//  GRInstagramModel.h
//  Graph
//
//  Created by Michael Scaria on 1/25/14.
//  Copyright (c) 2014 MichaelScaria. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Constants.h"

@interface GRInstagramModel : NSObject
+ (GRInstagramModel *)sharedInstance;

+ (NSArray *)models;
+ (NSString *)modelForType:(MODEL_TYPE)modelType;
+ (NSString *)actionForType:(ACTION_TYPE)actionType;
+ (NSString *)fromForType:(FROM_TYPE)actionType;

+ (MODEL_TYPE)modelTypeForIndexPath:(NSIndexPath *)indexPath;
+ (ACTION_TYPE)actionTypeForIndexPath:(NSIndexPath *)indexPath;
+ (FROM_TYPE)fromTypeForIndexPath:(NSIndexPath *)indexPath;

+ (NSArray *)actionsWithModelType:(MODEL_TYPE)modelType;
+ (NSArray *)fromsWithAction:(ACTION_TYPE)actionType modelType:(MODEL_TYPE)modelType;

@end