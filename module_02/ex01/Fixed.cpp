#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(val * (1 << Fixed::fractBits));
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (val << Fixed::fractBits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (*this);
}

bool	Fixed::operator>(const Fixed& other) const {
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(const Fixed& other) const {
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed& other) const {
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& other) const {
	Fixed	result;
	
	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const {
	Fixed	result;

	result.setRawbits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed	Fixed:: operator*(const Fixed& other) const {
	Fixed	result;

	result.setRawBits((this->getRawbits() * other.getRawBits()) >> Fixed::fractBits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const {
	if (other.getRawBits() == 0)
		throw std::logic_error("Division by zero!");
	return (Fixed(this->toFloat() / other.toFloat());
}

Fixed&	Fixed::operator++(void) {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	curr(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (curr);
}

Fixed&	Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	curr(*this);

	this->setRawBits(this->getRawBits() - 1);
	return (curr);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

int		Fixed::getRawBits() const
{
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

int 	Fixed::toInt() const
{
	return (this->value >> Fixed::fractBits);
}

float	Fixed::toFloat() const
{
	return ((float)this->value / (float)(1 << Fixed::fractBits));
}

Fixed&	Fixed::min(Fixed& x, Fixed& y) {
	if (x < y)
		return (x);
	return (y);
}

Fixed&	Fixed::max(Fixed& x, Fixed& y) {
	if (x > y)
		return (x);
	return (y);
}

const	Fixed&	Fixed::min(const Fixed& x, const Fixed& y) {
	if (x < y)
		return (x);
	return (y);
}

const	Fixed&	Fixed::max(const Fixed& x, const Fixed& y) {
	if (x > y)
		return (x);
	return (y);
}
