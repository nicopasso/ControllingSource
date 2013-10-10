//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Niccolò Passolunghi on 10/10/13.
//  Copyright (c) 2013 Niccolò Passolunghi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
