#include "Exceptions.h"
Exceptions::Exceptions(Exceptions ex) :exception_(ex) {

}
Exceptions Exceptions::error() const {
	return exception_;
}