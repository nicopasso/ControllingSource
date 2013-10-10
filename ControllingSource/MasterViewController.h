//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Niccolò Passolunghi on 10/10/13.
//  Copyright (c) 2013 Niccolò Passolunghi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
