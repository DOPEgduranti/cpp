/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:58:02 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 11:02:00 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), _target("default") {
	// std::cout << "ShrubberyCreationForm empty constructor has been called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery Creation", 145, 137), _target(target) {
	// std::cout << "ShrubberyCreationForm arguments constructor has been called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : AForm(other), _target(other._target) {
	// std::cout << "ShrubberyCreationForm copy constructor has been called" << std::endl;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
	// std::cout << "ShrubberyCreationForm destructor has been called" << std::endl;
};

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other) {
	this->_target = other._target;
	this->AForm::operator=(other);
	return (*this);
};

std::string ShrubberyCreationForm::getTarget(void) const {
	return (this->_target);
};

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
		throw (AForm::NotSignedExeption());
	if (executor.getGrade() > this->getExecGrade())
		throw (AForm::GradeTooLowException());
	std::ofstream outfile(this->_target.c_str());

	outfile << "                               $" << std::endl;
	outfile << "                               :$$" << std::endl;
	outfile << "                          seeee$$$Neeee" << std::endl;
	outfile << "                            R$$$F$$$$F" << std::endl;
	outfile << "                              $$$$$$" << std::endl;
	outfile << "                             @$$P*$$B" << std::endl;
	outfile << "                            z$#\"  $#$b" << std::endl;
	outfile << "                            \" d   'N \"" << std::endl;
	outfile << "                             @\"     ?r" << std::endl;
	outfile << "                           xF .       \"N" << std::endl;
	outfile << "                        .$> P54.R       `$" << std::endl;
	outfile << "                      $*   '*\"$$$  uoP***~" << std::endl;
	outfile << "                       #Noo \"?$N\"   #oL" << std::endl;
	outfile << "                          f       o$#$$\"e." << std::endl;
	outfile << "                         $  @b    hoR$$r ^\"$$b" << std::endl;
	outfile << "                      .M   ?B$E   *.B$$       .R" << std::endl;
	outfile << "                    .*     *\\ *.4*R         ..*" << std::endl;
	outfile << "                 oo#     ooL    d#R.     P##~" << std::endl;
	outfile << "                 $c    .\"\"P#$  @   P     k" << std::endl;
	outfile << "                   R$r ''?L$$  P  \"r     'N" << std::endl;
	outfile << "                     ^$ \"$$$` $.....JL     \"N." << std::endl;
	outfile << "                   .$\\           * P5\"LR      $.." << std::endl;
	outfile << "                ..* 4*R     xr    'PFN$$   .k    \"*****." << std::endl;
	outfile << "             od#\"   d#*.  \"*$$P~   \"?$*\" '#$$$\"       u\"" << std::endl;
	outfile << "          e\"\"      f   M   @F\"$  ec       x$\"$.     :\"" << std::endl;
	outfile << "          M        >  \"d       $$$$?$           .$$F`" << std::endl;
	outfile << "           \"P..  .$.....$L $$.4$$. \"   @#3$$   $E." << std::endl;
	outfile << "              '**..  *   R..$$ `R$*k.  fdM$$>     *.." << std::endl;
	outfile << "                J\"       *k$$$~  \"*$**o$o$$P        '*oo." << std::endl;
	outfile << "               P           #        \"$$$#*o          >  '####*oooo" << std::endl;
	outfile << "            .e\"            :e$$e.  F3  ^\"$P  :$$s :e@$ee        s\"" << std::endl;
	outfile << "          $P` M7>    $P$$k \"$\"?$3 @\"#N      CxN$$> .$$$       .P" << std::endl;
	outfile << "       M$~   J\\##   44N>$$  .d$.$d   @&      `$$$  F  .8..$$$*" << std::endl;
	outfile << "   .***     :   JM   *d$$*.$$.P  M  .P5     M          **." << std::endl;
	outfile << "   \"oo      J  .dP    ud$$od#   $oooooo$  oo$oo           ###ou" << std::endl;
	outfile << "      \"####$beeeee$.'$eeP#~        \"\"      $$$.    e$$$o       #heeee" << std::endl;
	outfile << "         :\"    \" z$r ^            o$N     '\"  \"   4$z>$$             \"\"\"#$$$" << std::endl;
	outfile << "        .~      F$4$B       r    F @#$.       ..   $8$$P M7                $" << std::endl;
	outfile << "      .*  $     8 $$B     .J$..  hP$$$F     .'PB$       J~##             .d~" << std::endl;
	outfile << "    .P  *$$$*    \"*\"       $$$    #**~      hdM$$>     <   JM.......*****" << std::endl;
	outfile << "  .P     $#*k       .o#>  P\" \"k   ..         '$$P      d  .JP'h" << std::endl;
	outfile << " \"\"\"hr ^        xe\"\"  >          \"\"c           ee    @beeeee$.)" << std::endl;
	outfile << "       \"\"\"t$$$$F\"      M        $`   R          > \"$r     \"     \"c" << std::endl;
	outfile << "                               oooooooooo" << std::endl;
	outfile << "                               z        z" << std::endl;
	outfile << "                               z.,ze.$$$z" << std::endl;
	outfile.close();
};
