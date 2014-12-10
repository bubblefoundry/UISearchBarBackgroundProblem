//
//  DetailViewController.h
//  SearchBarBackgroundProblem
//
//  Created by Peter Robinett on 12/10/14.
//  Copyright (c) 2014 Bubble Foundry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

