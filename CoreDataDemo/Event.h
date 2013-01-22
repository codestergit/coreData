//
//  Event.h
//  CoreDataDemo
//
//  Created by GNDBL on 11/01/13.
//  Copyright (c) 2013 GNDBL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;

@end
